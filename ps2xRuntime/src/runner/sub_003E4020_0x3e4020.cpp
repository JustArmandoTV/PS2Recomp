#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E4020
// Address: 0x3e4020 - 0x3e43b0
void sub_003E4020_0x3e4020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4020_0x3e4020");
#endif

    switch (ctx->pc) {
        case 0x3e4020u: goto label_3e4020;
        case 0x3e4024u: goto label_3e4024;
        case 0x3e4028u: goto label_3e4028;
        case 0x3e402cu: goto label_3e402c;
        case 0x3e4030u: goto label_3e4030;
        case 0x3e4034u: goto label_3e4034;
        case 0x3e4038u: goto label_3e4038;
        case 0x3e403cu: goto label_3e403c;
        case 0x3e4040u: goto label_3e4040;
        case 0x3e4044u: goto label_3e4044;
        case 0x3e4048u: goto label_3e4048;
        case 0x3e404cu: goto label_3e404c;
        case 0x3e4050u: goto label_3e4050;
        case 0x3e4054u: goto label_3e4054;
        case 0x3e4058u: goto label_3e4058;
        case 0x3e405cu: goto label_3e405c;
        case 0x3e4060u: goto label_3e4060;
        case 0x3e4064u: goto label_3e4064;
        case 0x3e4068u: goto label_3e4068;
        case 0x3e406cu: goto label_3e406c;
        case 0x3e4070u: goto label_3e4070;
        case 0x3e4074u: goto label_3e4074;
        case 0x3e4078u: goto label_3e4078;
        case 0x3e407cu: goto label_3e407c;
        case 0x3e4080u: goto label_3e4080;
        case 0x3e4084u: goto label_3e4084;
        case 0x3e4088u: goto label_3e4088;
        case 0x3e408cu: goto label_3e408c;
        case 0x3e4090u: goto label_3e4090;
        case 0x3e4094u: goto label_3e4094;
        case 0x3e4098u: goto label_3e4098;
        case 0x3e409cu: goto label_3e409c;
        case 0x3e40a0u: goto label_3e40a0;
        case 0x3e40a4u: goto label_3e40a4;
        case 0x3e40a8u: goto label_3e40a8;
        case 0x3e40acu: goto label_3e40ac;
        case 0x3e40b0u: goto label_3e40b0;
        case 0x3e40b4u: goto label_3e40b4;
        case 0x3e40b8u: goto label_3e40b8;
        case 0x3e40bcu: goto label_3e40bc;
        case 0x3e40c0u: goto label_3e40c0;
        case 0x3e40c4u: goto label_3e40c4;
        case 0x3e40c8u: goto label_3e40c8;
        case 0x3e40ccu: goto label_3e40cc;
        case 0x3e40d0u: goto label_3e40d0;
        case 0x3e40d4u: goto label_3e40d4;
        case 0x3e40d8u: goto label_3e40d8;
        case 0x3e40dcu: goto label_3e40dc;
        case 0x3e40e0u: goto label_3e40e0;
        case 0x3e40e4u: goto label_3e40e4;
        case 0x3e40e8u: goto label_3e40e8;
        case 0x3e40ecu: goto label_3e40ec;
        case 0x3e40f0u: goto label_3e40f0;
        case 0x3e40f4u: goto label_3e40f4;
        case 0x3e40f8u: goto label_3e40f8;
        case 0x3e40fcu: goto label_3e40fc;
        case 0x3e4100u: goto label_3e4100;
        case 0x3e4104u: goto label_3e4104;
        case 0x3e4108u: goto label_3e4108;
        case 0x3e410cu: goto label_3e410c;
        case 0x3e4110u: goto label_3e4110;
        case 0x3e4114u: goto label_3e4114;
        case 0x3e4118u: goto label_3e4118;
        case 0x3e411cu: goto label_3e411c;
        case 0x3e4120u: goto label_3e4120;
        case 0x3e4124u: goto label_3e4124;
        case 0x3e4128u: goto label_3e4128;
        case 0x3e412cu: goto label_3e412c;
        case 0x3e4130u: goto label_3e4130;
        case 0x3e4134u: goto label_3e4134;
        case 0x3e4138u: goto label_3e4138;
        case 0x3e413cu: goto label_3e413c;
        case 0x3e4140u: goto label_3e4140;
        case 0x3e4144u: goto label_3e4144;
        case 0x3e4148u: goto label_3e4148;
        case 0x3e414cu: goto label_3e414c;
        case 0x3e4150u: goto label_3e4150;
        case 0x3e4154u: goto label_3e4154;
        case 0x3e4158u: goto label_3e4158;
        case 0x3e415cu: goto label_3e415c;
        case 0x3e4160u: goto label_3e4160;
        case 0x3e4164u: goto label_3e4164;
        case 0x3e4168u: goto label_3e4168;
        case 0x3e416cu: goto label_3e416c;
        case 0x3e4170u: goto label_3e4170;
        case 0x3e4174u: goto label_3e4174;
        case 0x3e4178u: goto label_3e4178;
        case 0x3e417cu: goto label_3e417c;
        case 0x3e4180u: goto label_3e4180;
        case 0x3e4184u: goto label_3e4184;
        case 0x3e4188u: goto label_3e4188;
        case 0x3e418cu: goto label_3e418c;
        case 0x3e4190u: goto label_3e4190;
        case 0x3e4194u: goto label_3e4194;
        case 0x3e4198u: goto label_3e4198;
        case 0x3e419cu: goto label_3e419c;
        case 0x3e41a0u: goto label_3e41a0;
        case 0x3e41a4u: goto label_3e41a4;
        case 0x3e41a8u: goto label_3e41a8;
        case 0x3e41acu: goto label_3e41ac;
        case 0x3e41b0u: goto label_3e41b0;
        case 0x3e41b4u: goto label_3e41b4;
        case 0x3e41b8u: goto label_3e41b8;
        case 0x3e41bcu: goto label_3e41bc;
        case 0x3e41c0u: goto label_3e41c0;
        case 0x3e41c4u: goto label_3e41c4;
        case 0x3e41c8u: goto label_3e41c8;
        case 0x3e41ccu: goto label_3e41cc;
        case 0x3e41d0u: goto label_3e41d0;
        case 0x3e41d4u: goto label_3e41d4;
        case 0x3e41d8u: goto label_3e41d8;
        case 0x3e41dcu: goto label_3e41dc;
        case 0x3e41e0u: goto label_3e41e0;
        case 0x3e41e4u: goto label_3e41e4;
        case 0x3e41e8u: goto label_3e41e8;
        case 0x3e41ecu: goto label_3e41ec;
        case 0x3e41f0u: goto label_3e41f0;
        case 0x3e41f4u: goto label_3e41f4;
        case 0x3e41f8u: goto label_3e41f8;
        case 0x3e41fcu: goto label_3e41fc;
        case 0x3e4200u: goto label_3e4200;
        case 0x3e4204u: goto label_3e4204;
        case 0x3e4208u: goto label_3e4208;
        case 0x3e420cu: goto label_3e420c;
        case 0x3e4210u: goto label_3e4210;
        case 0x3e4214u: goto label_3e4214;
        case 0x3e4218u: goto label_3e4218;
        case 0x3e421cu: goto label_3e421c;
        case 0x3e4220u: goto label_3e4220;
        case 0x3e4224u: goto label_3e4224;
        case 0x3e4228u: goto label_3e4228;
        case 0x3e422cu: goto label_3e422c;
        case 0x3e4230u: goto label_3e4230;
        case 0x3e4234u: goto label_3e4234;
        case 0x3e4238u: goto label_3e4238;
        case 0x3e423cu: goto label_3e423c;
        case 0x3e4240u: goto label_3e4240;
        case 0x3e4244u: goto label_3e4244;
        case 0x3e4248u: goto label_3e4248;
        case 0x3e424cu: goto label_3e424c;
        case 0x3e4250u: goto label_3e4250;
        case 0x3e4254u: goto label_3e4254;
        case 0x3e4258u: goto label_3e4258;
        case 0x3e425cu: goto label_3e425c;
        case 0x3e4260u: goto label_3e4260;
        case 0x3e4264u: goto label_3e4264;
        case 0x3e4268u: goto label_3e4268;
        case 0x3e426cu: goto label_3e426c;
        case 0x3e4270u: goto label_3e4270;
        case 0x3e4274u: goto label_3e4274;
        case 0x3e4278u: goto label_3e4278;
        case 0x3e427cu: goto label_3e427c;
        case 0x3e4280u: goto label_3e4280;
        case 0x3e4284u: goto label_3e4284;
        case 0x3e4288u: goto label_3e4288;
        case 0x3e428cu: goto label_3e428c;
        case 0x3e4290u: goto label_3e4290;
        case 0x3e4294u: goto label_3e4294;
        case 0x3e4298u: goto label_3e4298;
        case 0x3e429cu: goto label_3e429c;
        case 0x3e42a0u: goto label_3e42a0;
        case 0x3e42a4u: goto label_3e42a4;
        case 0x3e42a8u: goto label_3e42a8;
        case 0x3e42acu: goto label_3e42ac;
        case 0x3e42b0u: goto label_3e42b0;
        case 0x3e42b4u: goto label_3e42b4;
        case 0x3e42b8u: goto label_3e42b8;
        case 0x3e42bcu: goto label_3e42bc;
        case 0x3e42c0u: goto label_3e42c0;
        case 0x3e42c4u: goto label_3e42c4;
        case 0x3e42c8u: goto label_3e42c8;
        case 0x3e42ccu: goto label_3e42cc;
        case 0x3e42d0u: goto label_3e42d0;
        case 0x3e42d4u: goto label_3e42d4;
        case 0x3e42d8u: goto label_3e42d8;
        case 0x3e42dcu: goto label_3e42dc;
        case 0x3e42e0u: goto label_3e42e0;
        case 0x3e42e4u: goto label_3e42e4;
        case 0x3e42e8u: goto label_3e42e8;
        case 0x3e42ecu: goto label_3e42ec;
        case 0x3e42f0u: goto label_3e42f0;
        case 0x3e42f4u: goto label_3e42f4;
        case 0x3e42f8u: goto label_3e42f8;
        case 0x3e42fcu: goto label_3e42fc;
        case 0x3e4300u: goto label_3e4300;
        case 0x3e4304u: goto label_3e4304;
        case 0x3e4308u: goto label_3e4308;
        case 0x3e430cu: goto label_3e430c;
        case 0x3e4310u: goto label_3e4310;
        case 0x3e4314u: goto label_3e4314;
        case 0x3e4318u: goto label_3e4318;
        case 0x3e431cu: goto label_3e431c;
        case 0x3e4320u: goto label_3e4320;
        case 0x3e4324u: goto label_3e4324;
        case 0x3e4328u: goto label_3e4328;
        case 0x3e432cu: goto label_3e432c;
        case 0x3e4330u: goto label_3e4330;
        case 0x3e4334u: goto label_3e4334;
        case 0x3e4338u: goto label_3e4338;
        case 0x3e433cu: goto label_3e433c;
        case 0x3e4340u: goto label_3e4340;
        case 0x3e4344u: goto label_3e4344;
        case 0x3e4348u: goto label_3e4348;
        case 0x3e434cu: goto label_3e434c;
        case 0x3e4350u: goto label_3e4350;
        case 0x3e4354u: goto label_3e4354;
        case 0x3e4358u: goto label_3e4358;
        case 0x3e435cu: goto label_3e435c;
        case 0x3e4360u: goto label_3e4360;
        case 0x3e4364u: goto label_3e4364;
        case 0x3e4368u: goto label_3e4368;
        case 0x3e436cu: goto label_3e436c;
        case 0x3e4370u: goto label_3e4370;
        case 0x3e4374u: goto label_3e4374;
        case 0x3e4378u: goto label_3e4378;
        case 0x3e437cu: goto label_3e437c;
        case 0x3e4380u: goto label_3e4380;
        case 0x3e4384u: goto label_3e4384;
        case 0x3e4388u: goto label_3e4388;
        case 0x3e438cu: goto label_3e438c;
        case 0x3e4390u: goto label_3e4390;
        case 0x3e4394u: goto label_3e4394;
        case 0x3e4398u: goto label_3e4398;
        case 0x3e439cu: goto label_3e439c;
        case 0x3e43a0u: goto label_3e43a0;
        case 0x3e43a4u: goto label_3e43a4;
        case 0x3e43a8u: goto label_3e43a8;
        case 0x3e43acu: goto label_3e43ac;
        default: break;
    }

    ctx->pc = 0x3e4020u;

