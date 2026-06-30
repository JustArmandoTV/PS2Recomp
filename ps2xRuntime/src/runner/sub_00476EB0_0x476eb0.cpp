#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00476EB0
// Address: 0x476eb0 - 0x477240
void sub_00476EB0_0x476eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476EB0_0x476eb0");
#endif

    switch (ctx->pc) {
        case 0x476eb0u: goto label_476eb0;
        case 0x476eb4u: goto label_476eb4;
        case 0x476eb8u: goto label_476eb8;
        case 0x476ebcu: goto label_476ebc;
        case 0x476ec0u: goto label_476ec0;
        case 0x476ec4u: goto label_476ec4;
        case 0x476ec8u: goto label_476ec8;
        case 0x476eccu: goto label_476ecc;
        case 0x476ed0u: goto label_476ed0;
        case 0x476ed4u: goto label_476ed4;
        case 0x476ed8u: goto label_476ed8;
        case 0x476edcu: goto label_476edc;
        case 0x476ee0u: goto label_476ee0;
        case 0x476ee4u: goto label_476ee4;
        case 0x476ee8u: goto label_476ee8;
        case 0x476eecu: goto label_476eec;
        case 0x476ef0u: goto label_476ef0;
        case 0x476ef4u: goto label_476ef4;
        case 0x476ef8u: goto label_476ef8;
        case 0x476efcu: goto label_476efc;
        case 0x476f00u: goto label_476f00;
        case 0x476f04u: goto label_476f04;
        case 0x476f08u: goto label_476f08;
        case 0x476f0cu: goto label_476f0c;
        case 0x476f10u: goto label_476f10;
        case 0x476f14u: goto label_476f14;
        case 0x476f18u: goto label_476f18;
        case 0x476f1cu: goto label_476f1c;
        case 0x476f20u: goto label_476f20;
        case 0x476f24u: goto label_476f24;
        case 0x476f28u: goto label_476f28;
        case 0x476f2cu: goto label_476f2c;
        case 0x476f30u: goto label_476f30;
        case 0x476f34u: goto label_476f34;
        case 0x476f38u: goto label_476f38;
        case 0x476f3cu: goto label_476f3c;
        case 0x476f40u: goto label_476f40;
        case 0x476f44u: goto label_476f44;
        case 0x476f48u: goto label_476f48;
        case 0x476f4cu: goto label_476f4c;
        case 0x476f50u: goto label_476f50;
        case 0x476f54u: goto label_476f54;
        case 0x476f58u: goto label_476f58;
        case 0x476f5cu: goto label_476f5c;
        case 0x476f60u: goto label_476f60;
        case 0x476f64u: goto label_476f64;
        case 0x476f68u: goto label_476f68;
        case 0x476f6cu: goto label_476f6c;
        case 0x476f70u: goto label_476f70;
        case 0x476f74u: goto label_476f74;
        case 0x476f78u: goto label_476f78;
        case 0x476f7cu: goto label_476f7c;
        case 0x476f80u: goto label_476f80;
        case 0x476f84u: goto label_476f84;
        case 0x476f88u: goto label_476f88;
        case 0x476f8cu: goto label_476f8c;
        case 0x476f90u: goto label_476f90;
        case 0x476f94u: goto label_476f94;
        case 0x476f98u: goto label_476f98;
        case 0x476f9cu: goto label_476f9c;
        case 0x476fa0u: goto label_476fa0;
        case 0x476fa4u: goto label_476fa4;
        case 0x476fa8u: goto label_476fa8;
        case 0x476facu: goto label_476fac;
        case 0x476fb0u: goto label_476fb0;
        case 0x476fb4u: goto label_476fb4;
        case 0x476fb8u: goto label_476fb8;
        case 0x476fbcu: goto label_476fbc;
        case 0x476fc0u: goto label_476fc0;
        case 0x476fc4u: goto label_476fc4;
        case 0x476fc8u: goto label_476fc8;
        case 0x476fccu: goto label_476fcc;
        case 0x476fd0u: goto label_476fd0;
        case 0x476fd4u: goto label_476fd4;
        case 0x476fd8u: goto label_476fd8;
        case 0x476fdcu: goto label_476fdc;
        case 0x476fe0u: goto label_476fe0;
        case 0x476fe4u: goto label_476fe4;
        case 0x476fe8u: goto label_476fe8;
        case 0x476fecu: goto label_476fec;
        case 0x476ff0u: goto label_476ff0;
        case 0x476ff4u: goto label_476ff4;
        case 0x476ff8u: goto label_476ff8;
        case 0x476ffcu: goto label_476ffc;
        case 0x477000u: goto label_477000;
        case 0x477004u: goto label_477004;
        case 0x477008u: goto label_477008;
        case 0x47700cu: goto label_47700c;
        case 0x477010u: goto label_477010;
        case 0x477014u: goto label_477014;
        case 0x477018u: goto label_477018;
        case 0x47701cu: goto label_47701c;
        case 0x477020u: goto label_477020;
        case 0x477024u: goto label_477024;
        case 0x477028u: goto label_477028;
        case 0x47702cu: goto label_47702c;
        case 0x477030u: goto label_477030;
        case 0x477034u: goto label_477034;
        case 0x477038u: goto label_477038;
        case 0x47703cu: goto label_47703c;
        case 0x477040u: goto label_477040;
        case 0x477044u: goto label_477044;
        case 0x477048u: goto label_477048;
        case 0x47704cu: goto label_47704c;
        case 0x477050u: goto label_477050;
        case 0x477054u: goto label_477054;
        case 0x477058u: goto label_477058;
        case 0x47705cu: goto label_47705c;
        case 0x477060u: goto label_477060;
        case 0x477064u: goto label_477064;
        case 0x477068u: goto label_477068;
        case 0x47706cu: goto label_47706c;
        case 0x477070u: goto label_477070;
        case 0x477074u: goto label_477074;
        case 0x477078u: goto label_477078;
        case 0x47707cu: goto label_47707c;
        case 0x477080u: goto label_477080;
        case 0x477084u: goto label_477084;
        case 0x477088u: goto label_477088;
        case 0x47708cu: goto label_47708c;
        case 0x477090u: goto label_477090;
        case 0x477094u: goto label_477094;
        case 0x477098u: goto label_477098;
        case 0x47709cu: goto label_47709c;
        case 0x4770a0u: goto label_4770a0;
        case 0x4770a4u: goto label_4770a4;
        case 0x4770a8u: goto label_4770a8;
        case 0x4770acu: goto label_4770ac;
        case 0x4770b0u: goto label_4770b0;
        case 0x4770b4u: goto label_4770b4;
        case 0x4770b8u: goto label_4770b8;
        case 0x4770bcu: goto label_4770bc;
        case 0x4770c0u: goto label_4770c0;
        case 0x4770c4u: goto label_4770c4;
        case 0x4770c8u: goto label_4770c8;
        case 0x4770ccu: goto label_4770cc;
        case 0x4770d0u: goto label_4770d0;
        case 0x4770d4u: goto label_4770d4;
        case 0x4770d8u: goto label_4770d8;
        case 0x4770dcu: goto label_4770dc;
        case 0x4770e0u: goto label_4770e0;
        case 0x4770e4u: goto label_4770e4;
        case 0x4770e8u: goto label_4770e8;
        case 0x4770ecu: goto label_4770ec;
        case 0x4770f0u: goto label_4770f0;
        case 0x4770f4u: goto label_4770f4;
        case 0x4770f8u: goto label_4770f8;
        case 0x4770fcu: goto label_4770fc;
        case 0x477100u: goto label_477100;
        case 0x477104u: goto label_477104;
        case 0x477108u: goto label_477108;
        case 0x47710cu: goto label_47710c;
        case 0x477110u: goto label_477110;
        case 0x477114u: goto label_477114;
        case 0x477118u: goto label_477118;
        case 0x47711cu: goto label_47711c;
        case 0x477120u: goto label_477120;
        case 0x477124u: goto label_477124;
        case 0x477128u: goto label_477128;
        case 0x47712cu: goto label_47712c;
        case 0x477130u: goto label_477130;
        case 0x477134u: goto label_477134;
        case 0x477138u: goto label_477138;
        case 0x47713cu: goto label_47713c;
        case 0x477140u: goto label_477140;
        case 0x477144u: goto label_477144;
        case 0x477148u: goto label_477148;
        case 0x47714cu: goto label_47714c;
        case 0x477150u: goto label_477150;
        case 0x477154u: goto label_477154;
        case 0x477158u: goto label_477158;
        case 0x47715cu: goto label_47715c;
        case 0x477160u: goto label_477160;
        case 0x477164u: goto label_477164;
        case 0x477168u: goto label_477168;
        case 0x47716cu: goto label_47716c;
        case 0x477170u: goto label_477170;
        case 0x477174u: goto label_477174;
        case 0x477178u: goto label_477178;
        case 0x47717cu: goto label_47717c;
        case 0x477180u: goto label_477180;
        case 0x477184u: goto label_477184;
        case 0x477188u: goto label_477188;
        case 0x47718cu: goto label_47718c;
        case 0x477190u: goto label_477190;
        case 0x477194u: goto label_477194;
        case 0x477198u: goto label_477198;
        case 0x47719cu: goto label_47719c;
        case 0x4771a0u: goto label_4771a0;
        case 0x4771a4u: goto label_4771a4;
        case 0x4771a8u: goto label_4771a8;
        case 0x4771acu: goto label_4771ac;
        case 0x4771b0u: goto label_4771b0;
        case 0x4771b4u: goto label_4771b4;
        case 0x4771b8u: goto label_4771b8;
        case 0x4771bcu: goto label_4771bc;
        case 0x4771c0u: goto label_4771c0;
        case 0x4771c4u: goto label_4771c4;
        case 0x4771c8u: goto label_4771c8;
        case 0x4771ccu: goto label_4771cc;
        case 0x4771d0u: goto label_4771d0;
        case 0x4771d4u: goto label_4771d4;
        case 0x4771d8u: goto label_4771d8;
        case 0x4771dcu: goto label_4771dc;
        case 0x4771e0u: goto label_4771e0;
        case 0x4771e4u: goto label_4771e4;
        case 0x4771e8u: goto label_4771e8;
        case 0x4771ecu: goto label_4771ec;
        case 0x4771f0u: goto label_4771f0;
        case 0x4771f4u: goto label_4771f4;
        case 0x4771f8u: goto label_4771f8;
        case 0x4771fcu: goto label_4771fc;
        case 0x477200u: goto label_477200;
        case 0x477204u: goto label_477204;
        case 0x477208u: goto label_477208;
        case 0x47720cu: goto label_47720c;
        case 0x477210u: goto label_477210;
        case 0x477214u: goto label_477214;
        case 0x477218u: goto label_477218;
        case 0x47721cu: goto label_47721c;
        case 0x477220u: goto label_477220;
        case 0x477224u: goto label_477224;
        case 0x477228u: goto label_477228;
        case 0x47722cu: goto label_47722c;
        case 0x477230u: goto label_477230;
        case 0x477234u: goto label_477234;
        case 0x477238u: goto label_477238;
        case 0x47723cu: goto label_47723c;
        default: break;
    }

    ctx->pc = 0x476eb0u;

