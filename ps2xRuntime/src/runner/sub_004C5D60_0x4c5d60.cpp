#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C5D60
// Address: 0x4c5d60 - 0x4c6070
void sub_004C5D60_0x4c5d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5D60_0x4c5d60");
#endif

    switch (ctx->pc) {
        case 0x4c5d60u: goto label_4c5d60;
        case 0x4c5d64u: goto label_4c5d64;
        case 0x4c5d68u: goto label_4c5d68;
        case 0x4c5d6cu: goto label_4c5d6c;
        case 0x4c5d70u: goto label_4c5d70;
        case 0x4c5d74u: goto label_4c5d74;
        case 0x4c5d78u: goto label_4c5d78;
        case 0x4c5d7cu: goto label_4c5d7c;
        case 0x4c5d80u: goto label_4c5d80;
        case 0x4c5d84u: goto label_4c5d84;
        case 0x4c5d88u: goto label_4c5d88;
        case 0x4c5d8cu: goto label_4c5d8c;
        case 0x4c5d90u: goto label_4c5d90;
        case 0x4c5d94u: goto label_4c5d94;
        case 0x4c5d98u: goto label_4c5d98;
        case 0x4c5d9cu: goto label_4c5d9c;
        case 0x4c5da0u: goto label_4c5da0;
        case 0x4c5da4u: goto label_4c5da4;
        case 0x4c5da8u: goto label_4c5da8;
        case 0x4c5dacu: goto label_4c5dac;
        case 0x4c5db0u: goto label_4c5db0;
        case 0x4c5db4u: goto label_4c5db4;
        case 0x4c5db8u: goto label_4c5db8;
        case 0x4c5dbcu: goto label_4c5dbc;
        case 0x4c5dc0u: goto label_4c5dc0;
        case 0x4c5dc4u: goto label_4c5dc4;
        case 0x4c5dc8u: goto label_4c5dc8;
        case 0x4c5dccu: goto label_4c5dcc;
        case 0x4c5dd0u: goto label_4c5dd0;
        case 0x4c5dd4u: goto label_4c5dd4;
        case 0x4c5dd8u: goto label_4c5dd8;
        case 0x4c5ddcu: goto label_4c5ddc;
        case 0x4c5de0u: goto label_4c5de0;
        case 0x4c5de4u: goto label_4c5de4;
        case 0x4c5de8u: goto label_4c5de8;
        case 0x4c5decu: goto label_4c5dec;
        case 0x4c5df0u: goto label_4c5df0;
        case 0x4c5df4u: goto label_4c5df4;
        case 0x4c5df8u: goto label_4c5df8;
        case 0x4c5dfcu: goto label_4c5dfc;
        case 0x4c5e00u: goto label_4c5e00;
        case 0x4c5e04u: goto label_4c5e04;
        case 0x4c5e08u: goto label_4c5e08;
        case 0x4c5e0cu: goto label_4c5e0c;
        case 0x4c5e10u: goto label_4c5e10;
        case 0x4c5e14u: goto label_4c5e14;
        case 0x4c5e18u: goto label_4c5e18;
        case 0x4c5e1cu: goto label_4c5e1c;
        case 0x4c5e20u: goto label_4c5e20;
        case 0x4c5e24u: goto label_4c5e24;
        case 0x4c5e28u: goto label_4c5e28;
        case 0x4c5e2cu: goto label_4c5e2c;
        case 0x4c5e30u: goto label_4c5e30;
        case 0x4c5e34u: goto label_4c5e34;
        case 0x4c5e38u: goto label_4c5e38;
        case 0x4c5e3cu: goto label_4c5e3c;
        case 0x4c5e40u: goto label_4c5e40;
        case 0x4c5e44u: goto label_4c5e44;
        case 0x4c5e48u: goto label_4c5e48;
        case 0x4c5e4cu: goto label_4c5e4c;
        case 0x4c5e50u: goto label_4c5e50;
        case 0x4c5e54u: goto label_4c5e54;
        case 0x4c5e58u: goto label_4c5e58;
        case 0x4c5e5cu: goto label_4c5e5c;
        case 0x4c5e60u: goto label_4c5e60;
        case 0x4c5e64u: goto label_4c5e64;
        case 0x4c5e68u: goto label_4c5e68;
        case 0x4c5e6cu: goto label_4c5e6c;
        case 0x4c5e70u: goto label_4c5e70;
        case 0x4c5e74u: goto label_4c5e74;
        case 0x4c5e78u: goto label_4c5e78;
        case 0x4c5e7cu: goto label_4c5e7c;
        case 0x4c5e80u: goto label_4c5e80;
        case 0x4c5e84u: goto label_4c5e84;
        case 0x4c5e88u: goto label_4c5e88;
        case 0x4c5e8cu: goto label_4c5e8c;
        case 0x4c5e90u: goto label_4c5e90;
        case 0x4c5e94u: goto label_4c5e94;
        case 0x4c5e98u: goto label_4c5e98;
        case 0x4c5e9cu: goto label_4c5e9c;
        case 0x4c5ea0u: goto label_4c5ea0;
        case 0x4c5ea4u: goto label_4c5ea4;
        case 0x4c5ea8u: goto label_4c5ea8;
        case 0x4c5eacu: goto label_4c5eac;
        case 0x4c5eb0u: goto label_4c5eb0;
        case 0x4c5eb4u: goto label_4c5eb4;
        case 0x4c5eb8u: goto label_4c5eb8;
        case 0x4c5ebcu: goto label_4c5ebc;
        case 0x4c5ec0u: goto label_4c5ec0;
        case 0x4c5ec4u: goto label_4c5ec4;
        case 0x4c5ec8u: goto label_4c5ec8;
        case 0x4c5eccu: goto label_4c5ecc;
        case 0x4c5ed0u: goto label_4c5ed0;
        case 0x4c5ed4u: goto label_4c5ed4;
        case 0x4c5ed8u: goto label_4c5ed8;
        case 0x4c5edcu: goto label_4c5edc;
        case 0x4c5ee0u: goto label_4c5ee0;
        case 0x4c5ee4u: goto label_4c5ee4;
        case 0x4c5ee8u: goto label_4c5ee8;
        case 0x4c5eecu: goto label_4c5eec;
        case 0x4c5ef0u: goto label_4c5ef0;
        case 0x4c5ef4u: goto label_4c5ef4;
        case 0x4c5ef8u: goto label_4c5ef8;
        case 0x4c5efcu: goto label_4c5efc;
        case 0x4c5f00u: goto label_4c5f00;
        case 0x4c5f04u: goto label_4c5f04;
        case 0x4c5f08u: goto label_4c5f08;
        case 0x4c5f0cu: goto label_4c5f0c;
        case 0x4c5f10u: goto label_4c5f10;
        case 0x4c5f14u: goto label_4c5f14;
        case 0x4c5f18u: goto label_4c5f18;
        case 0x4c5f1cu: goto label_4c5f1c;
        case 0x4c5f20u: goto label_4c5f20;
        case 0x4c5f24u: goto label_4c5f24;
        case 0x4c5f28u: goto label_4c5f28;
        case 0x4c5f2cu: goto label_4c5f2c;
        case 0x4c5f30u: goto label_4c5f30;
        case 0x4c5f34u: goto label_4c5f34;
        case 0x4c5f38u: goto label_4c5f38;
        case 0x4c5f3cu: goto label_4c5f3c;
        case 0x4c5f40u: goto label_4c5f40;
        case 0x4c5f44u: goto label_4c5f44;
        case 0x4c5f48u: goto label_4c5f48;
        case 0x4c5f4cu: goto label_4c5f4c;
        case 0x4c5f50u: goto label_4c5f50;
        case 0x4c5f54u: goto label_4c5f54;
        case 0x4c5f58u: goto label_4c5f58;
        case 0x4c5f5cu: goto label_4c5f5c;
        case 0x4c5f60u: goto label_4c5f60;
        case 0x4c5f64u: goto label_4c5f64;
        case 0x4c5f68u: goto label_4c5f68;
        case 0x4c5f6cu: goto label_4c5f6c;
        case 0x4c5f70u: goto label_4c5f70;
        case 0x4c5f74u: goto label_4c5f74;
        case 0x4c5f78u: goto label_4c5f78;
        case 0x4c5f7cu: goto label_4c5f7c;
        case 0x4c5f80u: goto label_4c5f80;
        case 0x4c5f84u: goto label_4c5f84;
        case 0x4c5f88u: goto label_4c5f88;
        case 0x4c5f8cu: goto label_4c5f8c;
        case 0x4c5f90u: goto label_4c5f90;
        case 0x4c5f94u: goto label_4c5f94;
        case 0x4c5f98u: goto label_4c5f98;
        case 0x4c5f9cu: goto label_4c5f9c;
        case 0x4c5fa0u: goto label_4c5fa0;
        case 0x4c5fa4u: goto label_4c5fa4;
        case 0x4c5fa8u: goto label_4c5fa8;
        case 0x4c5facu: goto label_4c5fac;
        case 0x4c5fb0u: goto label_4c5fb0;
        case 0x4c5fb4u: goto label_4c5fb4;
        case 0x4c5fb8u: goto label_4c5fb8;
        case 0x4c5fbcu: goto label_4c5fbc;
        case 0x4c5fc0u: goto label_4c5fc0;
        case 0x4c5fc4u: goto label_4c5fc4;
        case 0x4c5fc8u: goto label_4c5fc8;
        case 0x4c5fccu: goto label_4c5fcc;
        case 0x4c5fd0u: goto label_4c5fd0;
        case 0x4c5fd4u: goto label_4c5fd4;
        case 0x4c5fd8u: goto label_4c5fd8;
        case 0x4c5fdcu: goto label_4c5fdc;
        case 0x4c5fe0u: goto label_4c5fe0;
        case 0x4c5fe4u: goto label_4c5fe4;
        case 0x4c5fe8u: goto label_4c5fe8;
        case 0x4c5fecu: goto label_4c5fec;
        case 0x4c5ff0u: goto label_4c5ff0;
        case 0x4c5ff4u: goto label_4c5ff4;
        case 0x4c5ff8u: goto label_4c5ff8;
        case 0x4c5ffcu: goto label_4c5ffc;
        case 0x4c6000u: goto label_4c6000;
        case 0x4c6004u: goto label_4c6004;
        case 0x4c6008u: goto label_4c6008;
        case 0x4c600cu: goto label_4c600c;
        case 0x4c6010u: goto label_4c6010;
        case 0x4c6014u: goto label_4c6014;
        case 0x4c6018u: goto label_4c6018;
        case 0x4c601cu: goto label_4c601c;
        case 0x4c6020u: goto label_4c6020;
        case 0x4c6024u: goto label_4c6024;
        case 0x4c6028u: goto label_4c6028;
        case 0x4c602cu: goto label_4c602c;
        case 0x4c6030u: goto label_4c6030;
        case 0x4c6034u: goto label_4c6034;
        case 0x4c6038u: goto label_4c6038;
        case 0x4c603cu: goto label_4c603c;
        case 0x4c6040u: goto label_4c6040;
        case 0x4c6044u: goto label_4c6044;
        case 0x4c6048u: goto label_4c6048;
        case 0x4c604cu: goto label_4c604c;
        case 0x4c6050u: goto label_4c6050;
        case 0x4c6054u: goto label_4c6054;
        case 0x4c6058u: goto label_4c6058;
        case 0x4c605cu: goto label_4c605c;
        case 0x4c6060u: goto label_4c6060;
        case 0x4c6064u: goto label_4c6064;
        case 0x4c6068u: goto label_4c6068;
        case 0x4c606cu: goto label_4c606c;
        default: break;
    }

    ctx->pc = 0x4c5d60u;