label_3e4020:
    // 0x3e4020: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e4020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3e4024:
    // 0x3e4024: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x3e4024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3e4028:
    // 0x3e4028: 0xc481027c  lwc1        $f1, 0x27C($a0)
    ctx->pc = 0x3e4028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e402c:
    // 0x3e402c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e402cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e4030:
    // 0x3e4030: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3e4030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e4034:
    // 0x3e4034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e4034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e4038:
    // 0x3e4038: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e4038u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3e403c:
    // 0x3e403c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e403cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e4040:
    // 0x3e4040: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3e4044:
    if (ctx->pc == 0x3E4044u) {
        ctx->pc = 0x3E4044u;
            // 0x3e4044: 0xe481027c  swc1        $f1, 0x27C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
        ctx->pc = 0x3E4048u;
        goto label_3e4048;
    }
    ctx->pc = 0x3E4040u;
    {
        const bool branch_taken_0x3e4040 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E4044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4040u;
            // 0x3e4044: 0xe481027c  swc1        $f1, 0x27C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 636), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4040) {
            ctx->pc = 0x3E404Cu;
            goto label_3e404c;
        }
    }
    ctx->pc = 0x3E4048u;
label_3e4048:
    // 0x3e4048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e4048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e404c:
    // 0x3e404c: 0x3e00008  jr          $ra