label_476eb0:
    // 0x476eb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x476eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_476eb4:
    // 0x476eb4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x476eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_476eb8:
    // 0x476eb8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x476eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_476ebc:
    // 0x476ebc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x476ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_476ec0:
    // 0x476ec0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x476ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_476ec4:
    // 0x476ec4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x476ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_476ec8:
    // 0x476ec8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x476ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_476ecc:
    // 0x476ecc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x476eccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_476ed0:
    // 0x476ed0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x476ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_476ed4:
    // 0x476ed4: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x476ed4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_476ed8:
    // 0x476ed8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x476ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_476edc:
    // 0x476edc: 0x26d62100  addiu       $s6, $s6, 0x2100
    ctx->pc = 0x476edcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8448));
label_476ee0:
    // 0x476ee0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x476ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_476ee4:
    // 0x476ee4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x476ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_476ee8:
    // 0x476ee8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x476ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_476eec:
    // 0x476eec: 0x641200ff  daddiu      $s2, $zero, 0xFF
    ctx->pc = 0x476eecu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_476ef0:
    // 0x476ef0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x476ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_476ef4:
    // 0x476ef4: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x476ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_476ef8:
    // 0x476ef8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x476ef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_476efc:
    // 0x476efc: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x476efcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_476f00:
    // 0x476f00: 0xc4400890  lwc1        $f0, 0x890($v0)
    ctx->pc = 0x476f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476f04:
    // 0x476f04: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x476f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_476f08:
    // 0x476f08: 0xc4610894  lwc1        $f1, 0x894($v1)
    ctx->pc = 0x476f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_476f0c:
    // 0x476f0c: 0x8c95006c  lw          $s5, 0x6C($a0)
    ctx->pc = 0x476f0cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_476f10:
    // 0x476f10: 0x2631f300  addiu       $s1, $s1, -0xD00
    ctx->pc = 0x476f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963968));
