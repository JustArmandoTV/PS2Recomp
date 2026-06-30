#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C3E20
// Address: 0x4c3e20 - 0x4c42e0
void sub_004C3E20_0x4c3e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C3E20_0x4c3e20");
#endif

    switch (ctx->pc) {
        case 0x4c3e20u: goto label_4c3e20;
        case 0x4c3e24u: goto label_4c3e24;
        case 0x4c3e28u: goto label_4c3e28;
        case 0x4c3e2cu: goto label_4c3e2c;
        case 0x4c3e30u: goto label_4c3e30;
        case 0x4c3e34u: goto label_4c3e34;
        case 0x4c3e38u: goto label_4c3e38;
        case 0x4c3e3cu: goto label_4c3e3c;
        case 0x4c3e40u: goto label_4c3e40;
        case 0x4c3e44u: goto label_4c3e44;
        case 0x4c3e48u: goto label_4c3e48;
        case 0x4c3e4cu: goto label_4c3e4c;
        case 0x4c3e50u: goto label_4c3e50;
        case 0x4c3e54u: goto label_4c3e54;
        case 0x4c3e58u: goto label_4c3e58;
        case 0x4c3e5cu: goto label_4c3e5c;
        case 0x4c3e60u: goto label_4c3e60;
        case 0x4c3e64u: goto label_4c3e64;
        case 0x4c3e68u: goto label_4c3e68;
        case 0x4c3e6cu: goto label_4c3e6c;
        case 0x4c3e70u: goto label_4c3e70;
        case 0x4c3e74u: goto label_4c3e74;
        case 0x4c3e78u: goto label_4c3e78;
        case 0x4c3e7cu: goto label_4c3e7c;
        case 0x4c3e80u: goto label_4c3e80;
        case 0x4c3e84u: goto label_4c3e84;
        case 0x4c3e88u: goto label_4c3e88;
        case 0x4c3e8cu: goto label_4c3e8c;
        case 0x4c3e90u: goto label_4c3e90;
        case 0x4c3e94u: goto label_4c3e94;
        case 0x4c3e98u: goto label_4c3e98;
        case 0x4c3e9cu: goto label_4c3e9c;
        case 0x4c3ea0u: goto label_4c3ea0;
        case 0x4c3ea4u: goto label_4c3ea4;
        case 0x4c3ea8u: goto label_4c3ea8;
        case 0x4c3eacu: goto label_4c3eac;
        case 0x4c3eb0u: goto label_4c3eb0;
        case 0x4c3eb4u: goto label_4c3eb4;
        case 0x4c3eb8u: goto label_4c3eb8;
        case 0x4c3ebcu: goto label_4c3ebc;
        case 0x4c3ec0u: goto label_4c3ec0;
        case 0x4c3ec4u: goto label_4c3ec4;
        case 0x4c3ec8u: goto label_4c3ec8;
        case 0x4c3eccu: goto label_4c3ecc;
        case 0x4c3ed0u: goto label_4c3ed0;
        case 0x4c3ed4u: goto label_4c3ed4;
        case 0x4c3ed8u: goto label_4c3ed8;
        case 0x4c3edcu: goto label_4c3edc;
        case 0x4c3ee0u: goto label_4c3ee0;
        case 0x4c3ee4u: goto label_4c3ee4;
        case 0x4c3ee8u: goto label_4c3ee8;
        case 0x4c3eecu: goto label_4c3eec;
        case 0x4c3ef0u: goto label_4c3ef0;
        case 0x4c3ef4u: goto label_4c3ef4;
        case 0x4c3ef8u: goto label_4c3ef8;
        case 0x4c3efcu: goto label_4c3efc;
        case 0x4c3f00u: goto label_4c3f00;
        case 0x4c3f04u: goto label_4c3f04;
        case 0x4c3f08u: goto label_4c3f08;
        case 0x4c3f0cu: goto label_4c3f0c;
        case 0x4c3f10u: goto label_4c3f10;
        case 0x4c3f14u: goto label_4c3f14;
        case 0x4c3f18u: goto label_4c3f18;
        case 0x4c3f1cu: goto label_4c3f1c;
        case 0x4c3f20u: goto label_4c3f20;
        case 0x4c3f24u: goto label_4c3f24;
        case 0x4c3f28u: goto label_4c3f28;
        case 0x4c3f2cu: goto label_4c3f2c;
        case 0x4c3f30u: goto label_4c3f30;
        case 0x4c3f34u: goto label_4c3f34;
        case 0x4c3f38u: goto label_4c3f38;
        case 0x4c3f3cu: goto label_4c3f3c;
        case 0x4c3f40u: goto label_4c3f40;
        case 0x4c3f44u: goto label_4c3f44;
        case 0x4c3f48u: goto label_4c3f48;
        case 0x4c3f4cu: goto label_4c3f4c;
        case 0x4c3f50u: goto label_4c3f50;
        case 0x4c3f54u: goto label_4c3f54;
        case 0x4c3f58u: goto label_4c3f58;
        case 0x4c3f5cu: goto label_4c3f5c;
        case 0x4c3f60u: goto label_4c3f60;
        case 0x4c3f64u: goto label_4c3f64;
        case 0x4c3f68u: goto label_4c3f68;
        case 0x4c3f6cu: goto label_4c3f6c;
        case 0x4c3f70u: goto label_4c3f70;
        case 0x4c3f74u: goto label_4c3f74;
        case 0x4c3f78u: goto label_4c3f78;
        case 0x4c3f7cu: goto label_4c3f7c;
        case 0x4c3f80u: goto label_4c3f80;
        case 0x4c3f84u: goto label_4c3f84;
        case 0x4c3f88u: goto label_4c3f88;
        case 0x4c3f8cu: goto label_4c3f8c;
        case 0x4c3f90u: goto label_4c3f90;
        case 0x4c3f94u: goto label_4c3f94;
        case 0x4c3f98u: goto label_4c3f98;
        case 0x4c3f9cu: goto label_4c3f9c;
        case 0x4c3fa0u: goto label_4c3fa0;
        case 0x4c3fa4u: goto label_4c3fa4;
        case 0x4c3fa8u: goto label_4c3fa8;
        case 0x4c3facu: goto label_4c3fac;
        case 0x4c3fb0u: goto label_4c3fb0;
        case 0x4c3fb4u: goto label_4c3fb4;
        case 0x4c3fb8u: goto label_4c3fb8;
        case 0x4c3fbcu: goto label_4c3fbc;
        case 0x4c3fc0u: goto label_4c3fc0;
        case 0x4c3fc4u: goto label_4c3fc4;
        case 0x4c3fc8u: goto label_4c3fc8;
        case 0x4c3fccu: goto label_4c3fcc;
        case 0x4c3fd0u: goto label_4c3fd0;
        case 0x4c3fd4u: goto label_4c3fd4;
        case 0x4c3fd8u: goto label_4c3fd8;
        case 0x4c3fdcu: goto label_4c3fdc;
        case 0x4c3fe0u: goto label_4c3fe0;
        case 0x4c3fe4u: goto label_4c3fe4;
        case 0x4c3fe8u: goto label_4c3fe8;
        case 0x4c3fecu: goto label_4c3fec;
        case 0x4c3ff0u: goto label_4c3ff0;
        case 0x4c3ff4u: goto label_4c3ff4;
        case 0x4c3ff8u: goto label_4c3ff8;
        case 0x4c3ffcu: goto label_4c3ffc;
        case 0x4c4000u: goto label_4c4000;
        case 0x4c4004u: goto label_4c4004;
        case 0x4c4008u: goto label_4c4008;
        case 0x4c400cu: goto label_4c400c;
        case 0x4c4010u: goto label_4c4010;
        case 0x4c4014u: goto label_4c4014;
        case 0x4c4018u: goto label_4c4018;
        case 0x4c401cu: goto label_4c401c;
        case 0x4c4020u: goto label_4c4020;
        case 0x4c4024u: goto label_4c4024;
        case 0x4c4028u: goto label_4c4028;
        case 0x4c402cu: goto label_4c402c;
        case 0x4c4030u: goto label_4c4030;
        case 0x4c4034u: goto label_4c4034;
        case 0x4c4038u: goto label_4c4038;
        case 0x4c403cu: goto label_4c403c;
        case 0x4c4040u: goto label_4c4040;
        case 0x4c4044u: goto label_4c4044;
        case 0x4c4048u: goto label_4c4048;
        case 0x4c404cu: goto label_4c404c;
        case 0x4c4050u: goto label_4c4050;
        case 0x4c4054u: goto label_4c4054;
        case 0x4c4058u: goto label_4c4058;
        case 0x4c405cu: goto label_4c405c;
        case 0x4c4060u: goto label_4c4060;
        case 0x4c4064u: goto label_4c4064;
        case 0x4c4068u: goto label_4c4068;
        case 0x4c406cu: goto label_4c406c;
        case 0x4c4070u: goto label_4c4070;
        case 0x4c4074u: goto label_4c4074;
        case 0x4c4078u: goto label_4c4078;
        case 0x4c407cu: goto label_4c407c;
        case 0x4c4080u: goto label_4c4080;
        case 0x4c4084u: goto label_4c4084;
        case 0x4c4088u: goto label_4c4088;
        case 0x4c408cu: goto label_4c408c;
        case 0x4c4090u: goto label_4c4090;
        case 0x4c4094u: goto label_4c4094;
        case 0x4c4098u: goto label_4c4098;
        case 0x4c409cu: goto label_4c409c;
        case 0x4c40a0u: goto label_4c40a0;
        case 0x4c40a4u: goto label_4c40a4;
        case 0x4c40a8u: goto label_4c40a8;
        case 0x4c40acu: goto label_4c40ac;
        case 0x4c40b0u: goto label_4c40b0;
        case 0x4c40b4u: goto label_4c40b4;
        case 0x4c40b8u: goto label_4c40b8;
        case 0x4c40bcu: goto label_4c40bc;
        case 0x4c40c0u: goto label_4c40c0;
        case 0x4c40c4u: goto label_4c40c4;
        case 0x4c40c8u: goto label_4c40c8;
        case 0x4c40ccu: goto label_4c40cc;
        case 0x4c40d0u: goto label_4c40d0;
        case 0x4c40d4u: goto label_4c40d4;
        case 0x4c40d8u: goto label_4c40d8;
        case 0x4c40dcu: goto label_4c40dc;
        case 0x4c40e0u: goto label_4c40e0;
        case 0x4c40e4u: goto label_4c40e4;
        case 0x4c40e8u: goto label_4c40e8;
        case 0x4c40ecu: goto label_4c40ec;
        case 0x4c40f0u: goto label_4c40f0;
        case 0x4c40f4u: goto label_4c40f4;
        case 0x4c40f8u: goto label_4c40f8;
        case 0x4c40fcu: goto label_4c40fc;
        case 0x4c4100u: goto label_4c4100;
        case 0x4c4104u: goto label_4c4104;
        case 0x4c4108u: goto label_4c4108;
        case 0x4c410cu: goto label_4c410c;
        case 0x4c4110u: goto label_4c4110;
        case 0x4c4114u: goto label_4c4114;
        case 0x4c4118u: goto label_4c4118;
        case 0x4c411cu: goto label_4c411c;
        case 0x4c4120u: goto label_4c4120;
        case 0x4c4124u: goto label_4c4124;
        case 0x4c4128u: goto label_4c4128;
        case 0x4c412cu: goto label_4c412c;
        case 0x4c4130u: goto label_4c4130;
        case 0x4c4134u: goto label_4c4134;
        case 0x4c4138u: goto label_4c4138;
        case 0x4c413cu: goto label_4c413c;
        case 0x4c4140u: goto label_4c4140;
        case 0x4c4144u: goto label_4c4144;
        case 0x4c4148u: goto label_4c4148;
        case 0x4c414cu: goto label_4c414c;
        case 0x4c4150u: goto label_4c4150;
        case 0x4c4154u: goto label_4c4154;
        case 0x4c4158u: goto label_4c4158;
        case 0x4c415cu: goto label_4c415c;
        case 0x4c4160u: goto label_4c4160;
        case 0x4c4164u: goto label_4c4164;
        case 0x4c4168u: goto label_4c4168;
        case 0x4c416cu: goto label_4c416c;
        case 0x4c4170u: goto label_4c4170;
        case 0x4c4174u: goto label_4c4174;
        case 0x4c4178u: goto label_4c4178;
        case 0x4c417cu: goto label_4c417c;
        case 0x4c4180u: goto label_4c4180;
        case 0x4c4184u: goto label_4c4184;
        case 0x4c4188u: goto label_4c4188;
        case 0x4c418cu: goto label_4c418c;
        case 0x4c4190u: goto label_4c4190;
        case 0x4c4194u: goto label_4c4194;
        case 0x4c4198u: goto label_4c4198;
        case 0x4c419cu: goto label_4c419c;
        case 0x4c41a0u: goto label_4c41a0;
        case 0x4c41a4u: goto label_4c41a4;
        case 0x4c41a8u: goto label_4c41a8;
        case 0x4c41acu: goto label_4c41ac;
        case 0x4c41b0u: goto label_4c41b0;
        case 0x4c41b4u: goto label_4c41b4;
        case 0x4c41b8u: goto label_4c41b8;
        case 0x4c41bcu: goto label_4c41bc;
        case 0x4c41c0u: goto label_4c41c0;
        case 0x4c41c4u: goto label_4c41c4;
        case 0x4c41c8u: goto label_4c41c8;
        case 0x4c41ccu: goto label_4c41cc;
        case 0x4c41d0u: goto label_4c41d0;
        case 0x4c41d4u: goto label_4c41d4;
        case 0x4c41d8u: goto label_4c41d8;
        case 0x4c41dcu: goto label_4c41dc;
        case 0x4c41e0u: goto label_4c41e0;
        case 0x4c41e4u: goto label_4c41e4;
        case 0x4c41e8u: goto label_4c41e8;
        case 0x4c41ecu: goto label_4c41ec;
        case 0x4c41f0u: goto label_4c41f0;
        case 0x4c41f4u: goto label_4c41f4;
        case 0x4c41f8u: goto label_4c41f8;
        case 0x4c41fcu: goto label_4c41fc;
        case 0x4c4200u: goto label_4c4200;
        case 0x4c4204u: goto label_4c4204;
        case 0x4c4208u: goto label_4c4208;
        case 0x4c420cu: goto label_4c420c;
        case 0x4c4210u: goto label_4c4210;
        case 0x4c4214u: goto label_4c4214;
        case 0x4c4218u: goto label_4c4218;
        case 0x4c421cu: goto label_4c421c;
        case 0x4c4220u: goto label_4c4220;
        case 0x4c4224u: goto label_4c4224;
        case 0x4c4228u: goto label_4c4228;
        case 0x4c422cu: goto label_4c422c;
        case 0x4c4230u: goto label_4c4230;
        case 0x4c4234u: goto label_4c4234;
        case 0x4c4238u: goto label_4c4238;
        case 0x4c423cu: goto label_4c423c;
        case 0x4c4240u: goto label_4c4240;
        case 0x4c4244u: goto label_4c4244;
        case 0x4c4248u: goto label_4c4248;
        case 0x4c424cu: goto label_4c424c;
        case 0x4c4250u: goto label_4c4250;
        case 0x4c4254u: goto label_4c4254;
        case 0x4c4258u: goto label_4c4258;
        case 0x4c425cu: goto label_4c425c;
        case 0x4c4260u: goto label_4c4260;
        case 0x4c4264u: goto label_4c4264;
        case 0x4c4268u: goto label_4c4268;
        case 0x4c426cu: goto label_4c426c;
        case 0x4c4270u: goto label_4c4270;
        case 0x4c4274u: goto label_4c4274;
        case 0x4c4278u: goto label_4c4278;
        case 0x4c427cu: goto label_4c427c;
        case 0x4c4280u: goto label_4c4280;
        case 0x4c4284u: goto label_4c4284;
        case 0x4c4288u: goto label_4c4288;
        case 0x4c428cu: goto label_4c428c;
        case 0x4c4290u: goto label_4c4290;
        case 0x4c4294u: goto label_4c4294;
        case 0x4c4298u: goto label_4c4298;
        case 0x4c429cu: goto label_4c429c;
        case 0x4c42a0u: goto label_4c42a0;
        case 0x4c42a4u: goto label_4c42a4;
        case 0x4c42a8u: goto label_4c42a8;
        case 0x4c42acu: goto label_4c42ac;
        case 0x4c42b0u: goto label_4c42b0;
        case 0x4c42b4u: goto label_4c42b4;
        case 0x4c42b8u: goto label_4c42b8;
        case 0x4c42bcu: goto label_4c42bc;
        case 0x4c42c0u: goto label_4c42c0;
        case 0x4c42c4u: goto label_4c42c4;
        case 0x4c42c8u: goto label_4c42c8;
        case 0x4c42ccu: goto label_4c42cc;
        case 0x4c42d0u: goto label_4c42d0;
        case 0x4c42d4u: goto label_4c42d4;
        case 0x4c42d8u: goto label_4c42d8;
        case 0x4c42dcu: goto label_4c42dc;
        default: break;
    }

    ctx->pc = 0x4c3e20u;

