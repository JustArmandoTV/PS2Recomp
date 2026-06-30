#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3E60
// Address: 0x1e3e60 - 0x1e4190
void sub_001E3E60_0x1e3e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3E60_0x1e3e60");
#endif

    switch (ctx->pc) {
        case 0x1e3e60u: goto label_1e3e60;
        case 0x1e3e64u: goto label_1e3e64;
        case 0x1e3e68u: goto label_1e3e68;
        case 0x1e3e6cu: goto label_1e3e6c;
        case 0x1e3e70u: goto label_1e3e70;
        case 0x1e3e74u: goto label_1e3e74;
        case 0x1e3e78u: goto label_1e3e78;
        case 0x1e3e7cu: goto label_1e3e7c;
        case 0x1e3e80u: goto label_1e3e80;
        case 0x1e3e84u: goto label_1e3e84;
        case 0x1e3e88u: goto label_1e3e88;
        case 0x1e3e8cu: goto label_1e3e8c;
        case 0x1e3e90u: goto label_1e3e90;
        case 0x1e3e94u: goto label_1e3e94;
        case 0x1e3e98u: goto label_1e3e98;
        case 0x1e3e9cu: goto label_1e3e9c;
        case 0x1e3ea0u: goto label_1e3ea0;
        case 0x1e3ea4u: goto label_1e3ea4;
        case 0x1e3ea8u: goto label_1e3ea8;
        case 0x1e3eacu: goto label_1e3eac;
        case 0x1e3eb0u: goto label_1e3eb0;
        case 0x1e3eb4u: goto label_1e3eb4;
        case 0x1e3eb8u: goto label_1e3eb8;
        case 0x1e3ebcu: goto label_1e3ebc;
        case 0x1e3ec0u: goto label_1e3ec0;
        case 0x1e3ec4u: goto label_1e3ec4;
        case 0x1e3ec8u: goto label_1e3ec8;
        case 0x1e3eccu: goto label_1e3ecc;
        case 0x1e3ed0u: goto label_1e3ed0;
        case 0x1e3ed4u: goto label_1e3ed4;
        case 0x1e3ed8u: goto label_1e3ed8;
        case 0x1e3edcu: goto label_1e3edc;
        case 0x1e3ee0u: goto label_1e3ee0;
        case 0x1e3ee4u: goto label_1e3ee4;
        case 0x1e3ee8u: goto label_1e3ee8;
        case 0x1e3eecu: goto label_1e3eec;
        case 0x1e3ef0u: goto label_1e3ef0;
        case 0x1e3ef4u: goto label_1e3ef4;
        case 0x1e3ef8u: goto label_1e3ef8;
        case 0x1e3efcu: goto label_1e3efc;
        case 0x1e3f00u: goto label_1e3f00;
        case 0x1e3f04u: goto label_1e3f04;
        case 0x1e3f08u: goto label_1e3f08;
        case 0x1e3f0cu: goto label_1e3f0c;
        case 0x1e3f10u: goto label_1e3f10;
        case 0x1e3f14u: goto label_1e3f14;
        case 0x1e3f18u: goto label_1e3f18;
        case 0x1e3f1cu: goto label_1e3f1c;
        case 0x1e3f20u: goto label_1e3f20;
        case 0x1e3f24u: goto label_1e3f24;
        case 0x1e3f28u: goto label_1e3f28;
        case 0x1e3f2cu: goto label_1e3f2c;
        case 0x1e3f30u: goto label_1e3f30;
        case 0x1e3f34u: goto label_1e3f34;
        case 0x1e3f38u: goto label_1e3f38;
        case 0x1e3f3cu: goto label_1e3f3c;
        case 0x1e3f40u: goto label_1e3f40;
        case 0x1e3f44u: goto label_1e3f44;
        case 0x1e3f48u: goto label_1e3f48;
        case 0x1e3f4cu: goto label_1e3f4c;
        case 0x1e3f50u: goto label_1e3f50;
        case 0x1e3f54u: goto label_1e3f54;
        case 0x1e3f58u: goto label_1e3f58;
        case 0x1e3f5cu: goto label_1e3f5c;
        case 0x1e3f60u: goto label_1e3f60;
        case 0x1e3f64u: goto label_1e3f64;
        case 0x1e3f68u: goto label_1e3f68;
        case 0x1e3f6cu: goto label_1e3f6c;
        case 0x1e3f70u: goto label_1e3f70;
        case 0x1e3f74u: goto label_1e3f74;
        case 0x1e3f78u: goto label_1e3f78;
        case 0x1e3f7cu: goto label_1e3f7c;
        case 0x1e3f80u: goto label_1e3f80;
        case 0x1e3f84u: goto label_1e3f84;
        case 0x1e3f88u: goto label_1e3f88;
        case 0x1e3f8cu: goto label_1e3f8c;
        case 0x1e3f90u: goto label_1e3f90;
        case 0x1e3f94u: goto label_1e3f94;
        case 0x1e3f98u: goto label_1e3f98;
        case 0x1e3f9cu: goto label_1e3f9c;
        case 0x1e3fa0u: goto label_1e3fa0;
        case 0x1e3fa4u: goto label_1e3fa4;
        case 0x1e3fa8u: goto label_1e3fa8;
        case 0x1e3facu: goto label_1e3fac;
        case 0x1e3fb0u: goto label_1e3fb0;
        case 0x1e3fb4u: goto label_1e3fb4;
        case 0x1e3fb8u: goto label_1e3fb8;
        case 0x1e3fbcu: goto label_1e3fbc;
        case 0x1e3fc0u: goto label_1e3fc0;
        case 0x1e3fc4u: goto label_1e3fc4;
        case 0x1e3fc8u: goto label_1e3fc8;
        case 0x1e3fccu: goto label_1e3fcc;
        case 0x1e3fd0u: goto label_1e3fd0;
        case 0x1e3fd4u: goto label_1e3fd4;
        case 0x1e3fd8u: goto label_1e3fd8;
        case 0x1e3fdcu: goto label_1e3fdc;
        case 0x1e3fe0u: goto label_1e3fe0;
        case 0x1e3fe4u: goto label_1e3fe4;
        case 0x1e3fe8u: goto label_1e3fe8;
        case 0x1e3fecu: goto label_1e3fec;
        case 0x1e3ff0u: goto label_1e3ff0;
        case 0x1e3ff4u: goto label_1e3ff4;
        case 0x1e3ff8u: goto label_1e3ff8;
        case 0x1e3ffcu: goto label_1e3ffc;
        case 0x1e4000u: goto label_1e4000;
        case 0x1e4004u: goto label_1e4004;
        case 0x1e4008u: goto label_1e4008;
        case 0x1e400cu: goto label_1e400c;
        case 0x1e4010u: goto label_1e4010;
        case 0x1e4014u: goto label_1e4014;
        case 0x1e4018u: goto label_1e4018;
        case 0x1e401cu: goto label_1e401c;
        case 0x1e4020u: goto label_1e4020;
        case 0x1e4024u: goto label_1e4024;
        case 0x1e4028u: goto label_1e4028;
        case 0x1e402cu: goto label_1e402c;
        case 0x1e4030u: goto label_1e4030;
        case 0x1e4034u: goto label_1e4034;
        case 0x1e4038u: goto label_1e4038;
        case 0x1e403cu: goto label_1e403c;
        case 0x1e4040u: goto label_1e4040;
        case 0x1e4044u: goto label_1e4044;
        case 0x1e4048u: goto label_1e4048;
        case 0x1e404cu: goto label_1e404c;
        case 0x1e4050u: goto label_1e4050;
        case 0x1e4054u: goto label_1e4054;
        case 0x1e4058u: goto label_1e4058;
        case 0x1e405cu: goto label_1e405c;
        case 0x1e4060u: goto label_1e4060;
        case 0x1e4064u: goto label_1e4064;
        case 0x1e4068u: goto label_1e4068;
        case 0x1e406cu: goto label_1e406c;
        case 0x1e4070u: goto label_1e4070;
        case 0x1e4074u: goto label_1e4074;
        case 0x1e4078u: goto label_1e4078;
        case 0x1e407cu: goto label_1e407c;
        case 0x1e4080u: goto label_1e4080;
        case 0x1e4084u: goto label_1e4084;
        case 0x1e4088u: goto label_1e4088;
        case 0x1e408cu: goto label_1e408c;
        case 0x1e4090u: goto label_1e4090;
        case 0x1e4094u: goto label_1e4094;
        case 0x1e4098u: goto label_1e4098;
        case 0x1e409cu: goto label_1e409c;
        case 0x1e40a0u: goto label_1e40a0;
        case 0x1e40a4u: goto label_1e40a4;
        case 0x1e40a8u: goto label_1e40a8;
        case 0x1e40acu: goto label_1e40ac;
        case 0x1e40b0u: goto label_1e40b0;
        case 0x1e40b4u: goto label_1e40b4;
        case 0x1e40b8u: goto label_1e40b8;
        case 0x1e40bcu: goto label_1e40bc;
        case 0x1e40c0u: goto label_1e40c0;
        case 0x1e40c4u: goto label_1e40c4;
        case 0x1e40c8u: goto label_1e40c8;
        case 0x1e40ccu: goto label_1e40cc;
        case 0x1e40d0u: goto label_1e40d0;
        case 0x1e40d4u: goto label_1e40d4;
        case 0x1e40d8u: goto label_1e40d8;
        case 0x1e40dcu: goto label_1e40dc;
        case 0x1e40e0u: goto label_1e40e0;
        case 0x1e40e4u: goto label_1e40e4;
        case 0x1e40e8u: goto label_1e40e8;
        case 0x1e40ecu: goto label_1e40ec;
        case 0x1e40f0u: goto label_1e40f0;
        case 0x1e40f4u: goto label_1e40f4;
        case 0x1e40f8u: goto label_1e40f8;
        case 0x1e40fcu: goto label_1e40fc;
        case 0x1e4100u: goto label_1e4100;
        case 0x1e4104u: goto label_1e4104;
        case 0x1e4108u: goto label_1e4108;
        case 0x1e410cu: goto label_1e410c;
        case 0x1e4110u: goto label_1e4110;
        case 0x1e4114u: goto label_1e4114;
        case 0x1e4118u: goto label_1e4118;
        case 0x1e411cu: goto label_1e411c;
        case 0x1e4120u: goto label_1e4120;
        case 0x1e4124u: goto label_1e4124;
        case 0x1e4128u: goto label_1e4128;
        case 0x1e412cu: goto label_1e412c;
        case 0x1e4130u: goto label_1e4130;
        case 0x1e4134u: goto label_1e4134;
        case 0x1e4138u: goto label_1e4138;
        case 0x1e413cu: goto label_1e413c;
        case 0x1e4140u: goto label_1e4140;
        case 0x1e4144u: goto label_1e4144;
        case 0x1e4148u: goto label_1e4148;
        case 0x1e414cu: goto label_1e414c;
        case 0x1e4150u: goto label_1e4150;
        case 0x1e4154u: goto label_1e4154;
        case 0x1e4158u: goto label_1e4158;
        case 0x1e415cu: goto label_1e415c;
        case 0x1e4160u: goto label_1e4160;
        case 0x1e4164u: goto label_1e4164;
        case 0x1e4168u: goto label_1e4168;
        case 0x1e416cu: goto label_1e416c;
        case 0x1e4170u: goto label_1e4170;
        case 0x1e4174u: goto label_1e4174;
        case 0x1e4178u: goto label_1e4178;
        case 0x1e417cu: goto label_1e417c;
        case 0x1e4180u: goto label_1e4180;
        case 0x1e4184u: goto label_1e4184;
        case 0x1e4188u: goto label_1e4188;
        case 0x1e418cu: goto label_1e418c;
        default: break;
    }

    ctx->pc = 0x1e3e60u;