label_476f14:
    // 0x476f14: 0x26109bc0  addiu       $s0, $s0, -0x6440
    ctx->pc = 0x476f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941632));
label_476f18:
    // 0x476f18: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x476f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_476f1c:
    // 0x476f1c: 0xc4420898  lwc1        $f2, 0x898($v0)
    ctx->pc = 0x476f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_476f20:
    // 0x476f20: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x476f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_476f24:
    // 0x476f24: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x476f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_476f28:
    // 0x476f28: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x476f28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_476f2c:
    // 0x476f2c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x476f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_476f30:
    // 0x476f30: 0xc44108a0  lwc1        $f1, 0x8A0($v0)
    ctx->pc = 0x476f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_476f34:
    // 0x476f34: 0xc460089c  lwc1        $f0, 0x89C($v1)
    ctx->pc = 0x476f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476f38:
    // 0x476f38: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x476f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_476f3c:
    // 0x476f3c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x476f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_476f40:
    // 0x476f40: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x476f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_476f44:
    // 0x476f44: 0xc44008a4  lwc1        $f0, 0x8A4($v0)
    ctx->pc = 0x476f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_476f48:
    // 0x476f48: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x476f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_476f4c:
    // 0x476f4c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x476f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_476f50:
    // 0x476f50: 0x9443f304  lhu         $v1, -0xCFC($v0)
    ctx->pc = 0x476f50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963972)));
