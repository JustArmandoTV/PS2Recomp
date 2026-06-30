#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F4070
// Address: 0x4f4070 - 0x4f4440
void sub_004F4070_0x4f4070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4070_0x4f4070");
#endif

    switch (ctx->pc) {
        case 0x4f4070u: goto label_4f4070;
        case 0x4f4074u: goto label_4f4074;
        case 0x4f4078u: goto label_4f4078;
        case 0x4f407cu: goto label_4f407c;
        case 0x4f4080u: goto label_4f4080;
        case 0x4f4084u: goto label_4f4084;
        case 0x4f4088u: goto label_4f4088;
        case 0x4f408cu: goto label_4f408c;
        case 0x4f4090u: goto label_4f4090;
        case 0x4f4094u: goto label_4f4094;
        case 0x4f4098u: goto label_4f4098;
        case 0x4f409cu: goto label_4f409c;
        case 0x4f40a0u: goto label_4f40a0;
        case 0x4f40a4u: goto label_4f40a4;
        case 0x4f40a8u: goto label_4f40a8;
        case 0x4f40acu: goto label_4f40ac;
        case 0x4f40b0u: goto label_4f40b0;
        case 0x4f40b4u: goto label_4f40b4;
        case 0x4f40b8u: goto label_4f40b8;
        case 0x4f40bcu: goto label_4f40bc;
        case 0x4f40c0u: goto label_4f40c0;
        case 0x4f40c4u: goto label_4f40c4;
        case 0x4f40c8u: goto label_4f40c8;
        case 0x4f40ccu: goto label_4f40cc;
        case 0x4f40d0u: goto label_4f40d0;
        case 0x4f40d4u: goto label_4f40d4;
        case 0x4f40d8u: goto label_4f40d8;
        case 0x4f40dcu: goto label_4f40dc;
        case 0x4f40e0u: goto label_4f40e0;
        case 0x4f40e4u: goto label_4f40e4;
        case 0x4f40e8u: goto label_4f40e8;
        case 0x4f40ecu: goto label_4f40ec;
        case 0x4f40f0u: goto label_4f40f0;
        case 0x4f40f4u: goto label_4f40f4;
        case 0x4f40f8u: goto label_4f40f8;
        case 0x4f40fcu: goto label_4f40fc;
        case 0x4f4100u: goto label_4f4100;
        case 0x4f4104u: goto label_4f4104;
        case 0x4f4108u: goto label_4f4108;
        case 0x4f410cu: goto label_4f410c;
        case 0x4f4110u: goto label_4f4110;
        case 0x4f4114u: goto label_4f4114;
        case 0x4f4118u: goto label_4f4118;
        case 0x4f411cu: goto label_4f411c;
        case 0x4f4120u: goto label_4f4120;
        case 0x4f4124u: goto label_4f4124;
        case 0x4f4128u: goto label_4f4128;
        case 0x4f412cu: goto label_4f412c;
        case 0x4f4130u: goto label_4f4130;
        case 0x4f4134u: goto label_4f4134;
        case 0x4f4138u: goto label_4f4138;
        case 0x4f413cu: goto label_4f413c;
        case 0x4f4140u: goto label_4f4140;
        case 0x4f4144u: goto label_4f4144;
        case 0x4f4148u: goto label_4f4148;
        case 0x4f414cu: goto label_4f414c;
        case 0x4f4150u: goto label_4f4150;
        case 0x4f4154u: goto label_4f4154;
        case 0x4f4158u: goto label_4f4158;
        case 0x4f415cu: goto label_4f415c;
        case 0x4f4160u: goto label_4f4160;
        case 0x4f4164u: goto label_4f4164;
        case 0x4f4168u: goto label_4f4168;
        case 0x4f416cu: goto label_4f416c;
        case 0x4f4170u: goto label_4f4170;
        case 0x4f4174u: goto label_4f4174;
        case 0x4f4178u: goto label_4f4178;
        case 0x4f417cu: goto label_4f417c;
        case 0x4f4180u: goto label_4f4180;
        case 0x4f4184u: goto label_4f4184;
        case 0x4f4188u: goto label_4f4188;
        case 0x4f418cu: goto label_4f418c;
        case 0x4f4190u: goto label_4f4190;
        case 0x4f4194u: goto label_4f4194;
        case 0x4f4198u: goto label_4f4198;
        case 0x4f419cu: goto label_4f419c;
        case 0x4f41a0u: goto label_4f41a0;
        case 0x4f41a4u: goto label_4f41a4;
        case 0x4f41a8u: goto label_4f41a8;
        case 0x4f41acu: goto label_4f41ac;
        case 0x4f41b0u: goto label_4f41b0;
        case 0x4f41b4u: goto label_4f41b4;
        case 0x4f41b8u: goto label_4f41b8;
        case 0x4f41bcu: goto label_4f41bc;
        case 0x4f41c0u: goto label_4f41c0;
        case 0x4f41c4u: goto label_4f41c4;
        case 0x4f41c8u: goto label_4f41c8;
        case 0x4f41ccu: goto label_4f41cc;
        case 0x4f41d0u: goto label_4f41d0;
        case 0x4f41d4u: goto label_4f41d4;
        case 0x4f41d8u: goto label_4f41d8;
        case 0x4f41dcu: goto label_4f41dc;
        case 0x4f41e0u: goto label_4f41e0;
        case 0x4f41e4u: goto label_4f41e4;
        case 0x4f41e8u: goto label_4f41e8;
        case 0x4f41ecu: goto label_4f41ec;
        case 0x4f41f0u: goto label_4f41f0;
        case 0x4f41f4u: goto label_4f41f4;
        case 0x4f41f8u: goto label_4f41f8;
        case 0x4f41fcu: goto label_4f41fc;
        case 0x4f4200u: goto label_4f4200;
        case 0x4f4204u: goto label_4f4204;
        case 0x4f4208u: goto label_4f4208;
        case 0x4f420cu: goto label_4f420c;
        case 0x4f4210u: goto label_4f4210;
        case 0x4f4214u: goto label_4f4214;
        case 0x4f4218u: goto label_4f4218;
        case 0x4f421cu: goto label_4f421c;
        case 0x4f4220u: goto label_4f4220;
        case 0x4f4224u: goto label_4f4224;
        case 0x4f4228u: goto label_4f4228;
        case 0x4f422cu: goto label_4f422c;
        case 0x4f4230u: goto label_4f4230;
        case 0x4f4234u: goto label_4f4234;
        case 0x4f4238u: goto label_4f4238;
        case 0x4f423cu: goto label_4f423c;
        case 0x4f4240u: goto label_4f4240;
        case 0x4f4244u: goto label_4f4244;
        case 0x4f4248u: goto label_4f4248;
        case 0x4f424cu: goto label_4f424c;
        case 0x4f4250u: goto label_4f4250;
        case 0x4f4254u: goto label_4f4254;
        case 0x4f4258u: goto label_4f4258;
        case 0x4f425cu: goto label_4f425c;
        case 0x4f4260u: goto label_4f4260;
        case 0x4f4264u: goto label_4f4264;
        case 0x4f4268u: goto label_4f4268;
        case 0x4f426cu: goto label_4f426c;
        case 0x4f4270u: goto label_4f4270;
        case 0x4f4274u: goto label_4f4274;
        case 0x4f4278u: goto label_4f4278;
        case 0x4f427cu: goto label_4f427c;
        case 0x4f4280u: goto label_4f4280;
        case 0x4f4284u: goto label_4f4284;
        case 0x4f4288u: goto label_4f4288;
        case 0x4f428cu: goto label_4f428c;
        case 0x4f4290u: goto label_4f4290;
        case 0x4f4294u: goto label_4f4294;
        case 0x4f4298u: goto label_4f4298;
        case 0x4f429cu: goto label_4f429c;
        case 0x4f42a0u: goto label_4f42a0;
        case 0x4f42a4u: goto label_4f42a4;
        case 0x4f42a8u: goto label_4f42a8;
        case 0x4f42acu: goto label_4f42ac;
        case 0x4f42b0u: goto label_4f42b0;
        case 0x4f42b4u: goto label_4f42b4;
        case 0x4f42b8u: goto label_4f42b8;
        case 0x4f42bcu: goto label_4f42bc;
        case 0x4f42c0u: goto label_4f42c0;
        case 0x4f42c4u: goto label_4f42c4;
        case 0x4f42c8u: goto label_4f42c8;
        case 0x4f42ccu: goto label_4f42cc;
        case 0x4f42d0u: goto label_4f42d0;
        case 0x4f42d4u: goto label_4f42d4;
        case 0x4f42d8u: goto label_4f42d8;
        case 0x4f42dcu: goto label_4f42dc;
        case 0x4f42e0u: goto label_4f42e0;
        case 0x4f42e4u: goto label_4f42e4;
        case 0x4f42e8u: goto label_4f42e8;
        case 0x4f42ecu: goto label_4f42ec;
        case 0x4f42f0u: goto label_4f42f0;
        case 0x4f42f4u: goto label_4f42f4;
        case 0x4f42f8u: goto label_4f42f8;
        case 0x4f42fcu: goto label_4f42fc;
        case 0x4f4300u: goto label_4f4300;
        case 0x4f4304u: goto label_4f4304;
        case 0x4f4308u: goto label_4f4308;
        case 0x4f430cu: goto label_4f430c;
        case 0x4f4310u: goto label_4f4310;
        case 0x4f4314u: goto label_4f4314;
        case 0x4f4318u: goto label_4f4318;
        case 0x4f431cu: goto label_4f431c;
        case 0x4f4320u: goto label_4f4320;
        case 0x4f4324u: goto label_4f4324;
        case 0x4f4328u: goto label_4f4328;
        case 0x4f432cu: goto label_4f432c;
        case 0x4f4330u: goto label_4f4330;
        case 0x4f4334u: goto label_4f4334;
        case 0x4f4338u: goto label_4f4338;
        case 0x4f433cu: goto label_4f433c;
        case 0x4f4340u: goto label_4f4340;
        case 0x4f4344u: goto label_4f4344;
        case 0x4f4348u: goto label_4f4348;
        case 0x4f434cu: goto label_4f434c;
        case 0x4f4350u: goto label_4f4350;
        case 0x4f4354u: goto label_4f4354;
        case 0x4f4358u: goto label_4f4358;
        case 0x4f435cu: goto label_4f435c;
        case 0x4f4360u: goto label_4f4360;
        case 0x4f4364u: goto label_4f4364;
        case 0x4f4368u: goto label_4f4368;
        case 0x4f436cu: goto label_4f436c;
        case 0x4f4370u: goto label_4f4370;
        case 0x4f4374u: goto label_4f4374;
        case 0x4f4378u: goto label_4f4378;
        case 0x4f437cu: goto label_4f437c;
        case 0x4f4380u: goto label_4f4380;
        case 0x4f4384u: goto label_4f4384;
        case 0x4f4388u: goto label_4f4388;
        case 0x4f438cu: goto label_4f438c;
        case 0x4f4390u: goto label_4f4390;
        case 0x4f4394u: goto label_4f4394;
        case 0x4f4398u: goto label_4f4398;
        case 0x4f439cu: goto label_4f439c;
        case 0x4f43a0u: goto label_4f43a0;
        case 0x4f43a4u: goto label_4f43a4;
        case 0x4f43a8u: goto label_4f43a8;
        case 0x4f43acu: goto label_4f43ac;
        case 0x4f43b0u: goto label_4f43b0;
        case 0x4f43b4u: goto label_4f43b4;
        case 0x4f43b8u: goto label_4f43b8;
        case 0x4f43bcu: goto label_4f43bc;
        case 0x4f43c0u: goto label_4f43c0;
        case 0x4f43c4u: goto label_4f43c4;
        case 0x4f43c8u: goto label_4f43c8;
        case 0x4f43ccu: goto label_4f43cc;
        case 0x4f43d0u: goto label_4f43d0;
        case 0x4f43d4u: goto label_4f43d4;
        case 0x4f43d8u: goto label_4f43d8;
        case 0x4f43dcu: goto label_4f43dc;
        case 0x4f43e0u: goto label_4f43e0;
        case 0x4f43e4u: goto label_4f43e4;
        case 0x4f43e8u: goto label_4f43e8;
        case 0x4f43ecu: goto label_4f43ec;
        case 0x4f43f0u: goto label_4f43f0;
        case 0x4f43f4u: goto label_4f43f4;
        case 0x4f43f8u: goto label_4f43f8;
        case 0x4f43fcu: goto label_4f43fc;
        case 0x4f4400u: goto label_4f4400;
        case 0x4f4404u: goto label_4f4404;
        case 0x4f4408u: goto label_4f4408;
        case 0x4f440cu: goto label_4f440c;
        case 0x4f4410u: goto label_4f4410;
        case 0x4f4414u: goto label_4f4414;
        case 0x4f4418u: goto label_4f4418;
        case 0x4f441cu: goto label_4f441c;
        case 0x4f4420u: goto label_4f4420;
        case 0x4f4424u: goto label_4f4424;
        case 0x4f4428u: goto label_4f4428;
        case 0x4f442cu: goto label_4f442c;
        case 0x4f4430u: goto label_4f4430;
        case 0x4f4434u: goto label_4f4434;
        case 0x4f4438u: goto label_4f4438;
        case 0x4f443cu: goto label_4f443c;
        default: break;
    }

    ctx->pc = 0x4f4070u;