label_3e4050:
    if (ctx->pc == 0x3E4050u) {
        ctx->pc = 0x3E4054u;
        goto label_3e4054;
    }
    ctx->pc = 0x3E404Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E4054u;
label_3e4054:
    // 0x3e4054: 0x0  nop
    ctx->pc = 0x3e4054u;
    // NOP
label_3e4058:
    // 0x3e4058: 0x0  nop
    ctx->pc = 0x3e4058u;
    // NOP
label_3e405c:
    // 0x3e405c: 0x0  nop
    ctx->pc = 0x3e405cu;
    // NOP
label_3e4060:
    // 0x3e4060: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e4060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3e4064:
    // 0x3e4064: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e4064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3e4068:
    // 0x3e4068: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e4068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e406c:
    // 0x3e406c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e4070:
    // 0x3e4070: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3e4070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e4074:
    // 0x3e4074: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e4074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e4078:
    // 0x3e4078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e4078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e407c:
    // 0x3e407c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e4080:
    // 0x3e4080: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3e4080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3e4084:
    // 0x3e4084: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
label_3e4088:
    if (ctx->pc == 0x3E4088u) {
        ctx->pc = 0x3E4088u;
            // 0x3e4088: 0x24920084  addiu       $s2, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x3E408Cu;
        goto label_3e408c;
    }
    ctx->pc = 0x3E4084u;
    {
        const bool branch_taken_0x3e4084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4084u;
            // 0x3e4088: 0x24920084  addiu       $s2, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4084) {
            ctx->pc = 0x3E4378u;
            goto label_3e4378;
        }
    }
    ctx->pc = 0x3E408Cu;