label_476f54:
    // 0x476f54: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x476f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_476f58:
    // 0x476f58: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x476f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_476f5c:
    // 0x476f5c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x476f5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_476f60:
    // 0x476f60: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x476f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_476f64:
    // 0x476f64: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x476f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_476f68:
    // 0x476f68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x476f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_476f6c:
    // 0x476f6c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_476f70:
    if (ctx->pc == 0x476F70u) {
        ctx->pc = 0x476F70u;
            // 0x476f70: 0xa39823  subu        $s3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->pc = 0x476F74u;
        goto label_476f74;
    }
    ctx->pc = 0x476F6Cu;
    {
        const bool branch_taken_0x476f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x476F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476F6Cu;
            // 0x476f70: 0xa39823  subu        $s3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476f6c) {
            ctx->pc = 0x476FD4u;
            goto label_476fd4;
        }
    }
    ctx->pc = 0x476F74u;
label_476f74:
    // 0x476f74: 0xc48200a4  lwc1        $f2, 0xA4($a0)
    ctx->pc = 0x476f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_476f78:
    // 0x476f78: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x476f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_476f7c:
    // 0x476f7c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x476f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_476f80:
    // 0x476f80: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x476f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_476f84:
    // 0x476f84: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x476f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_476f88:
    // 0x476f88: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x476f88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_476f8c:
    // 0x476f8c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x476f8cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_476f90:
    // 0x476f90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x476f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_476f94:
    // 0x476f94: 0x0  nop
    ctx->pc = 0x476f94u;
    // NOP