label_4c3e20:
    // 0x4c3e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c3e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c3e24:
    // 0x4c3e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c3e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c3e28:
    // 0x4c3e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c3e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c3e2c:
    // 0x4c3e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c3e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c3e30:
    // 0x4c3e30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c3e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c3e34:
    // 0x4c3e34: 0x1220005f  beqz        $s1, . + 4 + (0x5F << 2)
label_4c3e38:
    if (ctx->pc == 0x4C3E38u) {
        ctx->pc = 0x4C3E38u;
            // 0x4c3e38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3E3Cu;
        goto label_4c3e3c;
    }
    ctx->pc = 0x4C3E34u;
    {
        const bool branch_taken_0x4c3e34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3E34u;
            // 0x4c3e38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3e34) {
            ctx->pc = 0x4C3FB4u;
            goto label_4c3fb4;
        }
    }
    ctx->pc = 0x4C3E3Cu;
label_4c3e3c:
    // 0x4c3e3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c3e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c3e40:
    // 0x4c3e40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c3e44:
    // 0x4c3e44: 0x24631630  addiu       $v1, $v1, 0x1630
    ctx->pc = 0x4c3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5680));
label_4c3e48:
    // 0x4c3e48: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4c3e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_4c3e4c:
    // 0x4c3e4c: 0x24421668  addiu       $v0, $v0, 0x1668
    ctx->pc = 0x4c3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5736));