label_3e408c:
    // 0x3e408c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3e408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3e4090:
    // 0x3e4090: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x3e4090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_3e4094:
    // 0x3e4094: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e4094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e4098:
    // 0x3e4098: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3e4098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3e409c:
    // 0x3e409c: 0x320f809  jalr        $t9
label_3e40a0:
    if (ctx->pc == 0x3E40A0u) {
        ctx->pc = 0x3E40A0u;
            // 0x3e40a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E40A4u;
        goto label_3e40a4;
    }
    ctx->pc = 0x3E409Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E40A4u);
        ctx->pc = 0x3E40A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E409Cu;
            // 0x3e40a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E40A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E40A4u; }
            if (ctx->pc != 0x3E40A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3E40A4u;
label_3e40a4:
    // 0x3e40a4: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x3e40a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_3e40a8:
    // 0x3e40a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e40a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e40ac:
    // 0x3e40ac: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x3e40acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_3e40b0:
    // 0x3e40b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e40b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e40b4:
    // 0x3e40b4: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x3e40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e40b8:
    // 0x3e40b8: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x3e40b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_3e40bc:
    // 0x3e40bc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3e40bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3e40c0:
    // 0x3e40c0: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x3e40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
label_3e40c4:
    // 0x3e40c4: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3e40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e40c8:
    // 0x3e40c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3e40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3e40cc:
    // 0x3e40cc: 0xc075128  jal         func_1D44A0
label_3e40d0:
    if (ctx->pc == 0x3E40D0u) {
        ctx->pc = 0x3E40D0u;
            // 0x3e40d0: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x3E40D4u;
        goto label_3e40d4;
    }
    ctx->pc = 0x3E40CCu;
    SET_GPR_U32(ctx, 31, 0x3E40D4u);
    ctx->pc = 0x3E40D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E40CCu;
            // 0x3e40d0: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E40D4u; }
        if (ctx->pc != 0x3E40D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E40D4u; }
        if (ctx->pc != 0x3E40D4u) { return; }
    }
    ctx->pc = 0x3E40D4u;