label_476f98:
    // 0x476f98: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x476f98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_476f9c:
    // 0x476f9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x476f9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_476fa0:
    // 0x476fa0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_476fa4:
    if (ctx->pc == 0x476FA4u) {
        ctx->pc = 0x476FA4u;
            // 0x476fa4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x476FA8u;
        goto label_476fa8;
    }
    ctx->pc = 0x476FA0u;
    {
        const bool branch_taken_0x476fa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x476fa0) {
            ctx->pc = 0x476FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x476FA0u;
            // 0x476fa4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x476FB8u;
            goto label_476fb8;
        }
    }
    ctx->pc = 0x476FA8u;
label_476fa8:
    // 0x476fa8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x476fa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_476fac:
    // 0x476fac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x476facu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_476fb0:
    // 0x476fb0: 0x10000007  b           . + 4 + (0x7 << 2)
label_476fb4:
    if (ctx->pc == 0x476FB4u) {
        ctx->pc = 0x476FB4u;
            // 0x476fb4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x476FB8u;
        goto label_476fb8;
    }
    ctx->pc = 0x476FB0u;
    {
        const bool branch_taken_0x476fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476FB0u;
            // 0x476fb4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x476fb0) {
            ctx->pc = 0x476FD0u;
            goto label_476fd0;
        }
    }
    ctx->pc = 0x476FB8u;
label_476fb8:
    // 0x476fb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x476fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_476fbc:
    // 0x476fbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x476fbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_476fc0:
    // 0x476fc0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x476fc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_476fc4:
    // 0x476fc4: 0x0  nop
    ctx->pc = 0x476fc4u;
    // NOP
label_476fc8:
    // 0x476fc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x476fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_476fcc:
    // 0x476fcc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x476fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_476fd0:
    // 0x476fd0: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x476fd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_476fd4:
    // 0x476fd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x476fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_476fd8:
    // 0x476fd8: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x476fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_476fdc:
    // 0x476fdc: 0xc0506ac  jal         func_141AB0
label_476fe0:
    if (ctx->pc == 0x476FE0u) {
        ctx->pc = 0x476FE0u;
            // 0x476fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x476FE4u;
        goto label_476fe4;
    }
    ctx->pc = 0x476FDCu;
    SET_GPR_U32(ctx, 31, 0x476FE4u);
    ctx->pc = 0x476FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x476FDCu;
            // 0x476fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476FE4u; }
        if (ctx->pc != 0x476FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x476FE4u; }
        if (ctx->pc != 0x476FE4u) { return; }
    }
    ctx->pc = 0x476FE4u;
label_476fe4:
    // 0x476fe4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x476fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_476fe8:
    // 0x476fe8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x476fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_476fec:
    // 0x476fec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x476fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_476ff0:
    // 0x476ff0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x476ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_476ff4:
    // 0x476ff4: 0x320f809  jalr        $t9
label_476ff8:
    if (ctx->pc == 0x476FF8u) {
        ctx->pc = 0x476FF8u;
            // 0x476ff8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x476FFCu;
        goto label_476ffc;
    }
    ctx->pc = 0x476FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x476FFCu);
        ctx->pc = 0x476FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x476FF4u;
            // 0x476ff8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x476FFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x476FFCu; }
            if (ctx->pc != 0x476FFCu) { return; }
        }
        }
    }
    ctx->pc = 0x476FFCu;
label_476ffc:
    // 0x476ffc: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x476ffcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_477000:
    // 0x477000: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x477000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_477004:
    // 0x477004: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x477004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_477008:
    // 0x477008: 0x92260058  lbu         $a2, 0x58($s1)
    ctx->pc = 0x477008u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_47700c:
    // 0x47700c: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x47700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477010:
    // 0x477010: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x477010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_477014:
    // 0x477014: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x477014u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477018:
    // 0x477018: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x477018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_47701c:
    // 0x47701c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x47701cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_477020:
    // 0x477020: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x477020u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_477024:
    // 0x477024: 0x86c30002  lh          $v1, 0x2($s6)
    ctx->pc = 0x477024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_477028:
    // 0x477028: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x477028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_47702c:
    // 0x47702c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47702cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_477030:
    // 0x477030: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x477030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_477034:
    // 0x477034: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x477034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_477038:
    // 0x477038: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x477038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_47703c:
    // 0x47703c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47703cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_477040:
    // 0x477040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x477040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477044:
    // 0x477044: 0x0  nop
    ctx->pc = 0x477044u;
    // NOP