label_4c3e50:
    // 0x4c3e50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c3e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4c3e54:
    // 0x4c3e54: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4c3e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4c3e58:
    // 0x4c3e58: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4c3e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4c3e5c:
    // 0x4c3e5c: 0xc0407c0  jal         func_101F00
label_4c3e60:
    if (ctx->pc == 0x4C3E60u) {
        ctx->pc = 0x4C3E60u;
            // 0x4c3e60: 0x24a53fd0  addiu       $a1, $a1, 0x3FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16336));
        ctx->pc = 0x4C3E64u;
        goto label_4c3e64;
    }
    ctx->pc = 0x4C3E5Cu;
    SET_GPR_U32(ctx, 31, 0x4C3E64u);
    ctx->pc = 0x4C3E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3E5Cu;
            // 0x4c3e60: 0x24a53fd0  addiu       $a1, $a1, 0x3FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3E64u; }
        if (ctx->pc != 0x4C3E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3E64u; }
        if (ctx->pc != 0x4C3E64u) { return; }
    }
    ctx->pc = 0x4C3E64u;
label_4c3e64:
    // 0x4c3e64: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4c3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4c3e68:
    // 0x4c3e68: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_4c3e6c:
    if (ctx->pc == 0x4C3E6Cu) {
        ctx->pc = 0x4C3E6Cu;
            // 0x4c3e6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4C3E70u;
        goto label_4c3e70;
    }
    ctx->pc = 0x4C3E68u;
    {
        const bool branch_taken_0x4c3e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3e68) {
            ctx->pc = 0x4C3E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3E68u;
            // 0x4c3e6c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3EC8u;
            goto label_4c3ec8;
        }
    }
    ctx->pc = 0x4C3E70u;
label_4c3e70:
    // 0x4c3e70: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x4c3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_4c3e74:
    // 0x4c3e74: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x4c3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_4c3e78:
    // 0x4c3e78: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x4c3e78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4c3e7c:
    // 0x4c3e7c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_4c3e80:
    if (ctx->pc == 0x4C3E80u) {
        ctx->pc = 0x4C3E80u;
            // 0x4c3e80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C3E84u;
        goto label_4c3e84;
    }
    ctx->pc = 0x4C3E7Cu;
    {
        const bool branch_taken_0x4c3e7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3E7Cu;
            // 0x4c3e80: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3e7c) {
            ctx->pc = 0x4C3EA8u;
            goto label_4c3ea8;
        }
    }
    ctx->pc = 0x4C3E84u;
label_4c3e84:
    // 0x4c3e84: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4c3e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_4c3e88:
    // 0x4c3e88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4c3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4c3e8c:
    // 0x4c3e8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4c3e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4c3e90:
    // 0x4c3e90: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x4c3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_4c3e94:
    // 0x4c3e94: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4c3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_4c3e98:
    // 0x4c3e98: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4c3e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c3e9c:
    // 0x4c3e9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4c3ea0:
    if (ctx->pc == 0x4C3EA0u) {
        ctx->pc = 0x4C3EA4u;
        goto label_4c3ea4;
    }
    ctx->pc = 0x4C3E9Cu;
    {
        const bool branch_taken_0x4c3e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3e9c) {
            ctx->pc = 0x4C3E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c3e88;
        }
    }
    ctx->pc = 0x4C3EA4u;
label_4c3ea4:
    // 0x4c3ea4: 0x0  nop
    ctx->pc = 0x4c3ea4u;
    // NOP
label_4c3ea8:
    // 0x4c3ea8: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x4c3ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_4c3eac:
    // 0x4c3eac: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_4c3eb0:
    if (ctx->pc == 0x4C3EB0u) {
        ctx->pc = 0x4C3EB0u;
            // 0x4c3eb0: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x4C3EB4u;
        goto label_4c3eb4;
    }
    ctx->pc = 0x4C3EACu;
    {
        const bool branch_taken_0x4c3eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3eac) {
            ctx->pc = 0x4C3EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3EACu;
            // 0x4c3eb0: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3EC4u;
            goto label_4c3ec4;
        }
    }
    ctx->pc = 0x4C3EB4u;