label_1e3e60:
    // 0x1e3e60: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x1e3e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_1e3e64:
    // 0x1e3e64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e3e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e3e68:
    // 0x1e3e68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e3e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e3e6c:
    // 0x1e3e6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e3e70:
    // 0x1e3e70: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e3e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1e3e74:
    // 0x1e3e74: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e3e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1e3e78:
    // 0x1e3e78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e3e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3e7c:
    // 0x1e3e7c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e3e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e3e80:
    // 0x1e3e80: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e3e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e3e84:
    // 0x1e3e84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e3e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e3e88:
    // 0x1e3e88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e3e88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e3e8c:
    // 0x1e3e8c: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x1e3e8cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1e3e90:
    // 0x1e3e90: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e3e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e3e94:
    // 0x1e3e94: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x1e3e94u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1e3e98:
    // 0x1e3e98: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1e3e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e3e9c:
    // 0x1e3e9c: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x1e3e9cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1e3ea0:
    // 0x1e3ea0: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x1e3ea0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e3ea4:
    // 0x1e3ea4: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x1e3ea4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1e3ea8:
    // 0x1e3ea8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1e3ea8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1e3eac:
    // 0x1e3eac: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1e3eacu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1e3eb0:
    // 0x1e3eb0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1e3eb0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e3eb4:
    // 0x1e3eb4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1e3eb4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e3eb8:
    // 0x1e3eb8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1e3eb8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e3ebc:
    // 0x1e3ebc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e3ebcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e3ec0:
    // 0x1e3ec0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e3ec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e3ec4:
    // 0x1e3ec4: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1e3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e3ec8:
    // 0x1e3ec8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e3ecc:
    // 0x1e3ecc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e3eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e3ed0:
    // 0x1e3ed0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e3ed4:
    if (ctx->pc == 0x1E3ED4u) {
        ctx->pc = 0x1E3ED4u;
            // 0x1e3ed4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E3ED8u;
        goto label_1e3ed8;
    }
    ctx->pc = 0x1E3ED0u;
    {
        const bool branch_taken_0x1e3ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3ED0u;
            // 0x1e3ed4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ed0) {
            ctx->pc = 0x1E3F00u;
            goto label_1e3f00;
        }
    }
    ctx->pc = 0x1E3ED8u;