label_4f4070:
    // 0x4f4070: 0x8c8a0070  lw          $t2, 0x70($a0)
    ctx->pc = 0x4f4070u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4f4074:
    // 0x4f4074: 0x90860091  lbu         $a2, 0x91($a0)
    ctx->pc = 0x4f4074u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 145)));
label_4f4078:
    // 0x4f4078: 0xa182b  sltu        $v1, $zero, $t2
    ctx->pc = 0x4f4078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_4f407c:
    // 0x4f407c: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x4f407cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4f4080:
    // 0x4f4080: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4f4080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_4f4084:
    // 0x4f4084: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_4f4088:
    if (ctx->pc == 0x4F4088u) {
        ctx->pc = 0x4F408Cu;
        goto label_4f408c;
    }
    ctx->pc = 0x4F4084u;
    {
        const bool branch_taken_0x4f4084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4084) {
            ctx->pc = 0x4F40E8u;
            goto label_4f40e8;
        }
    }
    ctx->pc = 0x4F408Cu;
label_4f408c:
    // 0x4f408c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4f408cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f4090:
    // 0x4f4090: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4f4090u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f4094:
    // 0x4f4094: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4f4094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f4098:
    // 0x4f4098: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x4f4098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4f409c:
    // 0x4f409c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4f409cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f40a0:
    // 0x4f40a0: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x4f40a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4f40a4:
    // 0x4f40a4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x4f40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4f40a8:
    // 0x4f40a8: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x4f40a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f40ac:
    // 0x4f40ac: 0x8d230040  lw          $v1, 0x40($t1)
    ctx->pc = 0x4f40acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