label_4c5d60:
    // 0x4c5d60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4c5d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4c5d64:
    // 0x4c5d64: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x4c5d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_4c5d68:
    // 0x4c5d68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4c5d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4c5d6c:
    // 0x4c5d6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c5d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5d70:
    // 0x4c5d70: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4c5d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_4c5d74:
    // 0x4c5d74: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4c5d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4c5d78:
    // 0x4c5d78: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4c5d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4c5d7c:
    // 0x4c5d7c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4c5d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4c5d80:
    // 0x4c5d80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4c5d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4c5d84:
    // 0x4c5d84: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x4c5d84u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4c5d88:
    // 0x4c5d88: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x4c5d88u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4c5d8c:
    // 0x4c5d8c: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x4c5d8cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_4c5d90:
    // 0x4c5d90: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x4c5d90u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_4c5d94:
    // 0x4c5d94: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x4c5d94u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_4c5d98:
    // 0x4c5d98: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x4c5d98u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4c5d9c:
    // 0x4c5d9c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4c5d9cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4c5da0:
    // 0x4c5da0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4c5da0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4c5da4:
    // 0x4c5da4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4c5da4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4c5da8:
    // 0x4c5da8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c5da8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c5dac:
    // 0x4c5dac: 0xc4c10a7c  lwc1        $f1, 0xA7C($a2)
    ctx->pc = 0x4c5dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c5db0:
    // 0x4c5db0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4c5db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c5db4:
    // 0x4c5db4: 0x4501009a  bc1t        . + 4 + (0x9A << 2)