label_3e40d4:
    // 0x3e40d4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3e40d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e40d8:
    // 0x3e40d8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x3e40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e40dc:
    // 0x3e40dc: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e40dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3e40e0:
    // 0x3e40e0: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x3e40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e40e4:
    // 0x3e40e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e40e8:
    // 0x3e40e8: 0xc074ea0  jal         func_1D3A80
label_3e40ec:
    if (ctx->pc == 0x3E40ECu) {
        ctx->pc = 0x3E40ECu;
            // 0x3e40ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3E40F0u;
        goto label_3e40f0;
    }
    ctx->pc = 0x3E40E8u;
    SET_GPR_U32(ctx, 31, 0x3E40F0u);
    ctx->pc = 0x3E40ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E40E8u;
            // 0x3e40ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E40F0u; }
        if (ctx->pc != 0x3E40F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E40F0u; }
        if (ctx->pc != 0x3E40F0u) { return; }
    }
    ctx->pc = 0x3E40F0u;
label_3e40f0:
    // 0x3e40f0: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e40f4:
    // 0x3e40f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e40f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e40f8:
    // 0x3e40f8: 0x2e62000a  sltiu       $v0, $s3, 0xA
    ctx->pc = 0x3e40f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3e40fc:
    // 0x3e40fc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3e40fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3e4100:
    // 0x3e4100: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3e4100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3e4104:
    // 0x3e4104: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3e4108:
    if (ctx->pc == 0x3E4108u) {
        ctx->pc = 0x3E4108u;
            // 0x3e4108: 0xae830020  sw          $v1, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x3E410Cu;
        goto label_3e410c;
    }
    ctx->pc = 0x3E4104u;
    {
        const bool branch_taken_0x3e4104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4104u;
            // 0x3e4108: 0xae830020  sw          $v1, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4104) {
            ctx->pc = 0x3E40D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e40d8;
        }
    }
    ctx->pc = 0x3E410Cu;
label_3e410c:
    // 0x3e410c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e4110:
    // 0x3e4110: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e4110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e4114:
    // 0x3e4114: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3e4114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3e4118:
    // 0x3e4118: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3e4118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3e411c:
    // 0x3e411c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3e411cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e4120:
    // 0x3e4120: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3e4124:
    if (ctx->pc == 0x3E4124u) {
        ctx->pc = 0x3E4124u;
            // 0x3e4124: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3E4128u;
        goto label_3e4128;
    }
    ctx->pc = 0x3E4120u;
    {
        const bool branch_taken_0x3e4120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4120) {
            ctx->pc = 0x3E4124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4120u;
            // 0x3e4124: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4134u;
            goto label_3e4134;
        }
    }
    ctx->pc = 0x3E4128u;
label_3e4128:
    // 0x3e4128: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e4128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e412c:
    // 0x3e412c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3e412cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3e4130:
    // 0x3e4130: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e4130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e4134:
    // 0x3e4134: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e4134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e4138:
    // 0x3e4138: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3e4138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3e413c:
    // 0x3e413c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3e413cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3e4140:
    // 0x3e4140: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3e4140u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e4144:
    // 0x3e4144: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3e4148:
    if (ctx->pc == 0x3E4148u) {
        ctx->pc = 0x3E4148u;
            // 0x3e4148: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3E414Cu;
        goto label_3e414c;
    }
    ctx->pc = 0x3E4144u;
    {
        const bool branch_taken_0x3e4144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4144) {
            ctx->pc = 0x3E4148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4144u;
            // 0x3e4148: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4158u;
            goto label_3e4158;
        }
    }
    ctx->pc = 0x3E414Cu;
label_3e414c:
    // 0x3e414c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e414cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e4150:
    // 0x3e4150: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3e4150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3e4154:
    // 0x3e4154: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e4154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e4158:
    // 0x3e4158: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e4158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e415c:
    // 0x3e415c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3e415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3e4160:
    // 0x3e4160: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3e4160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3e4164:
    // 0x3e4164: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3e4164u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e4168:
    // 0x3e4168: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3e416c:
    if (ctx->pc == 0x3E416Cu) {
        ctx->pc = 0x3E416Cu;
            // 0x3e416c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3E4170u;
        goto label_3e4170;
    }
    ctx->pc = 0x3E4168u;
    {
        const bool branch_taken_0x3e4168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4168) {
            ctx->pc = 0x3E416Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4168u;
            // 0x3e416c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E417Cu;
            goto label_3e417c;
        }
    }
    ctx->pc = 0x3E4170u;