label_477048:
    // 0x477048: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x477048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_47704c:
    // 0x47704c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x47704cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477050:
    // 0x477050: 0x0  nop
    ctx->pc = 0x477050u;
    // NOP
label_477054:
    // 0x477054: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x477054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_477058:
    // 0x477058: 0x46011502  mul.s       $f20, $f2, $f1
    ctx->pc = 0x477058u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_47705c:
    // 0x47705c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x47705cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_477060:
    // 0x477060: 0xc60100ac  lwc1        $f1, 0xAC($s0)
    ctx->pc = 0x477060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477064:
    // 0x477064: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x477064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_477068:
    // 0x477068: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x477068u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_47706c:
    // 0x47706c: 0x46140380  add.s       $f14, $f0, $f20
    ctx->pc = 0x47706cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_477070:
    // 0x477070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x477070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477074:
    // 0x477074: 0x0  nop
    ctx->pc = 0x477074u;
    // NOP
label_477078:
    // 0x477078: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x477078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47707c:
    // 0x47707c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x47707cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_477080:
    // 0x477080: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x477080u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_477084:
    // 0x477084: 0xc0bc284  jal         func_2F0A10
label_477088:
    if (ctx->pc == 0x477088u) {
        ctx->pc = 0x477088u;
            // 0x477088: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x47708Cu;
        goto label_47708c;
    }
    ctx->pc = 0x477084u;
    SET_GPR_U32(ctx, 31, 0x47708Cu);
    ctx->pc = 0x477088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477084u;
            // 0x477088: 0x460103c0  add.s       $f15, $f0, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47708Cu; }
        if (ctx->pc != 0x47708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47708Cu; }
        if (ctx->pc != 0x47708Cu) { return; }
    }
    ctx->pc = 0x47708Cu;
label_47708c:
    // 0x47708c: 0x92220059  lbu         $v0, 0x59($s1)
    ctx->pc = 0x47708cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
label_477090:
    // 0x477090: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_477094:
    if (ctx->pc == 0x477094u) {
        ctx->pc = 0x477094u;
            // 0x477094: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x477098u;
        goto label_477098;
    }
    ctx->pc = 0x477090u;
    {
        const bool branch_taken_0x477090 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x477090) {
            ctx->pc = 0x477094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x477090u;
            // 0x477094: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4770A4u;
            goto label_4770a4;
        }
    }
    ctx->pc = 0x477098u;
label_477098:
    // 0x477098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x477098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47709c:
    // 0x47709c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4770a0:
    if (ctx->pc == 0x4770A0u) {
        ctx->pc = 0x4770A0u;
            // 0x4770a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4770A4u;
        goto label_4770a4;
    }
    ctx->pc = 0x47709Cu;
    {
        const bool branch_taken_0x47709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4770A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47709Cu;
            // 0x4770a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x47709c) {
            ctx->pc = 0x4770BCu;
            goto label_4770bc;
        }
    }
    ctx->pc = 0x4770A4u;
label_4770a4:
    // 0x4770a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4770a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4770a8:
    // 0x4770a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4770a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4770ac:
    // 0x4770ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4770acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4770b0:
    // 0x4770b0: 0x0  nop
    ctx->pc = 0x4770b0u;
    // NOP
label_4770b4:
    // 0x4770b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4770b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4770b8:
    // 0x4770b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4770b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4770bc:
    // 0x4770bc: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x4770bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4770c0:
    // 0x4770c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4770c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4770c4:
    // 0x4770c4: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x4770c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4770c8:
    // 0x4770c8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4770c8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4770cc:
    // 0x4770cc: 0x0  nop
    ctx->pc = 0x4770ccu;
    // NOP