label_4c5db8:
    if (ctx->pc == 0x4C5DB8u) {
        ctx->pc = 0x4C5DB8u;
            // 0x4c5db8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5DBCu;
        goto label_4c5dbc;
    }
    ctx->pc = 0x4C5DB4u;
    {
        const bool branch_taken_0x4c5db4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C5DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5DB4u;
            // 0x4c5db8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5db4) {
            ctx->pc = 0x4C6020u;
            goto label_4c6020;
        }
    }
    ctx->pc = 0x4C5DBCu;
label_4c5dbc:
    // 0x4c5dbc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x4c5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4c5dc0:
    // 0x4c5dc0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4c5dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4c5dc4:
    // 0x4c5dc4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c5dc8:
    // 0x4c5dc8: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x4c5dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_4c5dcc:
    // 0x4c5dcc: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x4c5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_4c5dd0:
    // 0x4c5dd0: 0x92930008  lbu         $s3, 0x8($s4)
    ctx->pc = 0x4c5dd0u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_4c5dd4:
    // 0x4c5dd4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4c5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4c5dd8:
    // 0x4c5dd8: 0xc694000c  lwc1        $f20, 0xC($s4)
    ctx->pc = 0x4c5dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c5ddc:
    // 0x4c5ddc: 0x2652a3e0  addiu       $s2, $s2, -0x5C20
    ctx->pc = 0x4c5ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943712));