label_4f40b0:
    // 0x4f40b0: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_4f40b4:
    if (ctx->pc == 0x4F40B4u) {
        ctx->pc = 0x4F40B8u;
        goto label_4f40b8;
    }
    ctx->pc = 0x4F40B0u;
    {
        const bool branch_taken_0x4f40b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f40b0) {
            ctx->pc = 0x4F40D8u;
            goto label_4f40d8;
        }
    }
    ctx->pc = 0x4F40B8u;
label_4f40b8:
    // 0x4f40b8: 0x8d2300d0  lw          $v1, 0xD0($t1)
    ctx->pc = 0x4f40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 208)));
label_4f40bc:
    // 0x4f40bc: 0x14680006  bne         $v1, $t0, . + 4 + (0x6 << 2)
label_4f40c0:
    if (ctx->pc == 0x4F40C0u) {
        ctx->pc = 0x4F40C4u;
        goto label_4f40c4;
    }
    ctx->pc = 0x4F40BCu;
    {
        const bool branch_taken_0x4f40bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x4f40bc) {
            ctx->pc = 0x4F40D8u;
            goto label_4f40d8;
        }
    }
    ctx->pc = 0x4F40C4u;
label_4f40c4:
    // 0x4f40c4: 0xad2700d0  sw          $a3, 0xD0($t1)
    ctx->pc = 0x4f40c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 208), GPR_U32(ctx, 7));
label_4f40c8:
    // 0x4f40c8: 0xa126004c  sb          $a2, 0x4C($t1)
    ctx->pc = 0x4f40c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 76), (uint8_t)GPR_U32(ctx, 6));
label_4f40cc:
    // 0x4f40cc: 0xc5200038  lwc1        $f0, 0x38($t1)
    ctx->pc = 0x4f40ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f40d0:
    // 0x4f40d0: 0xe52000d4  swc1        $f0, 0xD4($t1)
    ctx->pc = 0x4f40d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 212), bits); }
label_4f40d4:
    // 0x4f40d4: 0x0  nop
    ctx->pc = 0x4f40d4u;
    // NOP
label_4f40d8:
    // 0x4f40d8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4f40d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_4f40dc:
    // 0x4f40dc: 0x18a182b  sltu        $v1, $t4, $t2
    ctx->pc = 0x4f40dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_4f40e0:
    // 0x4f40e0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_4f40e4:
    if (ctx->pc == 0x4F40E4u) {
        ctx->pc = 0x4F40E4u;
            // 0x4f40e4: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->pc = 0x4F40E8u;
        goto label_4f40e8;
    }
    ctx->pc = 0x4F40E0u;
    {
        const bool branch_taken_0x4f40e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F40E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F40E0u;
            // 0x4f40e4: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f40e0) {
            ctx->pc = 0x4F40A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f40a0;
        }
    }
    ctx->pc = 0x4F40E8u;
label_4f40e8:
    // 0x4f40e8: 0x3e00008  jr          $ra
label_4f40ec:
    if (ctx->pc == 0x4F40ECu) {
        ctx->pc = 0x4F40F0u;
        goto label_4f40f0;
    }
    ctx->pc = 0x4F40E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F40F0u;
label_4f40f0:
    // 0x4f40f0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x4f40f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_4f40f4:
    // 0x4f40f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4f40f8:
    // 0x4f40f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4f40f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4f40fc:
    // 0x4f40fc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4f40fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4f4100:
    // 0x4f4100: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4f4100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4f4104:
    // 0x4f4104: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4f4104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4f4108:
    // 0x4f4108: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4f4108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4f410c:
    // 0x4f410c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4f410cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4f4110:
    // 0x4f4110: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f4110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4f4114:
    // 0x4f4114: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f4114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4f4118:
    // 0x4f4118: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f4118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f411c:
    // 0x4f411c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f4120:
    // 0x4f4120: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4f4120u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4f4124:
    // 0x4f4124: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4f4124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4f4128:
    // 0x4f4128: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4f4128u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4f412c:
    // 0x4f412c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4f412cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f4130:
    // 0x4f4130: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4f4134:
    if (ctx->pc == 0x4F4134u) {
        ctx->pc = 0x4F4134u;
            // 0x4f4134: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4138u;
        goto label_4f4138;
    }
    ctx->pc = 0x4F4130u;
    {
        const bool branch_taken_0x4f4130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4F4134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4130u;
            // 0x4f4134: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4130) {
            ctx->pc = 0x4F4174u;
            goto label_4f4174;
        }
    }
    ctx->pc = 0x4F4138u;
label_4f4138:
    // 0x4f4138: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4f4138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f413c:
    // 0x4f413c: 0x50a300b2  beql        $a1, $v1, . + 4 + (0xB2 << 2)