label_1e3ed8:
    // 0x1e3ed8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e3edc:
    // 0x1e3edc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e3ee0:
    // 0x1e3ee0: 0x2442a8a0  addiu       $v0, $v0, -0x5760
    ctx->pc = 0x1e3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
label_1e3ee4:
    // 0x1e3ee4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e3ee8:
    // 0x1e3ee8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e3eec:
    // 0x1e3eec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e3eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e3ef0:
    // 0x1e3ef0: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e3ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e3ef4:
    // 0x1e3ef4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e3ef8:
    // 0x1e3ef8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e3efc:
    // 0x1e3efc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e3efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e3f00:
    // 0x1e3f00: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e3f04:
    // 0x1e3f04: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e3f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1e3f08:
    // 0x1e3f08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e3f0c:
    // 0x1e3f0c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e3f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e3f10:
    // 0x1e3f10: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x1e3f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e3f14:
    // 0x1e3f14: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1e3f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e3f18:
    // 0x1e3f18: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1e3f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3f1c:
    // 0x1e3f1c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1e3f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3f20:
    // 0x1e3f20: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x1e3f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e3f24:
    // 0x1e3f24: 0x46040e40  add.s       $f25, $f1, $f4
    ctx->pc = 0x1e3f24u;
    ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1e3f28:
    // 0x1e3f28: 0x46040680  add.s       $f26, $f0, $f4
    ctx->pc = 0x1e3f28u;
    ctx->f[26] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1e3f2c:
    // 0x1e3f2c: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x1e3f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3f30:
    // 0x1e3f30: 0x46041600  add.s       $f24, $f2, $f4
    ctx->pc = 0x1e3f30u;
    ctx->f[24] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1e3f34:
    // 0x1e3f34: 0x46040ec0  add.s       $f27, $f1, $f4
    ctx->pc = 0x1e3f34u;
    ctx->f[27] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1e3f38:
    // 0x1e3f38: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x1e3f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e3f3c:
    // 0x1e3f3c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e3f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3f40:
    // 0x1e3f40: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1e3f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e3f44:
    // 0x1e3f44: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1e3f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3f48:
    // 0x1e3f48: 0x46030500  add.s       $f20, $f0, $f3
    ctx->pc = 0x1e3f48u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1e3f4c:
    // 0x1e3f4c: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x1e3f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3f50:
    // 0x1e3f50: 0x46031540  add.s       $f21, $f2, $f3
    ctx->pc = 0x1e3f50u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1e3f54:
    // 0x1e3f54: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x1e3f54u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1e3f58:
    // 0x1e3f58: 0xc0a45a0  jal         func_291680