label_3e4170:
    // 0x3e4170: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e4170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e4174:
    // 0x3e4174: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3e4174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3e4178:
    // 0x3e4178: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e4178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e417c:
    // 0x3e417c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e4180:
    // 0x3e4180: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3e4180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3e4184:
    // 0x3e4184: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3e4184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3e4188:
    // 0x3e4188: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x3e4188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3e418c:
    // 0x3e418c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3e418cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e4190:
    // 0x3e4190: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3e4194:
    if (ctx->pc == 0x3E4194u) {
        ctx->pc = 0x3E4194u;
            // 0x3e4194: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3E4198u;
        goto label_3e4198;
    }
    ctx->pc = 0x3E4190u;
    {
        const bool branch_taken_0x3e4190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4190) {
            ctx->pc = 0x3E4194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4190u;
            // 0x3e4194: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E41A4u;
            goto label_3e41a4;
        }
    }
    ctx->pc = 0x3E4198u;
label_3e4198:
    // 0x3e4198: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e4198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e419c:
    // 0x3e419c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3e419cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3e41a0:
    // 0x3e41a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e41a4:
    // 0x3e41a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e41a8:
    // 0x3e41a8: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3e41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3e41ac:
    // 0x3e41ac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3e41acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3e41b0:
    // 0x3e41b0: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x3e41b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3e41b4:
    // 0x3e41b4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3e41b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e41b8:
    // 0x3e41b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3e41bc:
    if (ctx->pc == 0x3E41BCu) {
        ctx->pc = 0x3E41C0u;
        goto label_3e41c0;
    }
    ctx->pc = 0x3E41B8u;
    {
        const bool branch_taken_0x3e41b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e41b8) {
            ctx->pc = 0x3E41C8u;
            goto label_3e41c8;
        }
    }
    ctx->pc = 0x3E41C0u;
label_3e41c0:
    // 0x3e41c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e41c4:
    // 0x3e41c4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3e41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3e41c8:
    // 0x3e41c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e41cc:
    // 0x3e41cc: 0x8c42e3c8  lw          $v0, -0x1C38($v0)
    ctx->pc = 0x3e41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960072)));
label_3e41d0:
    // 0x3e41d0: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x3e41d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3e41d4:
    // 0x3e41d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3e41d8:
    if (ctx->pc == 0x3E41D8u) {
        ctx->pc = 0x3E41DCu;
        goto label_3e41dc;
    }
    ctx->pc = 0x3E41D4u;
    {
        const bool branch_taken_0x3e41d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e41d4) {
            ctx->pc = 0x3E41E4u;
            goto label_3e41e4;
        }
    }
    ctx->pc = 0x3E41DCu;
label_3e41dc:
    // 0x3e41dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e41e0:
    // 0x3e41e0: 0xac50e3c8  sw          $s0, -0x1C38($v0)
    ctx->pc = 0x3e41e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960072), GPR_U32(ctx, 16));
label_3e41e4:
    // 0x3e41e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e41e8:
    // 0x3e41e8: 0x8c42e3d0  lw          $v0, -0x1C30($v0)
    ctx->pc = 0x3e41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960080)));
label_3e41ec:
    // 0x3e41ec: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x3e41ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3e41f0:
    // 0x3e41f0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3e41f4:
    if (ctx->pc == 0x3E41F4u) {
        ctx->pc = 0x3E41F4u;
            // 0x3e41f4: 0x8e830020  lw          $v1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->pc = 0x3E41F8u;
        goto label_3e41f8;
    }
    ctx->pc = 0x3E41F0u;
    {
        const bool branch_taken_0x3e41f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e41f0) {
            ctx->pc = 0x3E41F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E41F0u;
            // 0x3e41f4: 0x8e830020  lw          $v1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E4204u;
            goto label_3e4204;
        }
    }
    ctx->pc = 0x3E41F8u;
label_3e41f8:
    // 0x3e41f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e41fc:
    // 0x3e41fc: 0xac50e3d0  sw          $s0, -0x1C30($v0)
    ctx->pc = 0x3e41fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960080), GPR_U32(ctx, 16));