label_4c5de0:
    // 0x4c5de0: 0x90500116  lbu         $s0, 0x116($v0)
    ctx->pc = 0x4c5de0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_4c5de4:
    // 0x4c5de4: 0x213082a  slt         $at, $s0, $s3
    ctx->pc = 0x4c5de4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_4c5de8:
    // 0x4c5de8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4c5dec:
    if (ctx->pc == 0x4C5DECu) {
        ctx->pc = 0x4C5DECu;
            // 0x4c5dec: 0x26312120  addiu       $s1, $s1, 0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8480));
        ctx->pc = 0x4C5DF0u;
        goto label_4c5df0;
    }
    ctx->pc = 0x4C5DE8u;
    {
        const bool branch_taken_0x4c5de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C5DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5DE8u;
            // 0x4c5dec: 0x26312120  addiu       $s1, $s1, 0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5de8) {
            ctx->pc = 0x4C5DF4u;
            goto label_4c5df4;
        }
    }
    ctx->pc = 0x4C5DF0u;
label_4c5df0:
    // 0x4c5df0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4c5df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c5df4:
    // 0x4c5df4: 0x84660004  lh          $a2, 0x4($v1)
    ctx->pc = 0x4c5df4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_4c5df8:
    // 0x4c5df8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c5dfc:
    // 0x4c5dfc: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4c5dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4c5e00:
    // 0x4c5e00: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4c5e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c5e04:
    // 0x4c5e04: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4c5e04u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5e08:
    // 0x4c5e08: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x4c5e08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_4c5e0c:
    // 0x4c5e0c: 0x46800760  cvt.s.w     $f29, $f0
    ctx->pc = 0x4c5e0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[29] = FPU_CVT_S_W(tmp); }
label_4c5e10:
    // 0x4c5e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c5e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5e14:
    // 0x4c5e14: 0xc0506ac  jal         func_141AB0
label_4c5e18:
    if (ctx->pc == 0x4C5E18u) {
        ctx->pc = 0x4C5E18u;
            // 0x4c5e18: 0x46800720  cvt.s.w     $f28, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4C5E1Cu;
        goto label_4c5e1c;
    }
    ctx->pc = 0x4C5E14u;
    SET_GPR_U32(ctx, 31, 0x4C5E1Cu);
    ctx->pc = 0x4C5E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5E14u;
            // 0x4c5e18: 0x46800720  cvt.s.w     $f28, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5E1Cu; }
        if (ctx->pc != 0x4C5E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5E1Cu; }
        if (ctx->pc != 0x4C5E1Cu) { return; }
    }
    ctx->pc = 0x4C5E1Cu;