label_4c3eb4:
    // 0x4c3eb4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x4c3eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_4c3eb8:
    // 0x4c3eb8: 0xc0407c0  jal         func_101F00
label_4c3ebc:
    if (ctx->pc == 0x4C3EBCu) {
        ctx->pc = 0x4C3EBCu;
            // 0x4c3ebc: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x4C3EC0u;
        goto label_4c3ec0;
    }
    ctx->pc = 0x4C3EB8u;
    SET_GPR_U32(ctx, 31, 0x4C3EC0u);
    ctx->pc = 0x4C3EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3EB8u;
            // 0x4c3ebc: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3EC0u; }
        if (ctx->pc != 0x4C3EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3EC0u; }
        if (ctx->pc != 0x4C3EC0u) { return; }
    }
    ctx->pc = 0x4C3EC0u;
label_4c3ec0:
    // 0x4c3ec0: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x4c3ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_4c3ec4:
    // 0x4c3ec4: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4c3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4c3ec8:
    // 0x4c3ec8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4c3ecc:
    if (ctx->pc == 0x4C3ECCu) {
        ctx->pc = 0x4C3ECCu;
            // 0x4c3ecc: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4C3ED0u;
        goto label_4c3ed0;
    }
    ctx->pc = 0x4C3EC8u;
    {
        const bool branch_taken_0x4c3ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3ec8) {
            ctx->pc = 0x4C3ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3EC8u;
            // 0x4c3ecc: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3EF8u;
            goto label_4c3ef8;
        }
    }
    ctx->pc = 0x4C3ED0u;
label_4c3ed0:
    // 0x4c3ed0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c3ed4:
    if (ctx->pc == 0x4C3ED4u) {
        ctx->pc = 0x4C3ED8u;
        goto label_4c3ed8;
    }
    ctx->pc = 0x4C3ED0u;
    {
        const bool branch_taken_0x4c3ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3ed0) {
            ctx->pc = 0x4C3EF4u;
            goto label_4c3ef4;
        }
    }
    ctx->pc = 0x4C3ED8u;
label_4c3ed8:
    // 0x4c3ed8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c3edc:
    if (ctx->pc == 0x4C3EDCu) {
        ctx->pc = 0x4C3EE0u;
        goto label_4c3ee0;
    }
    ctx->pc = 0x4C3ED8u;
    {
        const bool branch_taken_0x4c3ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3ed8) {
            ctx->pc = 0x4C3EF4u;
            goto label_4c3ef4;
        }
    }
    ctx->pc = 0x4C3EE0u;
label_4c3ee0:
    // 0x4c3ee0: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4c3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4c3ee4:
    // 0x4c3ee4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4c3ee8:
    if (ctx->pc == 0x4C3EE8u) {
        ctx->pc = 0x4C3EECu;
        goto label_4c3eec;
    }
    ctx->pc = 0x4C3EE4u;
    {
        const bool branch_taken_0x4c3ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3ee4) {
            ctx->pc = 0x4C3EF4u;
            goto label_4c3ef4;
        }
    }
    ctx->pc = 0x4C3EECu;
label_4c3eec:
    // 0x4c3eec: 0xc0400a8  jal         func_1002A0
label_4c3ef0:
    if (ctx->pc == 0x4C3EF0u) {
        ctx->pc = 0x4C3EF4u;
        goto label_4c3ef4;
    }
    ctx->pc = 0x4C3EECu;
    SET_GPR_U32(ctx, 31, 0x4C3EF4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3EF4u; }
        if (ctx->pc != 0x4C3EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3EF4u; }
        if (ctx->pc != 0x4C3EF4u) { return; }
    }
    ctx->pc = 0x4C3EF4u;
label_4c3ef4:
    // 0x4c3ef4: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4c3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4c3ef8:
    // 0x4c3ef8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4c3efc:
    if (ctx->pc == 0x4C3EFCu) {
        ctx->pc = 0x4C3EFCu;
            // 0x4c3efc: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4C3F00u;
        goto label_4c3f00;
    }
    ctx->pc = 0x4C3EF8u;
    {
        const bool branch_taken_0x4c3ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3ef8) {
            ctx->pc = 0x4C3EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3EF8u;
            // 0x4c3efc: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3F28u;
            goto label_4c3f28;
        }
    }
    ctx->pc = 0x4C3F00u;
label_4c3f00:
    // 0x4c3f00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c3f04:
    if (ctx->pc == 0x4C3F04u) {
        ctx->pc = 0x4C3F08u;
        goto label_4c3f08;
    }
    ctx->pc = 0x4C3F00u;
    {
        const bool branch_taken_0x4c3f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3f00) {
            ctx->pc = 0x4C3F24u;
            goto label_4c3f24;
        }
    }
    ctx->pc = 0x4C3F08u;
label_4c3f08:
    // 0x4c3f08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c3f0c:
    if (ctx->pc == 0x4C3F0Cu) {
        ctx->pc = 0x4C3F10u;
        goto label_4c3f10;
    }
    ctx->pc = 0x4C3F08u;
    {
        const bool branch_taken_0x4c3f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3f08) {
            ctx->pc = 0x4C3F24u;
            goto label_4c3f24;
        }
    }
    ctx->pc = 0x4C3F10u;
label_4c3f10:
    // 0x4c3f10: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4c3f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4c3f14:
    // 0x4c3f14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4c3f18:
    if (ctx->pc == 0x4C3F18u) {
        ctx->pc = 0x4C3F1Cu;
        goto label_4c3f1c;
    }
    ctx->pc = 0x4C3F14u;
    {
        const bool branch_taken_0x4c3f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3f14) {
            ctx->pc = 0x4C3F24u;
            goto label_4c3f24;
        }
    }
    ctx->pc = 0x4C3F1Cu;
label_4c3f1c:
    // 0x4c3f1c: 0xc0400a8  jal         func_1002A0
label_4c3f20:
    if (ctx->pc == 0x4C3F20u) {
        ctx->pc = 0x4C3F24u;
        goto label_4c3f24;
    }
    ctx->pc = 0x4C3F1Cu;
    SET_GPR_U32(ctx, 31, 0x4C3F24u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3F24u; }
        if (ctx->pc != 0x4C3F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3F24u; }
        if (ctx->pc != 0x4C3F24u) { return; }
    }
    ctx->pc = 0x4C3F24u;
label_4c3f24:
    // 0x4c3f24: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4c3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4c3f28:
    // 0x4c3f28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c3f2c:
    if (ctx->pc == 0x4C3F2Cu) {
        ctx->pc = 0x4C3F30u;
        goto label_4c3f30;
    }
    ctx->pc = 0x4C3F28u;
    {
        const bool branch_taken_0x4c3f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3f28) {
            ctx->pc = 0x4C3F44u;
            goto label_4c3f44;
        }
    }
    ctx->pc = 0x4C3F30u;
label_4c3f30:
    // 0x4c3f30: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c3f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c3f34:
    // 0x4c3f34: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c3f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c3f38:
    // 0x4c3f38: 0x24631620  addiu       $v1, $v1, 0x1620
    ctx->pc = 0x4c3f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5664));