label_3e4200:
    // 0x3e4200: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e4200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e4204:
    // 0x3e4204: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e4204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e4208:
    // 0x3e4208: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e4208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e420c:
    // 0x3e420c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e4210:
    // 0x3e4210: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e4210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e4214:
    // 0x3e4214: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3e4214u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_3e4218:
    // 0x3e4218: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e4218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e421c:
    // 0x3e421c: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e421cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e4220:
    // 0x3e4220: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3e4220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3e4224:
    // 0x3e4224: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e4224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e4228:
    // 0x3e4228: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e4228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_3e422c:
    // 0x3e422c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e4230:
    // 0x3e4230: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e4230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e4234:
    // 0x3e4234: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3e4234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e4238:
    // 0x3e4238: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e4238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e423c:
    // 0x3e423c: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x3e423cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_3e4240:
    // 0x3e4240: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e4240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e4244:
    // 0x3e4244: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e4244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e4248:
    // 0x3e4248: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3e4248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3e424c:
    // 0x3e424c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e4250:
    // 0x3e4250: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x3e4250u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
label_3e4254:
    // 0x3e4254: 0x8c446ee0  lw          $a0, 0x6EE0($v0)
    ctx->pc = 0x3e4254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28384)));
label_3e4258:
    // 0x3e4258: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e4258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e425c:
    // 0x3e425c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3e425cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3e4260:
    // 0x3e4260: 0x320f809  jalr        $t9
label_3e4264:
    if (ctx->pc == 0x3E4264u) {
        ctx->pc = 0x3E4264u;
            // 0x3e4264: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4268u;
        goto label_3e4268;
    }
    ctx->pc = 0x3E4260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E4268u);
        ctx->pc = 0x3E4264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4260u;
            // 0x3e4264: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E4268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E4268u; }
            if (ctx->pc != 0x3E4268u) { return; }
        }
        }
    }
    ctx->pc = 0x3E4268u;
label_3e4268:
    // 0x3e4268: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x3e4268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e426c:
    // 0x3e426c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e426cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e4270:
    // 0x3e4270: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x3e4270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3e4274:
    // 0x3e4274: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x3e4274u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_3e4278:
    // 0x3e4278: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3e4278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3e427c:
    // 0x3e427c: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e427cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e4280:
    // 0x3e4280: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e4280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e4284:
    // 0x3e4284: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3e4284u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_3e4288:
    // 0x3e4288: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e4288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e428c:
    // 0x3e428c: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e428cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e4290:
    // 0x3e4290: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3e4290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3e4294:
    // 0x3e4294: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e4294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e4298:
    // 0x3e4298: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e4298u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_3e429c:
    // 0x3e429c: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x3e429cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_3e42a0:
    // 0x3e42a0: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x3e42a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_3e42a4:
    // 0x3e42a4: 0x8c446ed8  lw          $a0, 0x6ED8($v0)
    ctx->pc = 0x3e42a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28376)));
label_3e42a8:
    // 0x3e42a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e42a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e42ac:
    // 0x3e42ac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3e42acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3e42b0:
    // 0x3e42b0: 0x320f809  jalr        $t9
label_3e42b4:
    if (ctx->pc == 0x3E42B4u) {
        ctx->pc = 0x3E42B4u;
            // 0x3e42b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E42B8u;
        goto label_3e42b8;
    }
    ctx->pc = 0x3E42B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E42B8u);
        ctx->pc = 0x3E42B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E42B0u;
            // 0x3e42b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E42B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E42B8u; }
            if (ctx->pc != 0x3E42B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3E42B8u;
label_3e42b8:
    // 0x3e42b8: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x3e42b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e42bc:
    // 0x3e42bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e42c0:
    // 0x3e42c0: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x3e42c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3e42c4:
    // 0x3e42c4: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x3e42c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_3e42c8:
    // 0x3e42c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3e42c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3e42cc:
    // 0x3e42cc: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e42ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e42d0:
    // 0x3e42d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e42d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e42d4:
    // 0x3e42d4: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3e42d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_3e42d8:
    // 0x3e42d8: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e42d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e42dc:
    // 0x3e42dc: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e42dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e42e0:
    // 0x3e42e0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3e42e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3e42e4:
    // 0x3e42e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e42e8:
    // 0x3e42e8: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e42e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_3e42ec:
    // 0x3e42ec: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x3e42ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_3e42f0:
    // 0x3e42f0: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x3e42f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_3e42f4:
    // 0x3e42f4: 0x8c446ed0  lw          $a0, 0x6ED0($v0)
    ctx->pc = 0x3e42f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28368)));