label_1e3f5c:
    if (ctx->pc == 0x1E3F5Cu) {
        ctx->pc = 0x1E3F5Cu;
            // 0x1e3f5c: 0x460305c0  add.s       $f23, $f0, $f3 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->pc = 0x1E3F60u;
        goto label_1e3f60;
    }
    ctx->pc = 0x1E3F58u;
    SET_GPR_U32(ctx, 31, 0x1E3F60u);
    ctx->pc = 0x1E3F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F58u;
            // 0x1e3f5c: 0x460305c0  add.s       $f23, $f0, $f3 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F60u; }
        if (ctx->pc != 0x1E3F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F60u; }
        if (ctx->pc != 0x1E3F60u) { return; }
    }
    ctx->pc = 0x1E3F60u;
label_1e3f60:
    // 0x1e3f60: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e3f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3f64:
    // 0x1e3f64: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1e3f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e3f68:
    // 0x1e3f68: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e3f6c:
    // 0x1e3f6c: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x1e3f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3f70:
    // 0x1e3f70: 0xc7bf01e4  lwc1        $f31, 0x1E4($sp)
    ctx->pc = 0x1e3f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1e3f74:
    // 0x1e3f74: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1e3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1e3f78:
    // 0x1e3f78: 0xc7be01e8  lwc1        $f30, 0x1E8($sp)
    ctx->pc = 0x1e3f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1e3f7c:
    // 0x1e3f7c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1e3f80:
    // 0x1e3f80: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x1e3f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