label_4770d0:
    // 0x4770d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4770d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4770d4:
    // 0x4770d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4770d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4770d8:
    // 0x4770d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4770d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4770dc:
    // 0x4770dc: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x4770dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_4770e0:
    // 0x4770e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4770e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4770e4:
    // 0x4770e4: 0x3a820005  xori        $v0, $s4, 0x5
    ctx->pc = 0x4770e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)5);
label_4770e8:
    // 0x4770e8: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x4770e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_4770ec:
    // 0x4770ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4770ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4770f0:
    // 0x4770f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4770f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4770f4:
    // 0x4770f4: 0x2a4001a  div         $zero, $s5, $a0
    ctx->pc = 0x4770f4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4770f8:
    // 0x4770f8: 0x2812  mflo        $a1
    ctx->pc = 0x4770f8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_4770fc:
    // 0x4770fc: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x4770fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_477100:
    // 0x477100: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x477100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_477104:
    // 0x477104: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x477104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_477108:
    // 0x477108: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_47710c:
    if (ctx->pc == 0x47710Cu) {
        ctx->pc = 0x47710Cu;
            // 0x47710c: 0x2a4a823  subu        $s5, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->pc = 0x477110u;
        goto label_477110;
    }
    ctx->pc = 0x477108u;
    {
        const bool branch_taken_0x477108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47710Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477108u;
            // 0x47710c: 0x2a4a823  subu        $s5, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477108) {
            ctx->pc = 0x4771B0u;
            goto label_4771b0;
        }
    }
    ctx->pc = 0x477110u;
label_477110:
    // 0x477110: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x477110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_477114:
    // 0x477114: 0x24a3000d  addiu       $v1, $a1, 0xD
    ctx->pc = 0x477114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_477118:
    // 0x477118: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x477118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_47711c:
    // 0x47711c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x47711cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_477120:
    // 0x477120: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x477120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_477124:
    // 0x477124: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x477124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_477128:
    // 0x477128: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x477128u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47712c:
    // 0x47712c: 0x86c30002  lh          $v1, 0x2($s6)
    ctx->pc = 0x47712cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_477130:
    // 0x477130: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x477130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_477134:
    // 0x477134: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x477134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_477138:
    // 0x477138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x477138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47713c:
    // 0x47713c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47713cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477140:
    // 0x477140: 0x0  nop
    ctx->pc = 0x477140u;
    // NOP
label_477144:
    // 0x477144: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x477144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_477148:
    // 0x477148: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x477148u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47714c:
    // 0x47714c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x47714cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_477150:
    // 0x477150: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x477150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_477154:
    // 0x477154: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x477154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_477158:
    // 0x477158: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x477158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_47715c:
    // 0x47715c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x47715cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_477160:
    // 0x477160: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x477160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477164:
    // 0x477164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x477164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477168:
    // 0x477168: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x477168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47716c:
    // 0x47716c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47716cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_477170:
    // 0x477170: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x477170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_477174:
    // 0x477174: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x477174u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_477178:
    // 0x477178: 0x460103c0  add.s       $f15, $f0, $f1
    ctx->pc = 0x477178u;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47717c:
    // 0x47717c: 0xc0bc284  jal         func_2F0A10
label_477180:
    if (ctx->pc == 0x477180u) {
        ctx->pc = 0x477180u;
            // 0x477180: 0x46146380  add.s       $f14, $f12, $f20 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x477184u;
        goto label_477184;
    }
    ctx->pc = 0x47717Cu;
    SET_GPR_U32(ctx, 31, 0x477184u);
    ctx->pc = 0x477180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47717Cu;
            // 0x477180: 0x46146380  add.s       $f14, $f12, $f20 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477184u; }
        if (ctx->pc != 0x477184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477184u; }
        if (ctx->pc != 0x477184u) { return; }
    }
    ctx->pc = 0x477184u;
label_477184:
    // 0x477184: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x477184u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477188:
    // 0x477188: 0x0  nop
    ctx->pc = 0x477188u;
    // NOP