label_4c3f3c:
    // 0x4c3f3c: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4c3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4c3f40:
    // 0x4c3f40: 0xac40a9f8  sw          $zero, -0x5608($v0)
    ctx->pc = 0x4c3f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945272), GPR_U32(ctx, 0));
label_4c3f44:
    // 0x4c3f44: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4c3f48:
    if (ctx->pc == 0x4C3F48u) {
        ctx->pc = 0x4C3F48u;
            // 0x4c3f48: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4C3F4Cu;
        goto label_4c3f4c;
    }
    ctx->pc = 0x4C3F44u;
    {
        const bool branch_taken_0x4c3f44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3f44) {
            ctx->pc = 0x4C3F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3F44u;
            // 0x4c3f48: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3FA0u;
            goto label_4c3fa0;
        }
    }
    ctx->pc = 0x4C3F4Cu;
label_4c3f4c:
    // 0x4c3f4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c3f50:
    // 0x4c3f50: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4c3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4c3f54:
    // 0x4c3f54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c3f58:
    // 0x4c3f58: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4c3f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4c3f5c:
    // 0x4c3f5c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c3f60:
    if (ctx->pc == 0x4C3F60u) {
        ctx->pc = 0x4C3F60u;
            // 0x4c3f60: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4C3F64u;
        goto label_4c3f64;
    }
    ctx->pc = 0x4C3F5Cu;
    {
        const bool branch_taken_0x4c3f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3f5c) {
            ctx->pc = 0x4C3F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3F5Cu;
            // 0x4c3f60: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3F78u;
            goto label_4c3f78;
        }
    }
    ctx->pc = 0x4C3F64u;
label_4c3f64:
    // 0x4c3f64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c3f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c3f68:
    // 0x4c3f68: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c3f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c3f6c:
    // 0x4c3f6c: 0x320f809  jalr        $t9
label_4c3f70:
    if (ctx->pc == 0x4C3F70u) {
        ctx->pc = 0x4C3F70u;
            // 0x4c3f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C3F74u;
        goto label_4c3f74;
    }
    ctx->pc = 0x4C3F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C3F74u);
        ctx->pc = 0x4C3F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3F6Cu;
            // 0x4c3f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C3F74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C3F74u; }
            if (ctx->pc != 0x4C3F74u) { return; }
        }
        }
    }
    ctx->pc = 0x4C3F74u;
label_4c3f74:
    // 0x4c3f74: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4c3f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4c3f78:
    // 0x4c3f78: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c3f7c:
    if (ctx->pc == 0x4C3F7Cu) {
        ctx->pc = 0x4C3F7Cu;
            // 0x4c3f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3F80u;
        goto label_4c3f80;
    }
    ctx->pc = 0x4C3F78u;
    {
        const bool branch_taken_0x4c3f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3f78) {
            ctx->pc = 0x4C3F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3F78u;
            // 0x4c3f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3F94u;
            goto label_4c3f94;
        }
    }
    ctx->pc = 0x4C3F80u;
label_4c3f80:
    // 0x4c3f80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c3f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c3f84:
    // 0x4c3f84: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c3f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c3f88:
    // 0x4c3f88: 0x320f809  jalr        $t9
label_4c3f8c:
    if (ctx->pc == 0x4C3F8Cu) {
        ctx->pc = 0x4C3F8Cu;
            // 0x4c3f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C3F90u;
        goto label_4c3f90;
    }
    ctx->pc = 0x4C3F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C3F90u);
        ctx->pc = 0x4C3F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3F88u;
            // 0x4c3f8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C3F90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C3F90u; }
            if (ctx->pc != 0x4C3F90u) { return; }
        }
        }
    }
    ctx->pc = 0x4C3F90u;
label_4c3f90:
    // 0x4c3f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c3f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c3f94:
    // 0x4c3f94: 0xc075bf8  jal         func_1D6FE0
label_4c3f98:
    if (ctx->pc == 0x4C3F98u) {
        ctx->pc = 0x4C3F98u;
            // 0x4c3f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3F9Cu;
        goto label_4c3f9c;
    }
    ctx->pc = 0x4C3F94u;
    SET_GPR_U32(ctx, 31, 0x4C3F9Cu);
    ctx->pc = 0x4C3F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3F94u;
            // 0x4c3f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3F9Cu; }
        if (ctx->pc != 0x4C3F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3F9Cu; }
        if (ctx->pc != 0x4C3F9Cu) { return; }
    }
    ctx->pc = 0x4C3F9Cu;
label_4c3f9c:
    // 0x4c3f9c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4c3f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4c3fa0:
    // 0x4c3fa0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c3fa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c3fa4:
    // 0x4c3fa4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c3fa8:
    if (ctx->pc == 0x4C3FA8u) {
        ctx->pc = 0x4C3FA8u;
            // 0x4c3fa8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3FACu;
        goto label_4c3fac;
    }
    ctx->pc = 0x4C3FA4u;
    {
        const bool branch_taken_0x4c3fa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c3fa4) {
            ctx->pc = 0x4C3FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3FA4u;
            // 0x4c3fa8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C3FB8u;
            goto label_4c3fb8;
        }
    }
    ctx->pc = 0x4C3FACu;
label_4c3fac:
    // 0x4c3fac: 0xc0400a8  jal         func_1002A0
label_4c3fb0:
    if (ctx->pc == 0x4C3FB0u) {
        ctx->pc = 0x4C3FB0u;
            // 0x4c3fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3FB4u;
        goto label_4c3fb4;
    }
    ctx->pc = 0x4C3FACu;
    SET_GPR_U32(ctx, 31, 0x4C3FB4u);
    ctx->pc = 0x4C3FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3FACu;
            // 0x4c3fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3FB4u; }
        if (ctx->pc != 0x4C3FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C3FB4u; }
        if (ctx->pc != 0x4C3FB4u) { return; }
    }
    ctx->pc = 0x4C3FB4u;
label_4c3fb4:
    // 0x4c3fb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c3fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c3fb8:
    // 0x4c3fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c3fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c3fbc:
    // 0x4c3fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c3fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c3fc0:
    // 0x4c3fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c3fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c3fc4:
    // 0x4c3fc4: 0x3e00008  jr          $ra
label_4c3fc8:
    if (ctx->pc == 0x4C3FC8u) {
        ctx->pc = 0x4C3FC8u;
            // 0x4c3fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C3FCCu;
        goto label_4c3fcc;
    }
    ctx->pc = 0x4C3FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3FC4u;
            // 0x4c3fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C3FCCu;
label_4c3fcc:
    // 0x4c3fcc: 0x0  nop
    ctx->pc = 0x4c3fccu;
    // NOP
label_4c3fd0:
    // 0x4c3fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c3fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c3fd4:
    // 0x4c3fd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c3fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c3fd8:
    // 0x4c3fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c3fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c3fdc:
    // 0x4c3fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c3fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c3fe0:
    // 0x4c3fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c3fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c3fe4:
    // 0x4c3fe4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_4c3fe8:
    if (ctx->pc == 0x4C3FE8u) {
        ctx->pc = 0x4C3FE8u;
            // 0x4c3fe8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C3FECu;
        goto label_4c3fec;
    }
    ctx->pc = 0x4C3FE4u;
    {
        const bool branch_taken_0x4c3fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C3FE4u;
            // 0x4c3fe8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3fe4) {
            ctx->pc = 0x4C4058u;
            goto label_4c4058;
        }
    }
    ctx->pc = 0x4C3FECu;
label_4c3fec:
    // 0x4c3fec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c3fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c3ff0:
    // 0x4c3ff0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c3ff4:
    // 0x4c3ff4: 0x24631570  addiu       $v1, $v1, 0x1570
    ctx->pc = 0x4c3ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5488));