label_1e3f84:
    // 0x1e3f84: 0xc7bd01ec  lwc1        $f29, 0x1EC($sp)
    ctx->pc = 0x1e3f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1e3f88:
    // 0x1e3f88: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x1e3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_1e3f8c:
    // 0x1e3f8c: 0xc7bc01f0  lwc1        $f28, 0x1F0($sp)
    ctx->pc = 0x1e3f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1e3f90:
    // 0x1e3f90: 0xafb300b0  sw          $s3, 0xB0($sp)
    ctx->pc = 0x1e3f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 19));
label_1e3f94:
    // 0x1e3f94: 0xc7b301f4  lwc1        $f19, 0x1F4($sp)
    ctx->pc = 0x1e3f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_1e3f98:
    // 0x1e3f98: 0xafb200b4  sw          $s2, 0xB4($sp)
    ctx->pc = 0x1e3f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 18));
label_1e3f9c:
    // 0x1e3f9c: 0xc7b201f8  lwc1        $f18, 0x1F8($sp)
    ctx->pc = 0x1e3f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_1e3fa0:
    // 0x1e3fa0: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x1e3fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_1e3fa4:
    // 0x1e3fa4: 0xc7b101fc  lwc1        $f17, 0x1FC($sp)
    ctx->pc = 0x1e3fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_1e3fa8:
    // 0x1e3fa8: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x1e3fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_1e3fac:
    // 0x1e3fac: 0xc7b00200  lwc1        $f16, 0x200($sp)
    ctx->pc = 0x1e3facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1e3fb0:
    // 0x1e3fb0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1e3fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_1e3fb4:
    // 0x1e3fb4: 0xc7af0204  lwc1        $f15, 0x204($sp)
    ctx->pc = 0x1e3fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1e3fb8:
    // 0x1e3fb8: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x1e3fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1e3fbc:
    // 0x1e3fbc: 0x27a4022c  addiu       $a0, $sp, 0x22C
    ctx->pc = 0x1e3fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 556));
label_1e3fc0:
    // 0x1e3fc0: 0xe7bf00d4  swc1        $f31, 0xD4($sp)
    ctx->pc = 0x1e3fc0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1e3fc4:
    // 0x1e3fc4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1e3fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1e3fc8:
    // 0x1e3fc8: 0xe7be00d8  swc1        $f30, 0xD8($sp)
    ctx->pc = 0x1e3fc8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1e3fcc:
    // 0x1e3fcc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e3fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e3fd0:
    // 0x1e3fd0: 0xe7bd00dc  swc1        $f29, 0xDC($sp)
    ctx->pc = 0x1e3fd0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1e3fd4:
    // 0x1e3fd4: 0xafb300a0  sw          $s3, 0xA0($sp)
    ctx->pc = 0x1e3fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 19));
label_1e3fd8:
    // 0x1e3fd8: 0xe7bc00e0  swc1        $f28, 0xE0($sp)
    ctx->pc = 0x1e3fd8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1e3fdc:
    // 0x1e3fdc: 0xafb200a4  sw          $s2, 0xA4($sp)
    ctx->pc = 0x1e3fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 18));