label_3e42f8:
    // 0x3e42f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e42f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e42fc:
    // 0x3e42fc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3e42fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3e4300:
    // 0x3e4300: 0x320f809  jalr        $t9
label_3e4304:
    if (ctx->pc == 0x3E4304u) {
        ctx->pc = 0x3E4304u;
            // 0x3e4304: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4308u;
        goto label_3e4308;
    }
    ctx->pc = 0x3E4300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E4308u);
        ctx->pc = 0x3E4304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4300u;
            // 0x3e4304: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E4308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E4308u; }
            if (ctx->pc != 0x3E4308u) { return; }
        }
        }
    }
    ctx->pc = 0x3E4308u;
label_3e4308:
    // 0x3e4308: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x3e4308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e430c:
    // 0x3e430c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e430cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e4310:
    // 0x3e4310: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x3e4310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3e4314:
    // 0x3e4314: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x3e4314u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_3e4318:
    // 0x3e4318: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3e4318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3e431c:
    // 0x3e431c: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e431cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e4320:
    // 0x3e4320: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e4320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e4324:
    // 0x3e4324: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3e4324u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_3e4328:
    // 0x3e4328: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e4328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e432c:
    // 0x3e432c: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e4330:
    // 0x3e4330: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3e4330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3e4334:
    // 0x3e4334: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e4334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e4338:
    // 0x3e4338: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e4338u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_3e433c:
    // 0x3e433c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e4340:
    // 0x3e4340: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e4340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e4344:
    // 0x3e4344: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3e4344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e4348:
    // 0x3e4348: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e4348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e434c:
    // 0x3e434c: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x3e434cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_3e4350:
    // 0x3e4350: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x3e4350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e4354:
    // 0x3e4354: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x3e4354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_3e4358:
    // 0x3e4358: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3e4358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3e435c:
    // 0x3e435c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3e435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e4360:
    // 0x3e4360: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x3e4360u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
label_3e4364:
    // 0x3e4364: 0x8c446ec8  lw          $a0, 0x6EC8($v0)
    ctx->pc = 0x3e4364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28360)));
label_3e4368:
    // 0x3e4368: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e4368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e436c:
    // 0x3e436c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3e436cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3e4370:
    // 0x3e4370: 0x320f809  jalr        $t9
label_3e4374:
    if (ctx->pc == 0x3E4374u) {
        ctx->pc = 0x3E4374u;
            // 0x3e4374: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E4378u;
        goto label_3e4378;
    }
    ctx->pc = 0x3E4370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E4378u);
        ctx->pc = 0x3E4374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4370u;
            // 0x3e4374: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E4378u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E4378u; }
            if (ctx->pc != 0x3E4378u) { return; }
        }
        }
    }
    ctx->pc = 0x3E4378u;
label_3e4378:
    // 0x3e4378: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e4378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e437c:
    // 0x3e437c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e437cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e4380:
    // 0x3e4380: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e4380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e4384:
    // 0x3e4384: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e4384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e4388:
    // 0x3e4388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e4388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e438c:
    // 0x3e438c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e438cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e4390:
    // 0x3e4390: 0x3e00008  jr          $ra
label_3e4394:
    if (ctx->pc == 0x3E4394u) {
        ctx->pc = 0x3E4394u;
            // 0x3e4394: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3E4398u;
        goto label_3e4398;
    }
    ctx->pc = 0x3E4390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4390u;
            // 0x3e4394: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E4398u;
label_3e4398:
    // 0x3e4398: 0x0  nop
    ctx->pc = 0x3e4398u;
    // NOP
label_3e439c:
    // 0x3e439c: 0x0  nop
    ctx->pc = 0x3e439cu;
    // NOP
label_3e43a0:
    // 0x3e43a0: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x3e43a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
label_3e43a4:
    // 0x3e43a4: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3e43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3e43a8:
    // 0x3e43a8: 0x80f91fc  j           func_3E47F0
label_3e43ac:
    if (ctx->pc == 0x3E43ACu) {
        ctx->pc = 0x3E43ACu;
            // 0x3e43ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3E43B0u;
        goto label_fallthrough_0x3e43a8;
    }
    ctx->pc = 0x3E43A8u;
    ctx->pc = 0x3E43ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E43A8u;
            // 0x3e43ac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E47F0u;
    {
        auto targetFn = runtime->lookupFunction(0x3E47F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
label_fallthrough_0x3e43a8:
    ctx->pc = 0x3E43B0u;
}