label_4c3ff8:
    // 0x4c3ff8: 0x244215b0  addiu       $v0, $v0, 0x15B0
    ctx->pc = 0x4c3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5552));
label_4c3ffc:
    // 0x4c3ffc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c3ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c4000:
    // 0x4c4000: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c4000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c4004:
    // 0x4c4004: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c4004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c4008:
    // 0x4c4008: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4c4008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4c400c:
    // 0x4c400c: 0x320f809  jalr        $t9
label_4c4010:
    if (ctx->pc == 0x4C4010u) {
        ctx->pc = 0x4C4014u;
        goto label_4c4014;
    }
    ctx->pc = 0x4C400Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C4014u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C4014u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C4014u; }
            if (ctx->pc != 0x4C4014u) { return; }
        }
        }
    }
    ctx->pc = 0x4C4014u;
label_4c4014:
    // 0x4c4014: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_4c4018:
    if (ctx->pc == 0x4C4018u) {
        ctx->pc = 0x4C4018u;
            // 0x4c4018: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4C401Cu;
        goto label_4c401c;
    }
    ctx->pc = 0x4C4014u;
    {
        const bool branch_taken_0x4c4014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4014) {
            ctx->pc = 0x4C4018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4014u;
            // 0x4c4018: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C4044u;
            goto label_4c4044;
        }
    }
    ctx->pc = 0x4C401Cu;
label_4c401c:
    // 0x4c401c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c401cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c4020:
    // 0x4c4020: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c4020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c4024:
    // 0x4c4024: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x4c4024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_4c4028:
    // 0x4c4028: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x4c4028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_4c402c:
    // 0x4c402c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c402cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c4030:
    // 0x4c4030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c4030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c4034:
    // 0x4c4034: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c4034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c4038:
    // 0x4c4038: 0xc0aee40  jal         func_2BB900
label_4c403c:
    if (ctx->pc == 0x4C403Cu) {
        ctx->pc = 0x4C403Cu;
            // 0x4c403c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4040u;
        goto label_4c4040;
    }
    ctx->pc = 0x4C4038u;
    SET_GPR_U32(ctx, 31, 0x4C4040u);
    ctx->pc = 0x4C403Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4038u;
            // 0x4c403c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4040u; }
        if (ctx->pc != 0x4C4040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4040u; }
        if (ctx->pc != 0x4C4040u) { return; }
    }
    ctx->pc = 0x4C4040u;
label_4c4040:
    // 0x4c4040: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4c4040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4c4044:
    // 0x4c4044: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c4044u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c4048:
    // 0x4c4048: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c404c:
    if (ctx->pc == 0x4C404Cu) {
        ctx->pc = 0x4C404Cu;
            // 0x4c404c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4050u;
        goto label_4c4050;
    }
    ctx->pc = 0x4C4048u;
    {
        const bool branch_taken_0x4c4048 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c4048) {
            ctx->pc = 0x4C404Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4048u;
            // 0x4c404c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C405Cu;
            goto label_4c405c;
        }
    }
    ctx->pc = 0x4C4050u;
label_4c4050:
    // 0x4c4050: 0xc0400a8  jal         func_1002A0
label_4c4054:
    if (ctx->pc == 0x4C4054u) {
        ctx->pc = 0x4C4054u;
            // 0x4c4054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4058u;
        goto label_4c4058;
    }
    ctx->pc = 0x4C4050u;
    SET_GPR_U32(ctx, 31, 0x4C4058u);
    ctx->pc = 0x4C4054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4050u;
            // 0x4c4054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4058u; }
        if (ctx->pc != 0x4C4058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4058u; }
        if (ctx->pc != 0x4C4058u) { return; }
    }
    ctx->pc = 0x4C4058u;
label_4c4058:
    // 0x4c4058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c4058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c405c:
    // 0x4c405c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c405cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c4060:
    // 0x4c4060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c4060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c4064:
    // 0x4c4064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c4064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c4068:
    // 0x4c4068: 0x3e00008  jr          $ra
label_4c406c:
    if (ctx->pc == 0x4C406Cu) {
        ctx->pc = 0x4C406Cu;
            // 0x4c406c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C4070u;
        goto label_4c4070;
    }
    ctx->pc = 0x4C4068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C406Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4068u;
            // 0x4c406c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C4070u;
label_4c4070:
    // 0x4c4070: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4c4070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4c4074:
    // 0x4c4074: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c4074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c4078:
    // 0x4c4078: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4c4078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4c407c:
    // 0x4c407c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4c407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4c4080:
    // 0x4c4080: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4c4080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4c4084:
    // 0x4c4084: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4c4084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4c4088:
    // 0x4c4088: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4c4088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4c408c:
    // 0x4c408c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c4090:
    // 0x4c4090: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c4090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c4094:
    // 0x4c4094: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c4094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c4098:
    // 0x4c4098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c4098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c409c:
    // 0x4c409c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c409cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c40a0:
    // 0x4c40a0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4c40a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4c40a4:
    // 0x4c40a4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4c40a8:
    if (ctx->pc == 0x4C40A8u) {
        ctx->pc = 0x4C40A8u;
            // 0x4c40a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C40ACu;
        goto label_4c40ac;
    }
    ctx->pc = 0x4C40A4u;
    {
        const bool branch_taken_0x4c40a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C40A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C40A4u;
            // 0x4c40a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c40a4) {
            ctx->pc = 0x4C40F4u;
            goto label_4c40f4;
        }
    }
    ctx->pc = 0x4C40ACu;
label_4c40ac:
    // 0x4c40ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c40acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c40b0:
    // 0x4c40b0: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
label_4c40b4:
    if (ctx->pc == 0x4C40B4u) {
        ctx->pc = 0x4C40B8u;
        goto label_4c40b8;
    }
    ctx->pc = 0x4C40B0u;
    {
        const bool branch_taken_0x4c40b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c40b0) {
            ctx->pc = 0x4C4180u;
            goto label_4c4180;
        }
    }
    ctx->pc = 0x4C40B8u;
label_4c40b8:
    // 0x4c40b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c40bc:
    // 0x4c40bc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4c40c0:
    if (ctx->pc == 0x4C40C0u) {
        ctx->pc = 0x4C40C4u;
        goto label_4c40c4;
    }
    ctx->pc = 0x4C40BCu;
    {
        const bool branch_taken_0x4c40bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c40bc) {
            ctx->pc = 0x4C40CCu;
            goto label_4c40cc;
        }
    }
    ctx->pc = 0x4C40C4u;
label_4c40c4:
    // 0x4c40c4: 0x1000002e  b           . + 4 + (0x2E << 2)
label_4c40c8:
    if (ctx->pc == 0x4C40C8u) {
        ctx->pc = 0x4C40CCu;
        goto label_4c40cc;
    }
    ctx->pc = 0x4C40C4u;
    {
        const bool branch_taken_0x4c40c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c40c4) {
            ctx->pc = 0x4C4180u;
            goto label_4c4180;
        }
    }
    ctx->pc = 0x4C40CCu;
label_4c40cc:
    // 0x4c40cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c40d0:
    // 0x4c40d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c40d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c40d4:
    // 0x4c40d4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4c40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4c40d8:
    // 0x4c40d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4c40d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4c40dc:
    // 0x4c40dc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4c40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4c40e0:
    // 0x4c40e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c40e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c40e4:
    // 0x4c40e4: 0x320f809  jalr        $t9