label_4f4140:
    if (ctx->pc == 0x4F4140u) {
        ctx->pc = 0x4F4140u;
            // 0x4f4140: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4F4144u;
        goto label_4f4144;
    }
    ctx->pc = 0x4F413Cu;
    {
        const bool branch_taken_0x4f413c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f413c) {
            ctx->pc = 0x4F4140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F413Cu;
            // 0x4f4140: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4408u;
            goto label_4f4408;
        }
    }
    ctx->pc = 0x4F4144u;
label_4f4144:
    // 0x4f4144: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4f4144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f4148:
    // 0x4f4148: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4f414c:
    if (ctx->pc == 0x4F414Cu) {
        ctx->pc = 0x4F414Cu;
            // 0x4f414c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4F4150u;
        goto label_4f4150;
    }
    ctx->pc = 0x4F4148u;
    {
        const bool branch_taken_0x4f4148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f4148) {
            ctx->pc = 0x4F414Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4148u;
            // 0x4f414c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F4158u;
            goto label_4f4158;
        }
    }
    ctx->pc = 0x4F4150u;
label_4f4150:
    // 0x4f4150: 0x100000ac  b           . + 4 + (0xAC << 2)
label_4f4154:
    if (ctx->pc == 0x4F4154u) {
        ctx->pc = 0x4F4158u;
        goto label_4f4158;
    }
    ctx->pc = 0x4F4150u;
    {
        const bool branch_taken_0x4f4150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4150) {
            ctx->pc = 0x4F4404u;
            goto label_4f4404;
        }
    }
    ctx->pc = 0x4F4158u;
label_4f4158:
    // 0x4f4158: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4f4158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4f415c:
    // 0x4f415c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4f415cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4f4160:
    // 0x4f4160: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4f4160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4f4164:
    // 0x4f4164: 0x320f809  jalr        $t9
label_4f4168:
    if (ctx->pc == 0x4F4168u) {
        ctx->pc = 0x4F4168u;
            // 0x4f4168: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4F416Cu;
        goto label_4f416c;
    }
    ctx->pc = 0x4F4164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F416Cu);
        ctx->pc = 0x4F4168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4164u;
            // 0x4f4168: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F416Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F416Cu; }
            if (ctx->pc != 0x4F416Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4F416Cu;
label_4f416c:
    // 0x4f416c: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_4f4170:
    if (ctx->pc == 0x4F4170u) {
        ctx->pc = 0x4F4174u;
        goto label_4f4174;
    }
    ctx->pc = 0x4F416Cu;
    {
        const bool branch_taken_0x4f416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f416c) {
            ctx->pc = 0x4F4404u;
            goto label_4f4404;
        }
    }
    ctx->pc = 0x4F4174u;
label_4f4174:
    // 0x4f4174: 0x92a30091  lbu         $v1, 0x91($s5)
    ctx->pc = 0x4f4174u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 145)));
label_4f4178:
    // 0x4f4178: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
label_4f417c:
    if (ctx->pc == 0x4F417Cu) {
        ctx->pc = 0x4F417Cu;
            // 0x4f417c: 0x8eb70070  lw          $s7, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->pc = 0x4F4180u;
        goto label_4f4180;
    }
    ctx->pc = 0x4F4178u;
    {
        const bool branch_taken_0x4f4178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F417Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4178u;
            // 0x4f417c: 0x8eb70070  lw          $s7, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4178) {
            ctx->pc = 0x4F4404u;
            goto label_4f4404;
        }
    }
    ctx->pc = 0x4F4180u;
label_4f4180:
    // 0x4f4180: 0x12e000a0  beqz        $s7, . + 4 + (0xA0 << 2)
label_4f4184:
    if (ctx->pc == 0x4F4184u) {
        ctx->pc = 0x4F4188u;
        goto label_4f4188;
    }
    ctx->pc = 0x4F4180u;
    {
        const bool branch_taken_0x4f4180 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4180) {
            ctx->pc = 0x4F4404u;
            goto label_4f4404;
        }
    }
    ctx->pc = 0x4F4188u;
label_4f4188:
    // 0x4f4188: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f4188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4f418c:
    // 0x4f418c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f4190:
    // 0x4f4190: 0x8c656ed0  lw          $a1, 0x6ED0($v1)
    ctx->pc = 0x4f4190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28368)));
label_4f4194:
    // 0x4f4194: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x4f4194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_4f4198:
    // 0x4f4198: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x4f4198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4f419c:
    // 0x4f419c: 0x8c84d130  lw          $a0, -0x2ED0($a0)
    ctx->pc = 0x4f419cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_4f41a0:
    // 0x4f41a0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4f41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4f41a4:
    // 0x4f41a4: 0x24b10084  addiu       $s1, $a1, 0x84
    ctx->pc = 0x4f41a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
label_4f41a8:
    // 0x4f41a8: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4f41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4f41ac:
    // 0x4f41ac: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x4f41acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_4f41b0:
    // 0x4f41b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f41b4:
    // 0x4f41b4: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x4f41b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4f41b8:
    // 0x4f41b8: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x4f41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4f41bc:
    // 0x4f41bc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4f41bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4f41c0:
    // 0x4f41c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4f41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f41c4:
    // 0x4f41c4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4f41c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_4f41c8:
    // 0x4f41c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f41c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f41cc:
    // 0x4f41cc: 0x92a20090  lbu         $v0, 0x90($s5)
    ctx->pc = 0x4f41ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_4f41d0:
    // 0x4f41d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4f41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f41d4:
    // 0x4f41d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4f41d8:
    if (ctx->pc == 0x4F41D8u) {
        ctx->pc = 0x4F41D8u;
            // 0x4f41d8: 0x247e0010  addiu       $fp, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x4F41DCu;
        goto label_4f41dc;
    }
    ctx->pc = 0x4F41D4u;
    {
        const bool branch_taken_0x4f41d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F41D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F41D4u;
            // 0x4f41d8: 0x247e0010  addiu       $fp, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f41d4) {
            ctx->pc = 0x4F41F4u;
            goto label_4f41f4;
        }
    }
    ctx->pc = 0x4F41DCu;
label_4f41dc:
    // 0x4f41dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f41e0:
    // 0x4f41e0: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x4f41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_4f41e4:
    // 0x4f41e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f41e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f41e8:
    // 0x4f41e8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x4f41e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_4f41ec:
    // 0x4f41ec: 0x320f809  jalr        $t9