label_4c5e1c:
    // 0x4c5e1c: 0xc642012c  lwc1        $f2, 0x12C($s2)
    ctx->pc = 0x4c5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c5e20:
    // 0x4c5e20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4c5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4c5e24:
    // 0x4c5e24: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x4c5e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c5e28:
    // 0x4c5e28: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4c5e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4c5e2c:
    // 0x4c5e2c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x4c5e2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_4c5e30:
    // 0x4c5e30: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x4c5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_4c5e34:
    // 0x4c5e34: 0x46022682  mul.s       $f26, $f4, $f2
    ctx->pc = 0x4c5e34u;
    ctx->f[26] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4c5e38:
    // 0x4c5e38: 0x46140642  mul.s       $f25, $f0, $f20
    ctx->pc = 0x4c5e38u;
    ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4c5e3c:
    // 0x4c5e3c: 0xc6420178  lwc1        $f2, 0x178($s2)
    ctx->pc = 0x4c5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c5e40:
    // 0x4c5e40: 0xc640017c  lwc1        $f0, 0x17C($s2)
    ctx->pc = 0x4c5e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c5e44:
    // 0x4c5e44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4c5e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c5e48:
    // 0x4c5e48: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x4c5e48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_4c5e4c:
    // 0x4c5e4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4c5e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4c5e50:
    // 0x4c5e50: 0x46020dc2  mul.s       $f23, $f1, $f2
    ctx->pc = 0x4c5e50u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4c5e54:
    // 0x4c5e54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4c5e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4c5e58:
    // 0x4c5e58: 0xc6430128  lwc1        $f3, 0x128($s2)
    ctx->pc = 0x4c5e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c5e5c:
    // 0x4c5e5c: 0xc641013c  lwc1        $f1, 0x13C($s2)
    ctx->pc = 0x4c5e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c5e60:
    // 0x4c5e60: 0xc6420138  lwc1        $f2, 0x138($s2)
    ctx->pc = 0x4c5e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c5e64:
    // 0x4c5e64: 0x46141ec2  mul.s       $f27, $f3, $f20
    ctx->pc = 0x4c5e64u;
    ctx->f[27] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_4c5e68:
    // 0x4c5e68: 0xc643015c  lwc1        $f3, 0x15C($s2)
    ctx->pc = 0x4c5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c5e6c:
    // 0x4c5e6c: 0x46002582  mul.s       $f22, $f4, $f0
    ctx->pc = 0x4c5e6cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4c5e70:
    // 0x4c5e70: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x4c5e70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_4c5e74:
    // 0x4c5e74: 0x4619d800  add.s       $f0, $f27, $f25
    ctx->pc = 0x4c5e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[25]);
label_4c5e78:
    // 0x4c5e78: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x4c5e78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_4c5e7c:
    // 0x4c5e7c: 0xc6850010  lwc1        $f5, 0x10($s4)
    ctx->pc = 0x4c5e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4c5e80:
    // 0x4c5e80: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x4c5e80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_4c5e84:
    // 0x4c5e84: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x4c5e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_4c5e88:
    // 0x4c5e88: 0x46022d42  mul.s       $f21, $f5, $f2
    ctx->pc = 0x4c5e88u;
    ctx->f[21] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4c5e8c:
    // 0x4c5e8c: 0x46012502  mul.s       $f20, $f4, $f1
    ctx->pc = 0x4c5e8cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_4c5e90:
    // 0x4c5e90: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x4c5e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_4c5e94:
    // 0x4c5e94: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x4c5e94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4c5e98:
    // 0x4c5e98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c5e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5e9c:
    // 0x4c5e9c: 0x0  nop
    ctx->pc = 0x4c5e9cu;
    // NOP
label_4c5ea0:
    // 0x4c5ea0: 0x461d0018  adda.s      $f0, $f29
    ctx->pc = 0x4c5ea0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[29]);
label_4c5ea4:
    // 0x4c5ea4: 0x46032602  mul.s       $f24, $f4, $f3
    ctx->pc = 0x4c5ea4u;
    ctx->f[24] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_4c5ea8:
    // 0x4c5ea8: 0xc0bcf34  jal         func_2F3CD0
label_4c5eac:
    if (ctx->pc == 0x4C5EACu) {
        ctx->pc = 0x4C5EACu;
            // 0x4c5eac: 0x4601275d  msub.s      $f29, $f4, $f1 (Delay Slot)
        ctx->f[29] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
        ctx->pc = 0x4C5EB0u;
        goto label_4c5eb0;
    }
    ctx->pc = 0x4C5EA8u;
    SET_GPR_U32(ctx, 31, 0x4C5EB0u);
    ctx->pc = 0x4C5EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5EA8u;
            // 0x4c5eac: 0x4601275d  msub.s      $f29, $f4, $f1 (Delay Slot)
        ctx->f[29] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5EB0u; }
        if (ctx->pc != 0x4C5EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5EB0u; }
        if (ctx->pc != 0x4C5EB0u) { return; }
    }
    ctx->pc = 0x4C5EB0u;
label_4c5eb0:
    // 0x4c5eb0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x4c5eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c5eb4:
    // 0x4c5eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c5eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c5eb8:
    // 0x4c5eb8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4c5eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4c5ebc:
    // 0x4c5ebc: 0x320f809  jalr        $t9