label_1e3fe0:
    // 0x1e3fe0: 0xe7b300e4  swc1        $f19, 0xE4($sp)
    ctx->pc = 0x1e3fe0u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1e3fe4:
    // 0x1e3fe4: 0xe7b200e8  swc1        $f18, 0xE8($sp)
    ctx->pc = 0x1e3fe4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1e3fe8:
    // 0x1e3fe8: 0xe7b100ec  swc1        $f17, 0xEC($sp)
    ctx->pc = 0x1e3fe8u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1e3fec:
    // 0x1e3fec: 0xe7b000f0  swc1        $f16, 0xF0($sp)
    ctx->pc = 0x1e3fecu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1e3ff0:
    // 0x1e3ff0: 0xc7ae0208  lwc1        $f14, 0x208($sp)
    ctx->pc = 0x1e3ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1e3ff4:
    // 0x1e3ff4: 0xe7af00f4  swc1        $f15, 0xF4($sp)
    ctx->pc = 0x1e3ff4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1e3ff8:
    // 0x1e3ff8: 0xc7ad020c  lwc1        $f13, 0x20C($sp)
    ctx->pc = 0x1e3ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e3ffc:
    // 0x1e3ffc: 0xe7ae00f8  swc1        $f14, 0xF8($sp)
    ctx->pc = 0x1e3ffcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1e4000:
    // 0x1e4000: 0xc7ac0210  lwc1        $f12, 0x210($sp)
    ctx->pc = 0x1e4000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4004:
    // 0x1e4004: 0xe7ad00fc  swc1        $f13, 0xFC($sp)
    ctx->pc = 0x1e4004u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1e4008:
    // 0x1e4008: 0xc7ab0214  lwc1        $f11, 0x214($sp)
    ctx->pc = 0x1e4008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1e400c:
    // 0x1e400c: 0xe7ac0100  swc1        $f12, 0x100($sp)
    ctx->pc = 0x1e400cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1e4010:
    // 0x1e4010: 0xc7aa0218  lwc1        $f10, 0x218($sp)
    ctx->pc = 0x1e4010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1e4014:
    // 0x1e4014: 0xe7ab0104  swc1        $f11, 0x104($sp)
    ctx->pc = 0x1e4014u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1e4018:
    // 0x1e4018: 0x46180200  add.s       $f8, $f0, $f24
    ctx->pc = 0x1e4018u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_1e401c:
    // 0x1e401c: 0x461901c0  add.s       $f7, $f0, $f25
    ctx->pc = 0x1e401cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_1e4020:
    // 0x1e4020: 0x461a0180  add.s       $f6, $f0, $f26
    ctx->pc = 0x1e4020u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
label_1e4024:
    // 0x1e4024: 0x461b0140  add.s       $f5, $f0, $f27
    ctx->pc = 0x1e4024u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