label_4c40e8:
    if (ctx->pc == 0x4C40E8u) {
        ctx->pc = 0x4C40E8u;
            // 0x4c40e8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4C40ECu;
        goto label_4c40ec;
    }
    ctx->pc = 0x4C40E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C40ECu);
        ctx->pc = 0x4C40E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C40E4u;
            // 0x4c40e8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C40ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C40ECu; }
            if (ctx->pc != 0x4C40ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4C40ECu;
label_4c40ec:
    // 0x4c40ec: 0x10000024  b           . + 4 + (0x24 << 2)
label_4c40f0:
    if (ctx->pc == 0x4C40F0u) {
        ctx->pc = 0x4C40F4u;
        goto label_4c40f4;
    }
    ctx->pc = 0x4C40ECu;
    {
        const bool branch_taken_0x4c40ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c40ec) {
            ctx->pc = 0x4C4180u;
            goto label_4c4180;
        }
    }
    ctx->pc = 0x4C40F4u;
label_4c40f4:
    // 0x4c40f4: 0x8e320070  lw          $s2, 0x70($s1)
    ctx->pc = 0x4c40f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_4c40f8:
    // 0x4c40f8: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_4c40fc:
    if (ctx->pc == 0x4C40FCu) {
        ctx->pc = 0x4C4100u;
        goto label_4c4100;
    }
    ctx->pc = 0x4C40F8u;
    {
        const bool branch_taken_0x4c40f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c40f8) {
            ctx->pc = 0x4C4180u;
            goto label_4c4180;
        }
    }
    ctx->pc = 0x4C4100u;
label_4c4100:
    // 0x4c4100: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4c4100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4c4104:
    // 0x4c4104: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c4104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c4108:
    // 0x4c4108: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x4c4108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4c410c:
    // 0x4c410c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4c410cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4110:
    // 0x4c4110: 0x8c5ee378  lw          $fp, -0x1C88($v0)
    ctx->pc = 0x4c4110u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4c4114:
    // 0x4c4114: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c4114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4118:
    // 0x4c4118: 0x8e370088  lw          $s7, 0x88($s1)
    ctx->pc = 0x4c4118u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_4c411c:
    // 0x4c411c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4c411cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4c4120:
    // 0x4c4120: 0x8c900130  lw          $s0, 0x130($a0)
    ctx->pc = 0x4c4120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4c4124:
    // 0x4c4124: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c4124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c4128:
    // 0x4c4128: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4c4128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4c412c:
    // 0x4c412c: 0x8c55e370  lw          $s5, -0x1C90($v0)
    ctx->pc = 0x4c412cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4c4130:
    // 0x4c4130: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4c4130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4c4134:
    // 0x4c4134: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4c4134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4c4138:
    // 0x4c4138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c4138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c413c:
    // 0x4c413c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4c413cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c4140:
    // 0x4c4140: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x4c4140u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4c4144:
    // 0x4c4144: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x4c4144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4c4148:
    // 0x4c4148: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4c4148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4c414c:
    // 0x4c414c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4c414cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c4150:
    // 0x4c4150: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x4c4150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4c4154:
    // 0x4c4154: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4c4154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c4158:
    // 0x4c4158: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x4c4158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4c415c:
    // 0x4c415c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4c415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4c4160:
    // 0x4c4160: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c4160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c4164:
    // 0x4c4164: 0xc1311d8  jal         func_4C4760
label_4c4168:
    if (ctx->pc == 0x4C4168u) {
        ctx->pc = 0x4C4168u;
            // 0x4c4168: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C416Cu;
        goto label_4c416c;
    }
    ctx->pc = 0x4C4164u;
    SET_GPR_U32(ctx, 31, 0x4C416Cu);
    ctx->pc = 0x4C4168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4164u;
            // 0x4c4168: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C4760u;
    if (runtime->hasFunction(0x4C4760u)) {
        auto targetFn = runtime->lookupFunction(0x4C4760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C416Cu; }
        if (ctx->pc != 0x4C416Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C4760_0x4c4760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C416Cu; }
        if (ctx->pc != 0x4C416Cu) { return; }
    }
    ctx->pc = 0x4C416Cu;
label_4c416c:
    // 0x4c416c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4c416cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4c4170:
    // 0x4c4170: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x4c4170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4c4174:
    // 0x4c4174: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_4c4178:
    if (ctx->pc == 0x4C4178u) {
        ctx->pc = 0x4C4178u;
            // 0x4c4178: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4C417Cu;
        goto label_4c417c;
    }
    ctx->pc = 0x4C4174u;
    {
        const bool branch_taken_0x4c4174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4174u;
            // 0x4c4178: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4174) {
            ctx->pc = 0x4C4144u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c4144;
        }
    }
    ctx->pc = 0x4C417Cu;
label_4c417c:
    // 0x4c417c: 0x0  nop
    ctx->pc = 0x4c417cu;
    // NOP
label_4c4180:
    // 0x4c4180: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4c4180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4c4184:
    // 0x4c4184: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4c4184u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4c4188:
    // 0x4c4188: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4c4188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c418c:
    // 0x4c418c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4c418cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c4190:
    // 0x4c4190: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4c4190u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c4194:
    // 0x4c4194: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c4194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c4198:
    // 0x4c4198: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c4198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c419c:
    // 0x4c419c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c419cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c41a0:
    // 0x4c41a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c41a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c41a4:
    // 0x4c41a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c41a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c41a8:
    // 0x4c41a8: 0x3e00008  jr          $ra
label_4c41ac:
    if (ctx->pc == 0x4C41ACu) {
        ctx->pc = 0x4C41ACu;
            // 0x4c41ac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4C41B0u;
        goto label_4c41b0;
    }
    ctx->pc = 0x4C41A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C41ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C41A8u;
            // 0x4c41ac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C41B0u;
label_4c41b0:
    // 0x4c41b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c41b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4c41b4:
    // 0x4c41b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c41b8:
    // 0x4c41b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c41b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4c41bc:
    // 0x4c41bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c41bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c41c0:
    // 0x4c41c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c41c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c41c4:
    // 0x4c41c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c41c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c41c8:
    // 0x4c41c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c41c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c41cc:
    // 0x4c41cc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4c41ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4c41d0:
    // 0x4c41d0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4c41d4:
    if (ctx->pc == 0x4C41D4u) {
        ctx->pc = 0x4C41D4u;
            // 0x4c41d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C41D8u;
        goto label_4c41d8;
    }
    ctx->pc = 0x4C41D0u;
    {
        const bool branch_taken_0x4c41d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C41D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C41D0u;
            // 0x4c41d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c41d0) {
            ctx->pc = 0x4C4204u;
            goto label_4c4204;
        }
    }
    ctx->pc = 0x4C41D8u;
label_4c41d8:
    // 0x4c41d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c41dc:
    // 0x4c41dc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4c41e0:
    if (ctx->pc == 0x4C41E0u) {
        ctx->pc = 0x4C41E0u;
            // 0x4c41e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4C41E4u;
        goto label_4c41e4;
    }
    ctx->pc = 0x4C41DCu;
    {
        const bool branch_taken_0x4c41dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c41dc) {
            ctx->pc = 0x4C41E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C41DCu;
            // 0x4c41e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C41F8u;
            goto label_4c41f8;
        }
    }
    ctx->pc = 0x4C41E4u;
label_4c41e4:
    // 0x4c41e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c41e8:
    // 0x4c41e8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4c41ec:
    if (ctx->pc == 0x4C41ECu) {
        ctx->pc = 0x4C41F0u;
        goto label_4c41f0;
    }
    ctx->pc = 0x4C41E8u;
    {
        const bool branch_taken_0x4c41e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c41e8) {
            ctx->pc = 0x4C4238u;
            goto label_4c4238;
        }
    }
    ctx->pc = 0x4C41F0u;