label_4f41f0:
    if (ctx->pc == 0x4F41F0u) {
        ctx->pc = 0x4F41F4u;
        goto label_4f41f4;
    }
    ctx->pc = 0x4F41ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F41F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F41F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F41F4u; }
            if (ctx->pc != 0x4F41F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4F41F4u;
label_4f41f4:
    // 0x4f41f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f41f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f41f8:
    // 0x4f41f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f41fc:
    // 0x4f41fc: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4f41fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4f4200:
    // 0x4f4200: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4f4200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4f4204:
    // 0x4f4204: 0xc04e738  jal         func_139CE0
label_4f4208:
    if (ctx->pc == 0x4F4208u) {
        ctx->pc = 0x4F4208u;
            // 0x4f4208: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x4F420Cu;
        goto label_4f420c;
    }
    ctx->pc = 0x4F4204u;
    SET_GPR_U32(ctx, 31, 0x4F420Cu);
    ctx->pc = 0x4F4208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4204u;
            // 0x4f4208: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F420Cu; }
        if (ctx->pc != 0x4F420Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F420Cu; }
        if (ctx->pc != 0x4F420Cu) { return; }
    }
    ctx->pc = 0x4F420Cu;
label_4f420c:
    // 0x4f420c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4f420cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4f4210:
    // 0x4f4210: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4f4210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f4214:
    // 0x4f4214: 0xc45489f0  lwc1        $f20, -0x7610($v0)
    ctx->pc = 0x4f4214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f4218:
    // 0x4f4218: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4f4218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f421c:
    // 0x4f421c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x4f421cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4f4220:
    // 0x4f4220: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x4f4220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_4f4224:
    // 0x4f4224: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4f4224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4f4228:
    // 0x4f4228: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x4f4228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_4f422c:
    // 0x4f422c: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x4f422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4f4230:
    // 0x4f4230: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4f4230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4f4234:
    // 0x4f4234: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x4f4234u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f4238:
    // 0x4f4238: 0xc0d639c  jal         func_358E70
label_4f423c:
    if (ctx->pc == 0x4F423Cu) {
        ctx->pc = 0x4F423Cu;
            // 0x4f423c: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x4F4240u;
        goto label_4f4240;
    }
    ctx->pc = 0x4F4238u;
    SET_GPR_U32(ctx, 31, 0x4F4240u);
    ctx->pc = 0x4F423Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4238u;
            // 0x4f423c: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4240u; }
        if (ctx->pc != 0x4F4240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4240u; }
        if (ctx->pc != 0x4F4240u) { return; }
    }
    ctx->pc = 0x4F4240u;
label_4f4240:
    // 0x4f4240: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_4f4244:
    if (ctx->pc == 0x4F4244u) {
        ctx->pc = 0x4F4248u;
        goto label_4f4248;
    }
    ctx->pc = 0x4F4240u;
    {
        const bool branch_taken_0x4f4240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4240) {
            ctx->pc = 0x4F43A0u;
            goto label_4f43a0;
        }
    }
    ctx->pc = 0x4F4248u;
label_4f4248:
    // 0x4f4248: 0xc0d1c14  jal         func_347050
label_4f424c:
    if (ctx->pc == 0x4F424Cu) {
        ctx->pc = 0x4F424Cu;
            // 0x4f424c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4250u;
        goto label_4f4250;
    }
    ctx->pc = 0x4F4248u;
    SET_GPR_U32(ctx, 31, 0x4F4250u);
    ctx->pc = 0x4F424Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4248u;
            // 0x4f424c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4250u; }
        if (ctx->pc != 0x4F4250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4250u; }
        if (ctx->pc != 0x4F4250u) { return; }
    }
    ctx->pc = 0x4F4250u;
label_4f4250:
    // 0x4f4250: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f4250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f4254:
    // 0x4f4254: 0xc04f278  jal         func_13C9E0
label_4f4258:
    if (ctx->pc == 0x4F4258u) {
        ctx->pc = 0x4F4258u;
            // 0x4f4258: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4F425Cu;
        goto label_4f425c;
    }
    ctx->pc = 0x4F4254u;
    SET_GPR_U32(ctx, 31, 0x4F425Cu);
    ctx->pc = 0x4F4258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4254u;
            // 0x4f4258: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F425Cu; }
        if (ctx->pc != 0x4F425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F425Cu; }
        if (ctx->pc != 0x4F425Cu) { return; }
    }
    ctx->pc = 0x4F425Cu;
label_4f425c:
    // 0x4f425c: 0xc0d1c10  jal         func_347040
label_4f4260:
    if (ctx->pc == 0x4F4260u) {
        ctx->pc = 0x4F4260u;
            // 0x4f4260: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4264u;
        goto label_4f4264;
    }
    ctx->pc = 0x4F425Cu;
    SET_GPR_U32(ctx, 31, 0x4F4264u);
    ctx->pc = 0x4F4260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F425Cu;
            // 0x4f4260: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4264u; }
        if (ctx->pc != 0x4F4264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4264u; }
        if (ctx->pc != 0x4F4264u) { return; }
    }
    ctx->pc = 0x4F4264u;
label_4f4264:
    // 0x4f4264: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f4264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f4268:
    // 0x4f4268: 0xc04ce80  jal         func_133A00
label_4f426c:
    if (ctx->pc == 0x4F426Cu) {
        ctx->pc = 0x4F426Cu;
            // 0x4f426c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4F4270u;
        goto label_4f4270;
    }
    ctx->pc = 0x4F4268u;
    SET_GPR_U32(ctx, 31, 0x4F4270u);
    ctx->pc = 0x4F426Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4268u;
            // 0x4f426c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4270u; }
        if (ctx->pc != 0x4F4270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4270u; }
        if (ctx->pc != 0x4F4270u) { return; }
    }
    ctx->pc = 0x4F4270u;
label_4f4270:
    // 0x4f4270: 0x8e640134  lw          $a0, 0x134($s3)
    ctx->pc = 0x4f4270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
label_4f4274:
    // 0x4f4274: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4f4278:
    if (ctx->pc == 0x4F4278u) {
        ctx->pc = 0x4F427Cu;
        goto label_4f427c;
    }
    ctx->pc = 0x4F4274u;
    {
        const bool branch_taken_0x4f4274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f4274) {
            ctx->pc = 0x4F4288u;
            goto label_4f4288;
        }
    }
    ctx->pc = 0x4F427Cu;
label_4f427c:
    // 0x4f427c: 0xc10bb24  jal         func_42EC90
label_4f4280:
    if (ctx->pc == 0x4F4280u) {
        ctx->pc = 0x4F4280u;
            // 0x4f4280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4284u;
        goto label_4f4284;
    }
    ctx->pc = 0x4F427Cu;
    SET_GPR_U32(ctx, 31, 0x4F4284u);
    ctx->pc = 0x4F4280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F427Cu;
            // 0x4f4280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42EC90u;
    if (runtime->hasFunction(0x42EC90u)) {
        auto targetFn = runtime->lookupFunction(0x42EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4284u; }
        if (ctx->pc != 0x4F4284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042EC90_0x42ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4284u; }
        if (ctx->pc != 0x4F4284u) { return; }
    }
    ctx->pc = 0x4F4284u;