label_1e4028:
    // 0x1e4028: 0x46140100  add.s       $f4, $f0, $f20
    ctx->pc = 0x1e4028u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1e402c:
    // 0x1e402c: 0x461500c0  add.s       $f3, $f0, $f21
    ctx->pc = 0x1e402cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1e4030:
    // 0x1e4030: 0xc7a9021c  lwc1        $f9, 0x21C($sp)
    ctx->pc = 0x1e4030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1e4034:
    // 0x1e4034: 0xe7aa0108  swc1        $f10, 0x108($sp)
    ctx->pc = 0x1e4034u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1e4038:
    // 0x1e4038: 0x46160080  add.s       $f2, $f0, $f22
    ctx->pc = 0x1e4038u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_1e403c:
    // 0x1e403c: 0xe7a9010c  swc1        $f9, 0x10C($sp)
    ctx->pc = 0x1e403cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1e4040:
    // 0x1e4040: 0x46170040  add.s       $f1, $f0, $f23
    ctx->pc = 0x1e4040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_1e4044:
    // 0x1e4044: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x1e4044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_1e4048:
    // 0x1e4048: 0xe7a80140  swc1        $f8, 0x140($sp)
    ctx->pc = 0x1e4048u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1e404c:
    // 0x1e404c: 0xe7a70144  swc1        $f7, 0x144($sp)
    ctx->pc = 0x1e404cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1e4050:
    // 0x1e4050: 0xe7a60148  swc1        $f6, 0x148($sp)
    ctx->pc = 0x1e4050u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1e4054:
    // 0x1e4054: 0xe7a5014c  swc1        $f5, 0x14C($sp)
    ctx->pc = 0x1e4054u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1e4058:
    // 0x1e4058: 0xe7a40150  swc1        $f4, 0x150($sp)
    ctx->pc = 0x1e4058u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1e405c:
    // 0x1e405c: 0xe7a30154  swc1        $f3, 0x154($sp)
    ctx->pc = 0x1e405cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_1e4060:
    // 0x1e4060: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x1e4060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1e4064:
    // 0x1e4064: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x1e4064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_1e4068:
    // 0x1e4068: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1e4068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1e406c:
    // 0x1e406c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1e406cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1e4070:
    // 0x1e4070: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1e4070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1e4074:
    // 0x1e4074: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1e4074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1e4078:
    // 0x1e4078: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x1e4078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1e407c:
    // 0x1e407c: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x1e407cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1e4080:
    // 0x1e4080: 0xe7b90114  swc1        $f25, 0x114($sp)
    ctx->pc = 0x1e4080u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1e4084:
    // 0x1e4084: 0xe7ba0118  swc1        $f26, 0x118($sp)
    ctx->pc = 0x1e4084u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1e4088:
    // 0x1e4088: 0xe7bb011c  swc1        $f27, 0x11C($sp)
    ctx->pc = 0x1e4088u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1e408c:
    // 0x1e408c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1e408cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1e4090:
    // 0x1e4090: 0xe7b50124  swc1        $f21, 0x124($sp)
    ctx->pc = 0x1e4090u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1e4094:
    // 0x1e4094: 0xe7b60128  swc1        $f22, 0x128($sp)
    ctx->pc = 0x1e4094u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1e4098:
    // 0x1e4098: 0xc093510  jal         func_24D440
label_1e409c:
    if (ctx->pc == 0x1E409Cu) {
        ctx->pc = 0x1E409Cu;
            // 0x1e409c: 0xe7b7012c  swc1        $f23, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->pc = 0x1E40A0u;
        goto label_1e40a0;
    }
    ctx->pc = 0x1E4098u;
    SET_GPR_U32(ctx, 31, 0x1E40A0u);
    ctx->pc = 0x1E409Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4098u;
            // 0x1e409c: 0xe7b7012c  swc1        $f23, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x24D440u;
    if (runtime->hasFunction(0x24D440u)) {
        auto targetFn = runtime->lookupFunction(0x24D440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40A0u; }
        if (ctx->pc != 0x1E40A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024D440_0x24d440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40A0u; }
        if (ctx->pc != 0x1E40A0u) { return; }
    }
    ctx->pc = 0x1E40A0u;
label_1e40a0:
    // 0x1e40a0: 0x83a3022c  lb          $v1, 0x22C($sp)
    ctx->pc = 0x1e40a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 556)));
label_1e40a4:
    // 0x1e40a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1e40a8:
    if (ctx->pc == 0x1E40A8u) {
        ctx->pc = 0x1E40ACu;
        goto label_1e40ac;
    }
    ctx->pc = 0x1E40A4u;
    {
        const bool branch_taken_0x1e40a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40a4) {
            ctx->pc = 0x1E40C0u;
            goto label_1e40c0;
        }
    }
    ctx->pc = 0x1E40ACu;
label_1e40ac:
    // 0x1e40ac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e40acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e40b0:
    // 0x1e40b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e40b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e40b4:
    // 0x1e40b4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1e40b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1e40b8:
    // 0x1e40b8: 0x320f809  jalr        $t9
label_1e40bc:
    if (ctx->pc == 0x1E40BCu) {
        ctx->pc = 0x1E40BCu;
            // 0x1e40bc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1E40C0u;
        goto label_1e40c0;
    }
    ctx->pc = 0x1E40B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E40C0u);
        ctx->pc = 0x1E40BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40B8u;
            // 0x1e40bc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E40C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E40C0u; }
            if (ctx->pc != 0x1E40C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E40C0u;
label_1e40c0:
    // 0x1e40c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e40c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e40c4:
    // 0x1e40c4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e40c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e40c8:
    // 0x1e40c8: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1e40c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e40cc:
    // 0x1e40cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e40ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e40d0:
    // 0x1e40d0: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e40d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e40d4:
    // 0x1e40d4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e40d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e40d8:
    // 0x1e40d8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e40dc:
    if (ctx->pc == 0x1E40DCu) {
        ctx->pc = 0x1E40DCu;
            // 0x1e40dc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E40E0u;
        goto label_1e40e0;
    }
    ctx->pc = 0x1E40D8u;
    {
        const bool branch_taken_0x1e40d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40D8u;
            // 0x1e40dc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40d8) {
            ctx->pc = 0x1E4108u;
            goto label_1e4108;
        }
    }
    ctx->pc = 0x1E40E0u;