label_47718c:
    // 0x47718c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x47718cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_477190:
    // 0x477190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x477190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477194:
    // 0x477194: 0xc622003c  lwc1        $f2, 0x3C($s1)
    ctx->pc = 0x477194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_477198:
    // 0x477198: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x477198u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47719c:
    // 0x47719c: 0x4602a01c  madd.s      $f0, $f20, $f2
    ctx->pc = 0x47719cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_4771a0:
    // 0x4771a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4771a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4771a4:
    // 0x4771a4: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x4771a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_4771a8:
    // 0x4771a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_4771ac:
    if (ctx->pc == 0x4771ACu) {
        ctx->pc = 0x4771ACu;
            // 0x4771ac: 0x64170001  daddiu      $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4771B0u;
        goto label_4771b0;
    }
    ctx->pc = 0x4771A8u;
    {
        const bool branch_taken_0x4771a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4771ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4771A8u;
            // 0x4771ac: 0x64170001  daddiu      $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4771a8) {
            ctx->pc = 0x4771D8u;
            goto label_4771d8;
        }
    }
    ctx->pc = 0x4771B0u;
label_4771b0:
    // 0x4771b0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4771b0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4771b4:
    // 0x4771b4: 0x0  nop
    ctx->pc = 0x4771b4u;
    // NOP
label_4771b8:
    // 0x4771b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4771b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4771bc:
    // 0x4771bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4771bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4771c0:
    // 0x4771c0: 0xc60300d8  lwc1        $f3, 0xD8($s0)
    ctx->pc = 0x4771c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4771c4:
    // 0x4771c4: 0xc622003c  lwc1        $f2, 0x3C($s1)
    ctx->pc = 0x4771c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4771c8:
    // 0x4771c8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4771c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4771cc:
    // 0x4771cc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x4771ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_4771d0:
    // 0x4771d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4771d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4771d4:
    // 0x4771d4: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x4771d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_4771d8:
    // 0x4771d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4771d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4771dc:
    // 0x4771dc: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x4771dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_4771e0:
    // 0x4771e0: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_4771e4:
    if (ctx->pc == 0x4771E4u) {
        ctx->pc = 0x4771E4u;
            // 0x4771e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4771E8u;
        goto label_4771e8;
    }
    ctx->pc = 0x4771E0u;
    {
        const bool branch_taken_0x4771e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4771E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4771E0u;
            // 0x4771e4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4771e0) {
            ctx->pc = 0x4770E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4770e0;
        }
    }
    ctx->pc = 0x4771E8u;
label_4771e8:
    // 0x4771e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4771e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4771ec:
    // 0x4771ec: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4771ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4771f0:
    // 0x4771f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4771f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4771f4:
    // 0x4771f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4771f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4771f8:
    // 0x4771f8: 0x320f809  jalr        $t9
label_4771fc:
    if (ctx->pc == 0x4771FCu) {
        ctx->pc = 0x477200u;
        goto label_477200;
    }
    ctx->pc = 0x4771F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x477200u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x477200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x477200u; }
            if (ctx->pc != 0x477200u) { return; }
        }
        }
    }
    ctx->pc = 0x477200u;
label_477200:
    // 0x477200: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x477200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_477204:
    // 0x477204: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x477204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_477208:
    // 0x477208: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x477208u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_47720c:
    // 0x47720c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x47720cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_477210:
    // 0x477210: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x477210u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_477214:
    // 0x477214: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x477214u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_477218:
    // 0x477218: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x477218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47721c:
    // 0x47721c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x47721cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_477220:
    // 0x477220: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x477220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_477224:
    // 0x477224: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x477224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_477228:
    // 0x477228: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x477228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47722c:
    // 0x47722c: 0x3e00008  jr          $ra
label_477230:
    if (ctx->pc == 0x477230u) {
        ctx->pc = 0x477230u;
            // 0x477230: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x477234u;
        goto label_477234;
    }
    ctx->pc = 0x47722Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x477230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47722Cu;
            // 0x477230: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x477234u;
label_477234:
    // 0x477234: 0x0  nop
    ctx->pc = 0x477234u;
    // NOP
label_477238:
    // 0x477238: 0x0  nop
    ctx->pc = 0x477238u;
    // NOP
label_47723c:
    // 0x47723c: 0x0  nop
    ctx->pc = 0x47723cu;
    // NOP
}