label_4f4284:
    // 0x4f4284: 0x0  nop
    ctx->pc = 0x4f4284u;
    // NOP
label_4f4288:
    // 0x4f4288: 0xc0d4108  jal         func_350420
label_4f428c:
    if (ctx->pc == 0x4F428Cu) {
        ctx->pc = 0x4F4290u;
        goto label_4f4290;
    }
    ctx->pc = 0x4F4288u;
    SET_GPR_U32(ctx, 31, 0x4F4290u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4290u; }
        if (ctx->pc != 0x4F4290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4290u; }
        if (ctx->pc != 0x4F4290u) { return; }
    }
    ctx->pc = 0x4F4290u;
label_4f4290:
    // 0x4f4290: 0xc0b36b4  jal         func_2CDAD0
label_4f4294:
    if (ctx->pc == 0x4F4294u) {
        ctx->pc = 0x4F4294u;
            // 0x4f4294: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4298u;
        goto label_4f4298;
    }
    ctx->pc = 0x4F4290u;
    SET_GPR_U32(ctx, 31, 0x4F4298u);
    ctx->pc = 0x4F4294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4290u;
            // 0x4f4294: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4298u; }
        if (ctx->pc != 0x4F4298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4298u; }
        if (ctx->pc != 0x4F4298u) { return; }
    }
    ctx->pc = 0x4F4298u;
label_4f4298:
    // 0x4f4298: 0xc0b9c64  jal         func_2E7190
label_4f429c:
    if (ctx->pc == 0x4F429Cu) {
        ctx->pc = 0x4F429Cu;
            // 0x4f429c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F42A0u;
        goto label_4f42a0;
    }
    ctx->pc = 0x4F4298u;
    SET_GPR_U32(ctx, 31, 0x4F42A0u);
    ctx->pc = 0x4F429Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4298u;
            // 0x4f429c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F42A0u; }
        if (ctx->pc != 0x4F42A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F42A0u; }
        if (ctx->pc != 0x4F42A0u) { return; }
    }
    ctx->pc = 0x4F42A0u;
label_4f42a0:
    // 0x4f42a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4f42a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f42a4:
    // 0x4f42a4: 0xc0d4104  jal         func_350410
label_4f42a8:
    if (ctx->pc == 0x4F42A8u) {
        ctx->pc = 0x4F42A8u;
            // 0x4f42a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F42ACu;
        goto label_4f42ac;
    }
    ctx->pc = 0x4F42A4u;
    SET_GPR_U32(ctx, 31, 0x4F42ACu);
    ctx->pc = 0x4F42A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F42A4u;
            // 0x4f42a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F42ACu; }
        if (ctx->pc != 0x4F42ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F42ACu; }
        if (ctx->pc != 0x4F42ACu) { return; }
    }
    ctx->pc = 0x4F42ACu;
label_4f42ac:
    // 0x4f42ac: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4f42acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f42b0:
    // 0x4f42b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f42b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f42b4:
    // 0x4f42b4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4f42b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f42b8:
    // 0x4f42b8: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x4f42b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4f42bc:
    // 0x4f42bc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4f42bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f42c0:
    // 0x4f42c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4f42c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f42c4:
    // 0x4f42c4: 0xc0d40ac  jal         func_3502B0
label_4f42c8:
    if (ctx->pc == 0x4F42C8u) {
        ctx->pc = 0x4F42C8u;
            // 0x4f42c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4F42CCu;
        goto label_4f42cc;
    }
    ctx->pc = 0x4F42C4u;
    SET_GPR_U32(ctx, 31, 0x4F42CCu);
    ctx->pc = 0x4F42C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F42C4u;
            // 0x4f42c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F42CCu; }
        if (ctx->pc != 0x4F42CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F42CCu; }
        if (ctx->pc != 0x4F42CCu) { return; }
    }
    ctx->pc = 0x4F42CCu;
label_4f42cc:
    // 0x4f42cc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4f42ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4f42d0:
    // 0x4f42d0: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_4f42d4:
    if (ctx->pc == 0x4F42D4u) {
        ctx->pc = 0x4F42D4u;
            // 0x4f42d4: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4F42D8u;
        goto label_4f42d8;
    }
    ctx->pc = 0x4F42D0u;
    {
        const bool branch_taken_0x4f42d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F42D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F42D0u;
            // 0x4f42d4: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f42d0) {
            ctx->pc = 0x4F43A0u;
            goto label_4f43a0;
        }
    }
    ctx->pc = 0x4F42D8u;
label_4f42d8:
    // 0x4f42d8: 0x8e640134  lw          $a0, 0x134($s3)
    ctx->pc = 0x4f42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
label_4f42dc:
    // 0x4f42dc: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_4f42e0:
    if (ctx->pc == 0x4F42E0u) {
        ctx->pc = 0x4F42E4u;
        goto label_4f42e4;
    }
    ctx->pc = 0x4F42DCu;
    {
        const bool branch_taken_0x4f42dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f42dc) {
            ctx->pc = 0x4F4348u;
            goto label_4f4348;
        }
    }
    ctx->pc = 0x4F42E4u;
label_4f42e4:
    // 0x4f42e4: 0xc10bb24  jal         func_42EC90
label_4f42e8:
    if (ctx->pc == 0x4F42E8u) {
        ctx->pc = 0x4F42E8u;
            // 0x4f42e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F42ECu;
        goto label_4f42ec;
    }
    ctx->pc = 0x4F42E4u;
    SET_GPR_U32(ctx, 31, 0x4F42ECu);
    ctx->pc = 0x4F42E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F42E4u;
            // 0x4f42e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42EC90u;
    if (runtime->hasFunction(0x42EC90u)) {
        auto targetFn = runtime->lookupFunction(0x42EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F42ECu; }
        if (ctx->pc != 0x4F42ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042EC90_0x42ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F42ECu; }
        if (ctx->pc != 0x4F42ECu) { return; }
    }
    ctx->pc = 0x4F42ECu;
label_4f42ec:
    // 0x4f42ec: 0xc0d1c14  jal         func_347050
label_4f42f0:
    if (ctx->pc == 0x4F42F0u) {
        ctx->pc = 0x4F42F0u;
            // 0x4f42f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F42F4u;
        goto label_4f42f4;
    }
    ctx->pc = 0x4F42ECu;
    SET_GPR_U32(ctx, 31, 0x4F42F4u);
    ctx->pc = 0x4F42F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F42ECu;
            // 0x4f42f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F42F4u; }
        if (ctx->pc != 0x4F42F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F42F4u; }
        if (ctx->pc != 0x4F42F4u) { return; }
    }
    ctx->pc = 0x4F42F4u;