label_4c5ec0:
    if (ctx->pc == 0x4C5EC0u) {
        ctx->pc = 0x4C5EC0u;
            // 0x4c5ec0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4C5EC4u;
        goto label_4c5ec4;
    }
    ctx->pc = 0x4C5EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C5EC4u);
        ctx->pc = 0x4C5EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5EBCu;
            // 0x4c5ec0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C5EC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C5EC4u; }
            if (ctx->pc != 0x4C5EC4u) { return; }
        }
        }
    }
    ctx->pc = 0x4C5EC4u;
label_4c5ec4:
    // 0x4c5ec4: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4c5ec4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c5ec8:
    // 0x4c5ec8: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x4c5ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_4c5ecc:
    // 0x4c5ecc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c5ed0:
    // 0x4c5ed0: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x4c5ed0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c5ed4:
    // 0x4c5ed4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4c5ed4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c5ed8:
    // 0x4c5ed8: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x4c5ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_4c5edc:
    // 0x4c5edc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4c5edcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5ee0:
    // 0x4c5ee0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c5ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c5ee4:
    // 0x4c5ee4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c5ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c5ee8:
    // 0x4c5ee8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c5ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c5eec:
    // 0x4c5eec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c5eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5ef0:
    // 0x4c5ef0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4c5ef0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5ef4:
    // 0x4c5ef4: 0x0  nop
    ctx->pc = 0x4c5ef4u;
    // NOP
label_4c5ef8:
    // 0x4c5ef8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c5ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c5efc:
    // 0x4c5efc: 0x4619eb00  add.s       $f12, $f29, $f25
    ctx->pc = 0x4c5efcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[29], ctx->f[25]);
label_4c5f00:
    // 0x4c5f00: 0x4618e341  sub.s       $f13, $f28, $f24
    ctx->pc = 0x4c5f00u;
    ctx->f[13] = FPU_SUB_S(ctx->f[28], ctx->f[24]);
label_4c5f04:
    // 0x4c5f04: 0x4618e3c0  add.s       $f15, $f28, $f24
    ctx->pc = 0x4c5f04u;
    ctx->f[15] = FPU_ADD_S(ctx->f[28], ctx->f[24]);
label_4c5f08:
    // 0x4c5f08: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c5f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c5f0c:
    // 0x4c5f0c: 0xc0bc284  jal         func_2F0A10
label_4c5f10:
    if (ctx->pc == 0x4C5F10u) {
        ctx->pc = 0x4C5F10u;
            // 0x4c5f10: 0x4600eb86  mov.s       $f14, $f29 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[29]);
        ctx->pc = 0x4C5F14u;
        goto label_4c5f14;
    }
    ctx->pc = 0x4C5F0Cu;
    SET_GPR_U32(ctx, 31, 0x4C5F14u);
    ctx->pc = 0x4C5F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5F0Cu;
            // 0x4c5f10: 0x4600eb86  mov.s       $f14, $f29 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[29]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5F14u; }
        if (ctx->pc != 0x4C5F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5F14u; }
        if (ctx->pc != 0x4C5F14u) { return; }
    }
    ctx->pc = 0x4C5F14u;
label_4c5f14:
    // 0x4c5f14: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4c5f14u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c5f18:
    // 0x4c5f18: 0x4619ee00  add.s       $f24, $f29, $f25
    ctx->pc = 0x4c5f18u;
    ctx->f[24] = FPU_ADD_S(ctx->f[29], ctx->f[25]);
label_4c5f1c:
    // 0x4c5f1c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c5f20:
    // 0x4c5f20: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4c5f20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c5f24:
    // 0x4c5f24: 0x2023025  or          $a2, $s0, $v0
    ctx->pc = 0x4c5f24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4c5f28:
    // 0x4c5f28: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x4c5f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_4c5f2c:
    // 0x4c5f2c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c5f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c5f30:
    // 0x4c5f30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c5f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c5f34:
    // 0x4c5f34: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4c5f34u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5f38:
    // 0x4c5f38: 0x0  nop
    ctx->pc = 0x4c5f38u;
    // NOP
label_4c5f3c:
    // 0x4c5f3c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c5f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c5f40:
    // 0x4c5f40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c5f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5f44:
    // 0x4c5f44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c5f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5f48:
    // 0x4c5f48: 0x0  nop
    ctx->pc = 0x4c5f48u;
    // NOP