label_1e40e0:
    // 0x1e40e0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e40e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e40e4:
    // 0x1e40e4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e40e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e40e8:
    // 0x1e40e8: 0x2463a8b0  addiu       $v1, $v1, -0x5750
    ctx->pc = 0x1e40e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944944));
label_1e40ec:
    // 0x1e40ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e40ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e40f0:
    // 0x1e40f0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e40f4:
    // 0x1e40f4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e40f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e40f8:
    // 0x1e40f8: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e40f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e40fc:
    // 0x1e40fc: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e40fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e4100:
    // 0x1e4100: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e4100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e4104:
    // 0x1e4104: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e4104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e4108:
    // 0x1e4108: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e4108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e410c:
    // 0x1e410c: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x1e410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1e4110:
    // 0x1e4110: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e4110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e4114:
    // 0x1e4114: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x1e4114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1e4118:
    // 0x1e4118: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e4118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e411c:
    // 0x1e411c: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x1e411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1e4120:
    // 0x1e4120: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e4120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4124:
    // 0x1e4124: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x1e4124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1e4128:
    // 0x1e4128: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e4128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e412c:
    // 0x1e412c: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x1e412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_1e4130:
    // 0x1e4130: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1e4130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1e4134:
    // 0x1e4134: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1e4134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1e4138:
    // 0x1e4138: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1e4138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1e413c:
    // 0x1e413c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1e413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1e4140:
    // 0x1e4140: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1e4140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1e4144:
    // 0x1e4144: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e4144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e4148:
    // 0x1e4148: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e4148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e414c:
    // 0x1e414c: 0x3e00008  jr          $ra
label_1e4150:
    if (ctx->pc == 0x1E4150u) {
        ctx->pc = 0x1E4150u;
            // 0x1e4150: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x1E4154u;
        goto label_1e4154;
    }
    ctx->pc = 0x1E414Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E414Cu;
            // 0x1e4150: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4154u;
label_1e4154:
    // 0x1e4154: 0x0  nop
    ctx->pc = 0x1e4154u;
    // NOP
label_1e4158:
    // 0x1e4158: 0x0  nop
    ctx->pc = 0x1e4158u;
    // NOP
label_1e415c:
    // 0x1e415c: 0x0  nop
    ctx->pc = 0x1e415cu;
    // NOP
label_1e4160:
    // 0x1e4160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e4164:
    // 0x1e4164: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e4164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4168:
    // 0x1e4168: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e4168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e416c:
    // 0x1e416c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4170:
    // 0x1e4170: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1e4170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e4174:
    // 0x1e4174: 0xc078f98  jal         func_1E3E60
label_1e4178:
    if (ctx->pc == 0x1E4178u) {
        ctx->pc = 0x1E4178u;
            // 0x1e4178: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E417Cu;
        goto label_1e417c;
    }
    ctx->pc = 0x1E4174u;
    SET_GPR_U32(ctx, 31, 0x1E417Cu);
    ctx->pc = 0x1E4178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4174u;
            // 0x1e4178: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3E60u;
    goto label_1e3e60;
    ctx->pc = 0x1E417Cu;
label_1e417c:
    // 0x1e417c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4180:
    // 0x1e4180: 0x3e00008  jr          $ra
label_1e4184:
    if (ctx->pc == 0x1E4184u) {
        ctx->pc = 0x1E4184u;
            // 0x1e4184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E4188u;
        goto label_1e4188;
    }
    ctx->pc = 0x1E4180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4180u;
            // 0x1e4184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4188u;
label_1e4188:
    // 0x1e4188: 0x0  nop
    ctx->pc = 0x1e4188u;
    // NOP
label_1e418c:
    // 0x1e418c: 0x0  nop
    ctx->pc = 0x1e418cu;
    // NOP
}