label_4f42f4:
    // 0x4f42f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f42f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f42f8:
    // 0x4f42f8: 0xc04f278  jal         func_13C9E0
label_4f42fc:
    if (ctx->pc == 0x4F42FCu) {
        ctx->pc = 0x4F42FCu;
            // 0x4f42fc: 0x266400e0  addiu       $a0, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->pc = 0x4F4300u;
        goto label_4f4300;
    }
    ctx->pc = 0x4F42F8u;
    SET_GPR_U32(ctx, 31, 0x4F4300u);
    ctx->pc = 0x4F42FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F42F8u;
            // 0x4f42fc: 0x266400e0  addiu       $a0, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4300u; }
        if (ctx->pc != 0x4F4300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4300u; }
        if (ctx->pc != 0x4F4300u) { return; }
    }
    ctx->pc = 0x4F4300u;
label_4f4300:
    // 0x4f4300: 0x266400e0  addiu       $a0, $s3, 0xE0
    ctx->pc = 0x4f4300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_4f4304:
    // 0x4f4304: 0x2406eaab  addiu       $a2, $zero, -0x1555
    ctx->pc = 0x4f4304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961835));
label_4f4308:
    // 0x4f4308: 0xc04cdb0  jal         func_1336C0
label_4f430c:
    if (ctx->pc == 0x4F430Cu) {
        ctx->pc = 0x4F430Cu;
            // 0x4f430c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4310u;
        goto label_4f4310;
    }
    ctx->pc = 0x4F4308u;
    SET_GPR_U32(ctx, 31, 0x4F4310u);
    ctx->pc = 0x4F430Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4308u;
            // 0x4f430c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4310u; }
        if (ctx->pc != 0x4F4310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4310u; }
        if (ctx->pc != 0x4F4310u) { return; }
    }
    ctx->pc = 0x4F4310u;
label_4f4310:
    // 0x4f4310: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4f4310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_4f4314:
    // 0x4f4314: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x4f4314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_4f4318:
    // 0x4f4318: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4f4318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4f431c:
    // 0x4f431c: 0x266400e0  addiu       $a0, $s3, 0xE0
    ctx->pc = 0x4f431cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_4f4320:
    // 0x4f4320: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4f4320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4f4324:
    // 0x4f4324: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4f4324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4328:
    // 0x4f4328: 0xc04ce50  jal         func_133940
label_4f432c:
    if (ctx->pc == 0x4F432Cu) {
        ctx->pc = 0x4F432Cu;
            // 0x4f432c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4F4330u;
        goto label_4f4330;
    }
    ctx->pc = 0x4F4328u;
    SET_GPR_U32(ctx, 31, 0x4F4330u);
    ctx->pc = 0x4F432Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4328u;
            // 0x4f432c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4330u; }
        if (ctx->pc != 0x4F4330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4330u; }
        if (ctx->pc != 0x4F4330u) { return; }
    }
    ctx->pc = 0x4F4330u;
label_4f4330:
    // 0x4f4330: 0xc0d1c10  jal         func_347040
label_4f4334:
    if (ctx->pc == 0x4F4334u) {
        ctx->pc = 0x4F4334u;
            // 0x4f4334: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F4338u;
        goto label_4f4338;
    }
    ctx->pc = 0x4F4330u;
    SET_GPR_U32(ctx, 31, 0x4F4338u);
    ctx->pc = 0x4F4334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4330u;
            // 0x4f4334: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4338u; }
        if (ctx->pc != 0x4F4338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4338u; }
        if (ctx->pc != 0x4F4338u) { return; }
    }
    ctx->pc = 0x4F4338u;
label_4f4338:
    // 0x4f4338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f4338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f433c:
    // 0x4f433c: 0xc04ce80  jal         func_133A00
label_4f4340:
    if (ctx->pc == 0x4F4340u) {
        ctx->pc = 0x4F4340u;
            // 0x4f4340: 0x266400e0  addiu       $a0, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->pc = 0x4F4344u;
        goto label_4f4344;
    }
    ctx->pc = 0x4F433Cu;
    SET_GPR_U32(ctx, 31, 0x4F4344u);
    ctx->pc = 0x4F4340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F433Cu;
            // 0x4f4340: 0x266400e0  addiu       $a0, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4344u; }
        if (ctx->pc != 0x4F4344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4344u; }
        if (ctx->pc != 0x4F4344u) { return; }
    }
    ctx->pc = 0x4F4344u;
label_4f4344:
    // 0x4f4344: 0x0  nop
    ctx->pc = 0x4f4344u;
    // NOP
label_4f4348:
    // 0x4f4348: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4f4348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f434c:
    // 0x4f434c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x4f434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4f4350:
    // 0x4f4350: 0xc13d110  jal         func_4F4440
label_4f4354:
    if (ctx->pc == 0x4F4354u) {
        ctx->pc = 0x4F4354u;
            // 0x4f4354: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x4F4358u;
        goto label_4f4358;
    }
    ctx->pc = 0x4F4350u;
    SET_GPR_U32(ctx, 31, 0x4F4358u);
    ctx->pc = 0x4F4354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4350u;
            // 0x4f4354: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F4440u;
    if (runtime->hasFunction(0x4F4440u)) {
        auto targetFn = runtime->lookupFunction(0x4F4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4358u; }
        if (ctx->pc != 0x4F4358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F4440_0x4f4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F4358u; }
        if (ctx->pc != 0x4F4358u) { return; }
    }
    ctx->pc = 0x4F4358u;
label_4f4358:
    // 0x4f4358: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f4358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f435c:
    // 0x4f435c: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x4f435cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_4f4360:
    // 0x4f4360: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4f4360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4f4364:
    // 0x4f4364: 0xc04e4a4  jal         func_139290
label_4f4368:
    if (ctx->pc == 0x4F4368u) {
        ctx->pc = 0x4F4368u;
            // 0x4f4368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F436Cu;
        goto label_4f436c;
    }
    ctx->pc = 0x4F4364u;
    SET_GPR_U32(ctx, 31, 0x4F436Cu);
    ctx->pc = 0x4F4368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4364u;
            // 0x4f4368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F436Cu; }
        if (ctx->pc != 0x4F436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F436Cu; }
        if (ctx->pc != 0x4F436Cu) { return; }
    }
    ctx->pc = 0x4F436Cu;
label_4f436c:
    // 0x4f436c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x4f436cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4f4370:
    // 0x4f4370: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4f4370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4f4374:
    // 0x4f4374: 0xc04cd60  jal         func_133580