label_4c5f4c:
    // 0x4c5f4c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c5f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c5f50:
    // 0x4c5f50: 0x461ae341  sub.s       $f13, $f28, $f26
    ctx->pc = 0x4c5f50u;
    ctx->f[13] = FPU_SUB_S(ctx->f[28], ctx->f[26]);
label_4c5f54:
    // 0x4c5f54: 0x461ae3c0  add.s       $f15, $f28, $f26
    ctx->pc = 0x4c5f54u;
    ctx->f[15] = FPU_ADD_S(ctx->f[28], ctx->f[26]);
label_4c5f58:
    // 0x4c5f58: 0x461bc380  add.s       $f14, $f24, $f27
    ctx->pc = 0x4c5f58u;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
label_4c5f5c:
    // 0x4c5f5c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c5f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c5f60:
    // 0x4c5f60: 0xc0bc284  jal         func_2F0A10
label_4c5f64:
    if (ctx->pc == 0x4C5F64u) {
        ctx->pc = 0x4C5F64u;
            // 0x4c5f64: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x4C5F68u;
        goto label_4c5f68;
    }
    ctx->pc = 0x4C5F60u;
    SET_GPR_U32(ctx, 31, 0x4C5F68u);
    ctx->pc = 0x4C5F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5F60u;
            // 0x4c5f64: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5F68u; }
        if (ctx->pc != 0x4C5F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5F68u; }
        if (ctx->pc != 0x4C5F68u) { return; }
    }
    ctx->pc = 0x4C5F68u;
label_4c5f68:
    // 0x4c5f68: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4c5f68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c5f6c:
    // 0x4c5f6c: 0x461bc600  add.s       $f24, $f24, $f27
    ctx->pc = 0x4c5f6cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
label_4c5f70:
    // 0x4c5f70: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c5f74:
    // 0x4c5f74: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4c5f74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c5f78:
    // 0x4c5f78: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4c5f78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4c5f7c:
    // 0x4c5f7c: 0x26450170  addiu       $a1, $s2, 0x170
    ctx->pc = 0x4c5f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
label_4c5f80:
    // 0x4c5f80: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c5f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c5f84:
    // 0x4c5f84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c5f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c5f88:
    // 0x4c5f88: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4c5f88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5f8c:
    // 0x4c5f8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c5f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5f90:
    // 0x4c5f90: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c5f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c5f94:
    // 0x4c5f94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c5f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c5f98:
    // 0x4c5f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c5f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5f9c:
    // 0x4c5f9c: 0x0  nop
    ctx->pc = 0x4c5f9cu;
    // NOP
label_4c5fa0:
    // 0x4c5fa0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c5fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c5fa4:
    // 0x4c5fa4: 0x4616e341  sub.s       $f13, $f28, $f22
    ctx->pc = 0x4c5fa4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[28], ctx->f[22]);
label_4c5fa8:
    // 0x4c5fa8: 0x4616e3c0  add.s       $f15, $f28, $f22
    ctx->pc = 0x4c5fa8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[28], ctx->f[22]);
label_4c5fac:
    // 0x4c5fac: 0x4617c380  add.s       $f14, $f24, $f23
    ctx->pc = 0x4c5facu;
    ctx->f[14] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
label_4c5fb0:
    // 0x4c5fb0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c5fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c5fb4:
    // 0x4c5fb4: 0xc0bc284  jal         func_2F0A10
label_4c5fb8:
    if (ctx->pc == 0x4C5FB8u) {
        ctx->pc = 0x4C5FB8u;
            // 0x4c5fb8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x4C5FBCu;
        goto label_4c5fbc;
    }
    ctx->pc = 0x4C5FB4u;
    SET_GPR_U32(ctx, 31, 0x4C5FBCu);
    ctx->pc = 0x4C5FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5FB4u;
            // 0x4c5fb8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5FBCu; }
        if (ctx->pc != 0x4C5FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5FBCu; }
        if (ctx->pc != 0x4C5FBCu) { return; }
    }
    ctx->pc = 0x4C5FBCu;
label_4c5fbc:
    // 0x4c5fbc: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4c5fbcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c5fc0:
    // 0x4c5fc0: 0x4617c300  add.s       $f12, $f24, $f23
    ctx->pc = 0x4c5fc0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
label_4c5fc4:
    // 0x4c5fc4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c5fc8:
    // 0x4c5fc8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4c5fc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c5fcc:
    // 0x4c5fcc: 0x26450130  addiu       $a1, $s2, 0x130
    ctx->pc = 0x4c5fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