label_4c41f0:
    // 0x4c41f0: 0x10000011  b           . + 4 + (0x11 << 2)
label_4c41f4:
    if (ctx->pc == 0x4C41F4u) {
        ctx->pc = 0x4C41F8u;
        goto label_4c41f8;
    }
    ctx->pc = 0x4C41F0u;
    {
        const bool branch_taken_0x4c41f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c41f0) {
            ctx->pc = 0x4C4238u;
            goto label_4c4238;
        }
    }
    ctx->pc = 0x4C41F8u;
label_4c41f8:
    // 0x4c41f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4c41f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4c41fc:
    // 0x4c41fc: 0x320f809  jalr        $t9
label_4c4200:
    if (ctx->pc == 0x4C4200u) {
        ctx->pc = 0x4C4204u;
        goto label_4c4204;
    }
    ctx->pc = 0x4C41FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C4204u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C4204u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C4204u; }
            if (ctx->pc != 0x4C4204u) { return; }
        }
        }
    }
    ctx->pc = 0x4C4204u;
label_4c4204:
    // 0x4c4204: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4c4204u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4c4208:
    // 0x4c4208: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4c420c:
    if (ctx->pc == 0x4C420Cu) {
        ctx->pc = 0x4C4210u;
        goto label_4c4210;
    }
    ctx->pc = 0x4C4208u;
    {
        const bool branch_taken_0x4c4208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4208) {
            ctx->pc = 0x4C4238u;
            goto label_4c4238;
        }
    }
    ctx->pc = 0x4C4210u;
label_4c4210:
    // 0x4c4210: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c4210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4214:
    // 0x4c4214: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c4214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4218:
    // 0x4c4218: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4c4218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4c421c:
    // 0x4c421c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4c421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4c4220:
    // 0x4c4220: 0xc0e3658  jal         func_38D960
label_4c4224:
    if (ctx->pc == 0x4C4224u) {
        ctx->pc = 0x4C4224u;
            // 0x4c4224: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4C4228u;
        goto label_4c4228;
    }
    ctx->pc = 0x4C4220u;
    SET_GPR_U32(ctx, 31, 0x4C4228u);
    ctx->pc = 0x4C4224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4220u;
            // 0x4c4224: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4228u; }
        if (ctx->pc != 0x4C4228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C4228u; }
        if (ctx->pc != 0x4C4228u) { return; }
    }
    ctx->pc = 0x4C4228u;
label_4c4228:
    // 0x4c4228: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4c4228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4c422c:
    // 0x4c422c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4c422cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4c4230:
    // 0x4c4230: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4c4234:
    if (ctx->pc == 0x4C4234u) {
        ctx->pc = 0x4C4234u;
            // 0x4c4234: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4C4238u;
        goto label_4c4238;
    }
    ctx->pc = 0x4C4230u;
    {
        const bool branch_taken_0x4c4230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C4234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4230u;
            // 0x4c4234: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4230) {
            ctx->pc = 0x4C4218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c4218;
        }
    }
    ctx->pc = 0x4C4238u;
label_4c4238:
    // 0x4c4238: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c4238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c423c:
    // 0x4c423c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c423cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c4240:
    // 0x4c4240: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c4240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c4244:
    // 0x4c4244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c4244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c4248:
    // 0x4c4248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c4248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c424c:
    // 0x4c424c: 0x3e00008  jr          $ra
label_4c4250:
    if (ctx->pc == 0x4C4250u) {
        ctx->pc = 0x4C4250u;
            // 0x4c4250: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4C4254u;
        goto label_4c4254;
    }
    ctx->pc = 0x4C424Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C424Cu;
            // 0x4c4250: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C4254u;
label_4c4254:
    // 0x4c4254: 0x0  nop
    ctx->pc = 0x4c4254u;
    // NOP
label_4c4258:
    // 0x4c4258: 0x0  nop
    ctx->pc = 0x4c4258u;
    // NOP
label_4c425c:
    // 0x4c425c: 0x0  nop
    ctx->pc = 0x4c425cu;
    // NOP
label_4c4260:
    // 0x4c4260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c4260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4c4264:
    // 0x4c4264: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c4264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4c4268:
    // 0x4c4268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c4268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c426c:
    // 0x4c426c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c4270:
    // 0x4c4270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c4270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c4274:
    // 0x4c4274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c4274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c4278:
    // 0x4c4278: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4c4278u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c427c:
    // 0x4c427c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4c4280:
    if (ctx->pc == 0x4C4280u) {
        ctx->pc = 0x4C4280u;
            // 0x4c4280: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C4284u;
        goto label_4c4284;
    }
    ctx->pc = 0x4C427Cu;
    {
        const bool branch_taken_0x4c427c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C427Cu;
            // 0x4c4280: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c427c) {
            ctx->pc = 0x4C42B8u;
            goto label_4c42b8;
        }
    }
    ctx->pc = 0x4C4284u;
label_4c4284:
    // 0x4c4284: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c4284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c4288:
    // 0x4c4288: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c4288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c428c:
    // 0x4c428c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4c428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4c4290:
    // 0x4c4290: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4c4290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4c4294:
    // 0x4c4294: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c4294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c4298:
    // 0x4c4298: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c4298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c429c:
    // 0x4c429c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4c429cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4c42a0:
    // 0x4c42a0: 0x320f809  jalr        $t9
label_4c42a4:
    if (ctx->pc == 0x4C42A4u) {
        ctx->pc = 0x4C42A8u;
        goto label_4c42a8;
    }
    ctx->pc = 0x4C42A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C42A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C42A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C42A8u; }
            if (ctx->pc != 0x4C42A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4C42A8u;
label_4c42a8:
    // 0x4c42a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4c42a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4c42ac:
    // 0x4c42ac: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4c42acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4c42b0:
    // 0x4c42b0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4c42b4:
    if (ctx->pc == 0x4C42B4u) {
        ctx->pc = 0x4C42B4u;
            // 0x4c42b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4C42B8u;
        goto label_4c42b8;
    }
    ctx->pc = 0x4C42B0u;
    {
        const bool branch_taken_0x4c42b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C42B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C42B0u;
            // 0x4c42b4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c42b0) {
            ctx->pc = 0x4C428Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c428c;
        }
    }
    ctx->pc = 0x4C42B8u;
label_4c42b8:
    // 0x4c42b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c42b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c42bc:
    // 0x4c42bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c42bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c42c0:
    // 0x4c42c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c42c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c42c4:
    // 0x4c42c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c42c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c42c8:
    // 0x4c42c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c42c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c42cc:
    // 0x4c42cc: 0x3e00008  jr          $ra
label_4c42d0:
    if (ctx->pc == 0x4C42D0u) {
        ctx->pc = 0x4C42D0u;
            // 0x4c42d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4C42D4u;
        goto label_4c42d4;
    }
    ctx->pc = 0x4C42CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C42D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C42CCu;
            // 0x4c42d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C42D4u;
label_4c42d4:
    // 0x4c42d4: 0x0  nop
    ctx->pc = 0x4c42d4u;
    // NOP
label_4c42d8:
    // 0x4c42d8: 0x0  nop
    ctx->pc = 0x4c42d8u;
    // NOP
label_4c42dc:
    // 0x4c42dc: 0x0  nop
    ctx->pc = 0x4c42dcu;
    // NOP
}