label_4f4378:
    if (ctx->pc == 0x4F4378u) {
        ctx->pc = 0x4F4378u;
            // 0x4f4378: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4F437Cu;
        goto label_4f437c;
    }
    ctx->pc = 0x4F4374u;
    SET_GPR_U32(ctx, 31, 0x4F437Cu);
    ctx->pc = 0x4F4378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4374u;
            // 0x4f4378: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F437Cu; }
        if (ctx->pc != 0x4F437Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F437Cu; }
        if (ctx->pc != 0x4F437Cu) { return; }
    }
    ctx->pc = 0x4F437Cu;
label_4f437c:
    // 0x4f437c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4f437cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4f4380:
    // 0x4f4380: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4f4380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4f4384:
    // 0x4f4384: 0x320f809  jalr        $t9
label_4f4388:
    if (ctx->pc == 0x4F4388u) {
        ctx->pc = 0x4F4388u;
            // 0x4f4388: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F438Cu;
        goto label_4f438c;
    }
    ctx->pc = 0x4F4384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F438Cu);
        ctx->pc = 0x4F4388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4384u;
            // 0x4f4388: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F438Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F438Cu; }
            if (ctx->pc != 0x4F438Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4F438Cu;
label_4f438c:
    // 0x4f438c: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x4f438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_4f4390:
    // 0x4f4390: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4f4390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f4394:
    // 0x4f4394: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x4f4394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4f4398:
    // 0x4f4398: 0xc054fd4  jal         func_153F50
label_4f439c:
    if (ctx->pc == 0x4F439Cu) {
        ctx->pc = 0x4F439Cu;
            // 0x4f439c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F43A0u;
        goto label_4f43a0;
    }
    ctx->pc = 0x4F4398u;
    SET_GPR_U32(ctx, 31, 0x4F43A0u);
    ctx->pc = 0x4F439Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4398u;
            // 0x4f439c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F43A0u; }
        if (ctx->pc != 0x4F43A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F43A0u; }
        if (ctx->pc != 0x4F43A0u) { return; }
    }
    ctx->pc = 0x4F43A0u;
label_4f43a0:
    // 0x4f43a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4f43a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4f43a4:
    // 0x4f43a4: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x4f43a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4f43a8:
    // 0x4f43a8: 0x1460ff9c  bnez        $v1, . + 4 + (-0x64 << 2)
label_4f43ac:
    if (ctx->pc == 0x4F43ACu) {
        ctx->pc = 0x4F43ACu;
            // 0x4f43ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4F43B0u;
        goto label_4f43b0;
    }
    ctx->pc = 0x4F43A8u;
    {
        const bool branch_taken_0x4f43a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F43ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F43A8u;
            // 0x4f43ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f43a8) {
            ctx->pc = 0x4F421Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f421c;
        }
    }
    ctx->pc = 0x4F43B0u;
label_4f43b0:
    // 0x4f43b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f43b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f43b4:
    // 0x4f43b4: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4f43b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4f43b8:
    // 0x4f43b8: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4f43bc:
    if (ctx->pc == 0x4F43BCu) {
        ctx->pc = 0x4F43BCu;
            // 0x4f43bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4F43C0u;
        goto label_4f43c0;
    }
    ctx->pc = 0x4F43B8u;
    {
        const bool branch_taken_0x4f43b8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4F43BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F43B8u;
            // 0x4f43bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f43b8) {
            ctx->pc = 0x4F43E0u;
            goto label_4f43e0;
        }
    }
    ctx->pc = 0x4F43C0u;
label_4f43c0:
    // 0x4f43c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f43c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f43c4:
    // 0x4f43c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f43c8:
    // 0x4f43c8: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4f43c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4f43cc:
    // 0x4f43cc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4f43ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4f43d0:
    // 0x4f43d0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4f43d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4f43d4:
    // 0x4f43d4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x4f43d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4f43d8:
    // 0x4f43d8: 0xc055ea8  jal         func_157AA0
label_4f43dc:
    if (ctx->pc == 0x4F43DCu) {
        ctx->pc = 0x4F43DCu;
            // 0x4f43dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F43E0u;
        goto label_4f43e0;
    }
    ctx->pc = 0x4F43D8u;
    SET_GPR_U32(ctx, 31, 0x4F43E0u);
    ctx->pc = 0x4F43DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F43D8u;
            // 0x4f43dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F43E0u; }
        if (ctx->pc != 0x4F43E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F43E0u; }
        if (ctx->pc != 0x4F43E0u) { return; }
    }
    ctx->pc = 0x4F43E0u;
label_4f43e0:
    // 0x4f43e0: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x4f43e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_4f43e4:
    // 0x4f43e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_4f43e8:
    if (ctx->pc == 0x4F43E8u) {
        ctx->pc = 0x4F43ECu;
        goto label_4f43ec;
    }
    ctx->pc = 0x4F43E4u;
    {
        const bool branch_taken_0x4f43e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f43e4) {
            ctx->pc = 0x4F4404u;
            goto label_4f4404;
        }
    }
    ctx->pc = 0x4F43ECu;
label_4f43ec:
    // 0x4f43ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f43f0:
    // 0x4f43f0: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x4f43f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_4f43f4:
    // 0x4f43f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4f43f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f43f8:
    // 0x4f43f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4f43f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4f43fc:
    // 0x4f43fc: 0x320f809  jalr        $t9
label_4f4400:
    if (ctx->pc == 0x4F4400u) {
        ctx->pc = 0x4F4404u;
        goto label_4f4404;
    }
    ctx->pc = 0x4F43FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F4404u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F4404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F4404u; }
            if (ctx->pc != 0x4F4404u) { return; }
        }
        }
    }
    ctx->pc = 0x4F4404u;
label_4f4404:
    // 0x4f4404: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4f4404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4f4408:
    // 0x4f4408: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4f4408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f440c:
    // 0x4f440c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4f440cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4f4410:
    // 0x4f4410: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4f4410u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f4414:
    // 0x4f4414: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4f4414u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f4418:
    // 0x4f4418: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4f4418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f441c:
    // 0x4f441c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4f441cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f4420:
    // 0x4f4420: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4f4420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f4424:
    // 0x4f4424: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f4424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4428:
    // 0x4f4428: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f4428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f442c:
    // 0x4f442c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f442cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4430:
    // 0x4f4430: 0x3e00008  jr          $ra
label_4f4434:
    if (ctx->pc == 0x4F4434u) {
        ctx->pc = 0x4F4434u;
            // 0x4f4434: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4F4438u;
        goto label_4f4438;
    }
    ctx->pc = 0x4F4430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F4430u;
            // 0x4f4434: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F4438u;
label_4f4438:
    // 0x4f4438: 0x0  nop
    ctx->pc = 0x4f4438u;
    // NOP
label_4f443c:
    // 0x4f443c: 0x0  nop
    ctx->pc = 0x4f443cu;
    // NOP
}