label_4c5fd0:
    // 0x4c5fd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c5fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c5fd4:
    // 0x4c5fd4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c5fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c5fd8:
    // 0x4c5fd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c5fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5fdc:
    // 0x4c5fdc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4c5fdcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5fe0:
    // 0x4c5fe0: 0x0  nop
    ctx->pc = 0x4c5fe0u;
    // NOP
label_4c5fe4:
    // 0x4c5fe4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c5fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c5fe8:
    // 0x4c5fe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c5fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5fec:
    // 0x4c5fec: 0x0  nop
    ctx->pc = 0x4c5fecu;
    // NOP
label_4c5ff0:
    // 0x4c5ff0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c5ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c5ff4:
    // 0x4c5ff4: 0x46156380  add.s       $f14, $f12, $f21
    ctx->pc = 0x4c5ff4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
label_4c5ff8:
    // 0x4c5ff8: 0x4614e341  sub.s       $f13, $f28, $f20
    ctx->pc = 0x4c5ff8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[28], ctx->f[20]);
label_4c5ffc:
    // 0x4c5ffc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c5ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c6000:
    // 0x4c6000: 0xc0bc284  jal         func_2F0A10
label_4c6004:
    if (ctx->pc == 0x4C6004u) {
        ctx->pc = 0x4C6004u;
            // 0x4c6004: 0x4614e3c0  add.s       $f15, $f28, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[28], ctx->f[20]);
        ctx->pc = 0x4C6008u;
        goto label_4c6008;
    }
    ctx->pc = 0x4C6000u;
    SET_GPR_U32(ctx, 31, 0x4C6008u);
    ctx->pc = 0x4C6004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6000u;
            // 0x4c6004: 0x4614e3c0  add.s       $f15, $f28, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[28], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6008u; }
        if (ctx->pc != 0x4C6008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6008u; }
        if (ctx->pc != 0x4C6008u) { return; }
    }
    ctx->pc = 0x4C6008u;
label_4c6008:
    // 0x4c6008: 0xc0bcf34  jal         func_2F3CD0
label_4c600c:
    if (ctx->pc == 0x4C600Cu) {
        ctx->pc = 0x4C6010u;
        goto label_4c6010;
    }
    ctx->pc = 0x4C6008u;
    SET_GPR_U32(ctx, 31, 0x4C6010u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6010u; }
        if (ctx->pc != 0x4C6010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6010u; }
        if (ctx->pc != 0x4C6010u) { return; }
    }
    ctx->pc = 0x4C6010u;
label_4c6010:
    // 0x4c6010: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x4c6010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c6014:
    // 0x4c6014: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c6014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c6018:
    // 0x4c6018: 0x320f809  jalr        $t9
label_4c601c:
    if (ctx->pc == 0x4C601Cu) {
        ctx->pc = 0x4C601Cu;
            // 0x4c601c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6020u;
        goto label_4c6020;
    }
    ctx->pc = 0x4C6018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C6020u);
        ctx->pc = 0x4C601Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6018u;
            // 0x4c601c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C6020u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C6020u; }
            if (ctx->pc != 0x4C6020u) { return; }
        }
        }
    }
    ctx->pc = 0x4C6020u;
label_4c6020:
    // 0x4c6020: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4c6020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4c6024:
    // 0x4c6024: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x4c6024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_4c6028:
    // 0x4c6028: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4c6028u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c602c:
    // 0x4c602c: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x4c602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_4c6030:
    // 0x4c6030: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4c6030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c6034:
    // 0x4c6034: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x4c6034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_4c6038:
    // 0x4c6038: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4c6038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c603c:
    // 0x4c603c: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x4c603cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4c6040:
    // 0x4c6040: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4c6040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c6044:
    // 0x4c6044: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x4c6044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_4c6048:
    // 0x4c6048: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4c6048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c604c:
    // 0x4c604c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4c604cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4c6050:
    // 0x4c6050: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4c6050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4c6054:
    // 0x4c6054: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4c6054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4c6058:
    // 0x4c6058: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4c6058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4c605c:
    // 0x4c605c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4c605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c6060:
    // 0x4c6060: 0x3e00008  jr          $ra
label_4c6064:
    if (ctx->pc == 0x4C6064u) {
        ctx->pc = 0x4C6064u;
            // 0x4c6064: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C6068u;
        goto label_4c6068;
    }
    ctx->pc = 0x4C6060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6060u;
            // 0x4c6064: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C6068u;
label_4c6068:
    // 0x4c6068: 0x0  nop
    ctx->pc = 0x4c6068u;
    // NOP
label_4c606c:
    // 0x4c606c: 0x0  nop
    ctx->pc = 0x4c606cu;
    // NOP
}
