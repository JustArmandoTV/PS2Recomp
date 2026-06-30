#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3E30
// Address: 0x3c3e30 - 0x3c4250
void sub_003C3E30_0x3c3e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3E30_0x3c3e30");
#endif

    switch (ctx->pc) {
        case 0x3c3e30u: goto label_3c3e30;
        case 0x3c3e34u: goto label_3c3e34;
        case 0x3c3e38u: goto label_3c3e38;
        case 0x3c3e3cu: goto label_3c3e3c;
        case 0x3c3e40u: goto label_3c3e40;
        case 0x3c3e44u: goto label_3c3e44;
        case 0x3c3e48u: goto label_3c3e48;
        case 0x3c3e4cu: goto label_3c3e4c;
        case 0x3c3e50u: goto label_3c3e50;
        case 0x3c3e54u: goto label_3c3e54;
        case 0x3c3e58u: goto label_3c3e58;
        case 0x3c3e5cu: goto label_3c3e5c;
        case 0x3c3e60u: goto label_3c3e60;
        case 0x3c3e64u: goto label_3c3e64;
        case 0x3c3e68u: goto label_3c3e68;
        case 0x3c3e6cu: goto label_3c3e6c;
        case 0x3c3e70u: goto label_3c3e70;
        case 0x3c3e74u: goto label_3c3e74;
        case 0x3c3e78u: goto label_3c3e78;
        case 0x3c3e7cu: goto label_3c3e7c;
        case 0x3c3e80u: goto label_3c3e80;
        case 0x3c3e84u: goto label_3c3e84;
        case 0x3c3e88u: goto label_3c3e88;
        case 0x3c3e8cu: goto label_3c3e8c;
        case 0x3c3e90u: goto label_3c3e90;
        case 0x3c3e94u: goto label_3c3e94;
        case 0x3c3e98u: goto label_3c3e98;
        case 0x3c3e9cu: goto label_3c3e9c;
        case 0x3c3ea0u: goto label_3c3ea0;
        case 0x3c3ea4u: goto label_3c3ea4;
        case 0x3c3ea8u: goto label_3c3ea8;
        case 0x3c3eacu: goto label_3c3eac;
        case 0x3c3eb0u: goto label_3c3eb0;
        case 0x3c3eb4u: goto label_3c3eb4;
        case 0x3c3eb8u: goto label_3c3eb8;
        case 0x3c3ebcu: goto label_3c3ebc;
        case 0x3c3ec0u: goto label_3c3ec0;
        case 0x3c3ec4u: goto label_3c3ec4;
        case 0x3c3ec8u: goto label_3c3ec8;
        case 0x3c3eccu: goto label_3c3ecc;
        case 0x3c3ed0u: goto label_3c3ed0;
        case 0x3c3ed4u: goto label_3c3ed4;
        case 0x3c3ed8u: goto label_3c3ed8;
        case 0x3c3edcu: goto label_3c3edc;
        case 0x3c3ee0u: goto label_3c3ee0;
        case 0x3c3ee4u: goto label_3c3ee4;
        case 0x3c3ee8u: goto label_3c3ee8;
        case 0x3c3eecu: goto label_3c3eec;
        case 0x3c3ef0u: goto label_3c3ef0;
        case 0x3c3ef4u: goto label_3c3ef4;
        case 0x3c3ef8u: goto label_3c3ef8;
        case 0x3c3efcu: goto label_3c3efc;
        case 0x3c3f00u: goto label_3c3f00;
        case 0x3c3f04u: goto label_3c3f04;
        case 0x3c3f08u: goto label_3c3f08;
        case 0x3c3f0cu: goto label_3c3f0c;
        case 0x3c3f10u: goto label_3c3f10;
        case 0x3c3f14u: goto label_3c3f14;
        case 0x3c3f18u: goto label_3c3f18;
        case 0x3c3f1cu: goto label_3c3f1c;
        case 0x3c3f20u: goto label_3c3f20;
        case 0x3c3f24u: goto label_3c3f24;
        case 0x3c3f28u: goto label_3c3f28;
        case 0x3c3f2cu: goto label_3c3f2c;
        case 0x3c3f30u: goto label_3c3f30;
        case 0x3c3f34u: goto label_3c3f34;
        case 0x3c3f38u: goto label_3c3f38;
        case 0x3c3f3cu: goto label_3c3f3c;
        case 0x3c3f40u: goto label_3c3f40;
        case 0x3c3f44u: goto label_3c3f44;
        case 0x3c3f48u: goto label_3c3f48;
        case 0x3c3f4cu: goto label_3c3f4c;
        case 0x3c3f50u: goto label_3c3f50;
        case 0x3c3f54u: goto label_3c3f54;
        case 0x3c3f58u: goto label_3c3f58;
        case 0x3c3f5cu: goto label_3c3f5c;
        case 0x3c3f60u: goto label_3c3f60;
        case 0x3c3f64u: goto label_3c3f64;
        case 0x3c3f68u: goto label_3c3f68;
        case 0x3c3f6cu: goto label_3c3f6c;
        case 0x3c3f70u: goto label_3c3f70;
        case 0x3c3f74u: goto label_3c3f74;
        case 0x3c3f78u: goto label_3c3f78;
        case 0x3c3f7cu: goto label_3c3f7c;
        case 0x3c3f80u: goto label_3c3f80;
        case 0x3c3f84u: goto label_3c3f84;
        case 0x3c3f88u: goto label_3c3f88;
        case 0x3c3f8cu: goto label_3c3f8c;
        case 0x3c3f90u: goto label_3c3f90;
        case 0x3c3f94u: goto label_3c3f94;
        case 0x3c3f98u: goto label_3c3f98;
        case 0x3c3f9cu: goto label_3c3f9c;
        case 0x3c3fa0u: goto label_3c3fa0;
        case 0x3c3fa4u: goto label_3c3fa4;
        case 0x3c3fa8u: goto label_3c3fa8;
        case 0x3c3facu: goto label_3c3fac;
        case 0x3c3fb0u: goto label_3c3fb0;
        case 0x3c3fb4u: goto label_3c3fb4;
        case 0x3c3fb8u: goto label_3c3fb8;
        case 0x3c3fbcu: goto label_3c3fbc;
        case 0x3c3fc0u: goto label_3c3fc0;
        case 0x3c3fc4u: goto label_3c3fc4;
        case 0x3c3fc8u: goto label_3c3fc8;
        case 0x3c3fccu: goto label_3c3fcc;
        case 0x3c3fd0u: goto label_3c3fd0;
        case 0x3c3fd4u: goto label_3c3fd4;
        case 0x3c3fd8u: goto label_3c3fd8;
        case 0x3c3fdcu: goto label_3c3fdc;
        case 0x3c3fe0u: goto label_3c3fe0;
        case 0x3c3fe4u: goto label_3c3fe4;
        case 0x3c3fe8u: goto label_3c3fe8;
        case 0x3c3fecu: goto label_3c3fec;
        case 0x3c3ff0u: goto label_3c3ff0;
        case 0x3c3ff4u: goto label_3c3ff4;
        case 0x3c3ff8u: goto label_3c3ff8;
        case 0x3c3ffcu: goto label_3c3ffc;
        case 0x3c4000u: goto label_3c4000;
        case 0x3c4004u: goto label_3c4004;
        case 0x3c4008u: goto label_3c4008;
        case 0x3c400cu: goto label_3c400c;
        case 0x3c4010u: goto label_3c4010;
        case 0x3c4014u: goto label_3c4014;
        case 0x3c4018u: goto label_3c4018;
        case 0x3c401cu: goto label_3c401c;
        case 0x3c4020u: goto label_3c4020;
        case 0x3c4024u: goto label_3c4024;
        case 0x3c4028u: goto label_3c4028;
        case 0x3c402cu: goto label_3c402c;
        case 0x3c4030u: goto label_3c4030;
        case 0x3c4034u: goto label_3c4034;
        case 0x3c4038u: goto label_3c4038;
        case 0x3c403cu: goto label_3c403c;
        case 0x3c4040u: goto label_3c4040;
        case 0x3c4044u: goto label_3c4044;
        case 0x3c4048u: goto label_3c4048;
        case 0x3c404cu: goto label_3c404c;
        case 0x3c4050u: goto label_3c4050;
        case 0x3c4054u: goto label_3c4054;
        case 0x3c4058u: goto label_3c4058;
        case 0x3c405cu: goto label_3c405c;
        case 0x3c4060u: goto label_3c4060;
        case 0x3c4064u: goto label_3c4064;
        case 0x3c4068u: goto label_3c4068;
        case 0x3c406cu: goto label_3c406c;
        case 0x3c4070u: goto label_3c4070;
        case 0x3c4074u: goto label_3c4074;
        case 0x3c4078u: goto label_3c4078;
        case 0x3c407cu: goto label_3c407c;
        case 0x3c4080u: goto label_3c4080;
        case 0x3c4084u: goto label_3c4084;
        case 0x3c4088u: goto label_3c4088;
        case 0x3c408cu: goto label_3c408c;
        case 0x3c4090u: goto label_3c4090;
        case 0x3c4094u: goto label_3c4094;
        case 0x3c4098u: goto label_3c4098;
        case 0x3c409cu: goto label_3c409c;
        case 0x3c40a0u: goto label_3c40a0;
        case 0x3c40a4u: goto label_3c40a4;
        case 0x3c40a8u: goto label_3c40a8;
        case 0x3c40acu: goto label_3c40ac;
        case 0x3c40b0u: goto label_3c40b0;
        case 0x3c40b4u: goto label_3c40b4;
        case 0x3c40b8u: goto label_3c40b8;
        case 0x3c40bcu: goto label_3c40bc;
        case 0x3c40c0u: goto label_3c40c0;
        case 0x3c40c4u: goto label_3c40c4;
        case 0x3c40c8u: goto label_3c40c8;
        case 0x3c40ccu: goto label_3c40cc;
        case 0x3c40d0u: goto label_3c40d0;
        case 0x3c40d4u: goto label_3c40d4;
        case 0x3c40d8u: goto label_3c40d8;
        case 0x3c40dcu: goto label_3c40dc;
        case 0x3c40e0u: goto label_3c40e0;
        case 0x3c40e4u: goto label_3c40e4;
        case 0x3c40e8u: goto label_3c40e8;
        case 0x3c40ecu: goto label_3c40ec;
        case 0x3c40f0u: goto label_3c40f0;
        case 0x3c40f4u: goto label_3c40f4;
        case 0x3c40f8u: goto label_3c40f8;
        case 0x3c40fcu: goto label_3c40fc;
        case 0x3c4100u: goto label_3c4100;
        case 0x3c4104u: goto label_3c4104;
        case 0x3c4108u: goto label_3c4108;
        case 0x3c410cu: goto label_3c410c;
        case 0x3c4110u: goto label_3c4110;
        case 0x3c4114u: goto label_3c4114;
        case 0x3c4118u: goto label_3c4118;
        case 0x3c411cu: goto label_3c411c;
        case 0x3c4120u: goto label_3c4120;
        case 0x3c4124u: goto label_3c4124;
        case 0x3c4128u: goto label_3c4128;
        case 0x3c412cu: goto label_3c412c;
        case 0x3c4130u: goto label_3c4130;
        case 0x3c4134u: goto label_3c4134;
        case 0x3c4138u: goto label_3c4138;
        case 0x3c413cu: goto label_3c413c;
        case 0x3c4140u: goto label_3c4140;
        case 0x3c4144u: goto label_3c4144;
        case 0x3c4148u: goto label_3c4148;
        case 0x3c414cu: goto label_3c414c;
        case 0x3c4150u: goto label_3c4150;
        case 0x3c4154u: goto label_3c4154;
        case 0x3c4158u: goto label_3c4158;
        case 0x3c415cu: goto label_3c415c;
        case 0x3c4160u: goto label_3c4160;
        case 0x3c4164u: goto label_3c4164;
        case 0x3c4168u: goto label_3c4168;
        case 0x3c416cu: goto label_3c416c;
        case 0x3c4170u: goto label_3c4170;
        case 0x3c4174u: goto label_3c4174;
        case 0x3c4178u: goto label_3c4178;
        case 0x3c417cu: goto label_3c417c;
        case 0x3c4180u: goto label_3c4180;
        case 0x3c4184u: goto label_3c4184;
        case 0x3c4188u: goto label_3c4188;
        case 0x3c418cu: goto label_3c418c;
        case 0x3c4190u: goto label_3c4190;
        case 0x3c4194u: goto label_3c4194;
        case 0x3c4198u: goto label_3c4198;
        case 0x3c419cu: goto label_3c419c;
        case 0x3c41a0u: goto label_3c41a0;
        case 0x3c41a4u: goto label_3c41a4;
        case 0x3c41a8u: goto label_3c41a8;
        case 0x3c41acu: goto label_3c41ac;
        case 0x3c41b0u: goto label_3c41b0;
        case 0x3c41b4u: goto label_3c41b4;
        case 0x3c41b8u: goto label_3c41b8;
        case 0x3c41bcu: goto label_3c41bc;
        case 0x3c41c0u: goto label_3c41c0;
        case 0x3c41c4u: goto label_3c41c4;
        case 0x3c41c8u: goto label_3c41c8;
        case 0x3c41ccu: goto label_3c41cc;
        case 0x3c41d0u: goto label_3c41d0;
        case 0x3c41d4u: goto label_3c41d4;
        case 0x3c41d8u: goto label_3c41d8;
        case 0x3c41dcu: goto label_3c41dc;
        case 0x3c41e0u: goto label_3c41e0;
        case 0x3c41e4u: goto label_3c41e4;
        case 0x3c41e8u: goto label_3c41e8;
        case 0x3c41ecu: goto label_3c41ec;
        case 0x3c41f0u: goto label_3c41f0;
        case 0x3c41f4u: goto label_3c41f4;
        case 0x3c41f8u: goto label_3c41f8;
        case 0x3c41fcu: goto label_3c41fc;
        case 0x3c4200u: goto label_3c4200;
        case 0x3c4204u: goto label_3c4204;
        case 0x3c4208u: goto label_3c4208;
        case 0x3c420cu: goto label_3c420c;
        case 0x3c4210u: goto label_3c4210;
        case 0x3c4214u: goto label_3c4214;
        case 0x3c4218u: goto label_3c4218;
        case 0x3c421cu: goto label_3c421c;
        case 0x3c4220u: goto label_3c4220;
        case 0x3c4224u: goto label_3c4224;
        case 0x3c4228u: goto label_3c4228;
        case 0x3c422cu: goto label_3c422c;
        case 0x3c4230u: goto label_3c4230;
        case 0x3c4234u: goto label_3c4234;
        case 0x3c4238u: goto label_3c4238;
        case 0x3c423cu: goto label_3c423c;
        case 0x3c4240u: goto label_3c4240;
        case 0x3c4244u: goto label_3c4244;
        case 0x3c4248u: goto label_3c4248;
        case 0x3c424cu: goto label_3c424c;
        default: break;
    }

    ctx->pc = 0x3c3e30u;

label_3c3e30:
    // 0x3c3e30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c3e34:
    // 0x3c3e34: 0x3e00008  jr          $ra
label_3c3e38:
    if (ctx->pc == 0x3C3E38u) {
        ctx->pc = 0x3C3E38u;
            // 0x3c3e38: 0x8c4265a0  lw          $v0, 0x65A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26016)));
        ctx->pc = 0x3C3E3Cu;
        goto label_3c3e3c;
    }
    ctx->pc = 0x3C3E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3E34u;
            // 0x3c3e38: 0x8c4265a0  lw          $v0, 0x65A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26016)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3E3Cu;
label_3c3e3c:
    // 0x3c3e3c: 0x0  nop
    ctx->pc = 0x3c3e3cu;
    // NOP
label_3c3e40:
    // 0x3c3e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c3e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c3e44:
    // 0x3c3e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c3e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c3e48:
    // 0x3c3e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c3e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c3e4c:
    // 0x3c3e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c3e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c3e50:
    // 0x3c3e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c3e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c3e54:
    // 0x3c3e54: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_3c3e58:
    if (ctx->pc == 0x3C3E58u) {
        ctx->pc = 0x3C3E58u;
            // 0x3c3e58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C3E5Cu;
        goto label_3c3e5c;
    }
    ctx->pc = 0x3C3E54u;
    {
        const bool branch_taken_0x3c3e54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3E54u;
            // 0x3c3e58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e54) {
            ctx->pc = 0x3C3F14u;
            goto label_3c3f14;
        }
    }
    ctx->pc = 0x3C3E5Cu;
label_3c3e5c:
    // 0x3c3e5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c3e60:
    // 0x3c3e60: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c3e64:
    // 0x3c3e64: 0x24428c70  addiu       $v0, $v0, -0x7390
    ctx->pc = 0x3c3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
label_3c3e68:
    // 0x3c3e68: 0x24638c94  addiu       $v1, $v1, -0x736C
    ctx->pc = 0x3c3e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937748));
label_3c3e6c:
    // 0x3c3e6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3c3e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3c3e70:
    // 0x3c3e70: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c3e74:
    // 0x3c3e74: 0xae230108  sw          $v1, 0x108($s1)
    ctx->pc = 0x3c3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 3));
label_3c3e78:
    // 0x3c3e78: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x3c3e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3c3e7c:
    // 0x3c3e7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c3e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c3e80:
    // 0x3c3e80: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x3c3e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_3c3e84:
    // 0x3c3e84: 0x320f809  jalr        $t9
label_3c3e88:
    if (ctx->pc == 0x3C3E88u) {
        ctx->pc = 0x3C3E8Cu;
        goto label_3c3e8c;
    }
    ctx->pc = 0x3C3E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C3E8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C3E8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C3E8Cu; }
            if (ctx->pc != 0x3C3E8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C3E8Cu;
label_3c3e8c:
    // 0x3c3e8c: 0x92220168  lbu         $v0, 0x168($s1)
    ctx->pc = 0x3c3e8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 360)));
label_3c3e90:
    // 0x3c3e90: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3c3e94:
    if (ctx->pc == 0x3C3E94u) {
        ctx->pc = 0x3C3E94u;
            // 0x3c3e94: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->pc = 0x3C3E98u;
        goto label_3c3e98;
    }
    ctx->pc = 0x3C3E90u;
    {
        const bool branch_taken_0x3c3e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3e90) {
            ctx->pc = 0x3C3E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3E90u;
            // 0x3c3e94: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3EB8u;
            goto label_3c3eb8;
        }
    }
    ctx->pc = 0x3C3E98u;
label_3c3e98:
    // 0x3c3e98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3c3e9c:
    // 0x3c3e9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3c3e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c3ea0:
    // 0x3c3ea0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3c3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3c3ea4:
    // 0x3c3ea4: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x3c3ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3c3ea8:
    // 0x3c3ea8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c3ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c3eac:
    // 0x3c3eac: 0x320f809  jalr        $t9
label_3c3eb0:
    if (ctx->pc == 0x3C3EB0u) {
        ctx->pc = 0x3C3EB0u;
            // 0x3c3eb0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C3EB4u;
        goto label_3c3eb4;
    }
    ctx->pc = 0x3C3EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C3EB4u);
        ctx->pc = 0x3C3EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3EACu;
            // 0x3c3eb0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C3EB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C3EB4u; }
            if (ctx->pc != 0x3C3EB4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C3EB4u;
label_3c3eb4:
    // 0x3c3eb4: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x3c3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_3c3eb8:
    // 0x3c3eb8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3c3ebc:
    if (ctx->pc == 0x3C3EBCu) {
        ctx->pc = 0x3C3EBCu;
            // 0x3c3ebc: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->pc = 0x3C3EC0u;
        goto label_3c3ec0;
    }
    ctx->pc = 0x3C3EB8u;
    {
        const bool branch_taken_0x3c3eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3eb8) {
            ctx->pc = 0x3C3EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3EB8u;
            // 0x3c3ebc: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3ED4u;
            goto label_3c3ed4;
        }
    }
    ctx->pc = 0x3C3EC0u;
label_3c3ec0:
    // 0x3c3ec0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c3ec4:
    // 0x3c3ec4: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x3c3ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_3c3ec8:
    // 0x3c3ec8: 0xc0fd080  jal         func_3F4200
label_3c3ecc:
    if (ctx->pc == 0x3C3ECCu) {
        ctx->pc = 0x3C3ECCu;
            // 0x3c3ecc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3C3ED0u;
        goto label_3c3ed0;
    }
    ctx->pc = 0x3C3EC8u;
    SET_GPR_U32(ctx, 31, 0x3C3ED0u);
    ctx->pc = 0x3C3ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3EC8u;
            // 0x3c3ecc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4200u;
    if (runtime->hasFunction(0x3F4200u)) {
        auto targetFn = runtime->lookupFunction(0x3F4200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3ED0u; }
        if (ctx->pc != 0x3C3ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4200_0x3f4200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3ED0u; }
        if (ctx->pc != 0x3C3ED0u) { return; }
    }
    ctx->pc = 0x3C3ED0u;
label_3c3ed0:
    // 0x3c3ed0: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x3c3ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
label_3c3ed4:
    // 0x3c3ed4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3c3ed8:
    if (ctx->pc == 0x3C3ED8u) {
        ctx->pc = 0x3C3ED8u;
            // 0x3c3ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C3EDCu;
        goto label_3c3edc;
    }
    ctx->pc = 0x3C3ED4u;
    {
        const bool branch_taken_0x3c3ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3ed4) {
            ctx->pc = 0x3C3ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3ED4u;
            // 0x3c3ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3EF4u;
            goto label_3c3ef4;
        }
    }
    ctx->pc = 0x3C3EDCu;
label_3c3edc:
    // 0x3c3edc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3c3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3c3ee0:
    // 0x3c3ee0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c3ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c3ee4:
    // 0x3c3ee4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3c3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3c3ee8:
    // 0x3c3ee8: 0xc057a68  jal         func_15E9A0
label_3c3eec:
    if (ctx->pc == 0x3C3EECu) {
        ctx->pc = 0x3C3EECu;
            // 0x3c3eec: 0xae220108  sw          $v0, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
        ctx->pc = 0x3C3EF0u;
        goto label_3c3ef0;
    }
    ctx->pc = 0x3C3EE8u;
    SET_GPR_U32(ctx, 31, 0x3C3EF0u);
    ctx->pc = 0x3C3EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3EE8u;
            // 0x3c3eec: 0xae220108  sw          $v0, 0x108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3EF0u; }
        if (ctx->pc != 0x3C3EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3EF0u; }
        if (ctx->pc != 0x3C3EF0u) { return; }
    }
    ctx->pc = 0x3C3EF0u;
label_3c3ef0:
    // 0x3c3ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c3ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3ef4:
    // 0x3c3ef4: 0xc122a68  jal         func_48A9A0
label_3c3ef8:
    if (ctx->pc == 0x3C3EF8u) {
        ctx->pc = 0x3C3EF8u;
            // 0x3c3ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C3EFCu;
        goto label_3c3efc;
    }
    ctx->pc = 0x3C3EF4u;
    SET_GPR_U32(ctx, 31, 0x3C3EFCu);
    ctx->pc = 0x3C3EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3EF4u;
            // 0x3c3ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48A9A0u;
    if (runtime->hasFunction(0x48A9A0u)) {
        auto targetFn = runtime->lookupFunction(0x48A9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3EFCu; }
        if (ctx->pc != 0x3C3EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048A9A0_0x48a9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3EFCu; }
        if (ctx->pc != 0x3C3EFCu) { return; }
    }
    ctx->pc = 0x3C3EFCu;
label_3c3efc:
    // 0x3c3efc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c3efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3c3f00:
    // 0x3c3f00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c3f00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c3f04:
    // 0x3c3f04: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c3f08:
    if (ctx->pc == 0x3C3F08u) {
        ctx->pc = 0x3C3F08u;
            // 0x3c3f08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F0Cu;
        goto label_3c3f0c;
    }
    ctx->pc = 0x3C3F04u;
    {
        const bool branch_taken_0x3c3f04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c3f04) {
            ctx->pc = 0x3C3F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3F04u;
            // 0x3c3f08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3F18u;
            goto label_3c3f18;
        }
    }
    ctx->pc = 0x3C3F0Cu;
label_3c3f0c:
    // 0x3c3f0c: 0xc0400a8  jal         func_1002A0
label_3c3f10:
    if (ctx->pc == 0x3C3F10u) {
        ctx->pc = 0x3C3F10u;
            // 0x3c3f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F14u;
        goto label_3c3f14;
    }
    ctx->pc = 0x3C3F0Cu;
    SET_GPR_U32(ctx, 31, 0x3C3F14u);
    ctx->pc = 0x3C3F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3F0Cu;
            // 0x3c3f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3F14u; }
        if (ctx->pc != 0x3C3F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3F14u; }
        if (ctx->pc != 0x3C3F14u) { return; }
    }
    ctx->pc = 0x3C3F14u;
label_3c3f14:
    // 0x3c3f14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c3f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c3f18:
    // 0x3c3f18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c3f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c3f1c:
    // 0x3c3f1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c3f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c3f20:
    // 0x3c3f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c3f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c3f24:
    // 0x3c3f24: 0x3e00008  jr          $ra
label_3c3f28:
    if (ctx->pc == 0x3C3F28u) {
        ctx->pc = 0x3C3F28u;
            // 0x3c3f28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C3F2Cu;
        goto label_3c3f2c;
    }
    ctx->pc = 0x3C3F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3F24u;
            // 0x3c3f28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3F2Cu;
label_3c3f2c:
    // 0x3c3f2c: 0x0  nop
    ctx->pc = 0x3c3f2cu;
    // NOP
label_3c3f30:
    // 0x3c3f30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c3f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3c3f34:
    // 0x3c3f34: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3c3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3c3f38:
    // 0x3c3f38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3c3f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3c3f3c:
    // 0x3c3f3c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c3f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3c3f40:
    // 0x3c3f40: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c3f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c3f44:
    // 0x3c3f44: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c3f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c3f48:
    // 0x3c3f48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c3f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c3f4c:
    // 0x3c3f4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c3f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c3f50:
    // 0x3c3f50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c3f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c3f54:
    // 0x3c3f54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c3f54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c3f58:
    // 0x3c3f58: 0x90850118  lbu         $a1, 0x118($a0)
    ctx->pc = 0x3c3f58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
label_3c3f5c:
    // 0x3c3f5c: 0x14a300af  bne         $a1, $v1, . + 4 + (0xAF << 2)
label_3c3f60:
    if (ctx->pc == 0x3C3F60u) {
        ctx->pc = 0x3C3F60u;
            // 0x3c3f60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F64u;
        goto label_3c3f64;
    }
    ctx->pc = 0x3C3F5Cu;
    {
        const bool branch_taken_0x3c3f5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C3F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3F5Cu;
            // 0x3c3f60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f5c) {
            ctx->pc = 0x3C421Cu;
            goto label_3c421c;
        }
    }
    ctx->pc = 0x3C3F64u;
label_3c3f64:
    // 0x3c3f64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c3f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c3f68:
    // 0x3c3f68: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c3f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c3f6c:
    // 0x3c3f6c: 0x320f809  jalr        $t9
label_3c3f70:
    if (ctx->pc == 0x3C3F70u) {
        ctx->pc = 0x3C3F74u;
        goto label_3c3f74;
    }
    ctx->pc = 0x3C3F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C3F74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C3F74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C3F74u; }
            if (ctx->pc != 0x3C3F74u) { return; }
        }
        }
    }
    ctx->pc = 0x3C3F74u;
label_3c3f74:
    // 0x3c3f74: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x3c3f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_3c3f78:
    // 0x3c3f78: 0x506000a9  beql        $v1, $zero, . + 4 + (0xA9 << 2)
label_3c3f7c:
    if (ctx->pc == 0x3C3F7Cu) {
        ctx->pc = 0x3C3F7Cu;
            // 0x3c3f7c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x3C3F80u;
        goto label_3c3f80;
    }
    ctx->pc = 0x3C3F78u;
    {
        const bool branch_taken_0x3c3f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3f78) {
            ctx->pc = 0x3C3F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3F78u;
            // 0x3c3f7c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4220u;
            goto label_3c4220;
        }
    }
    ctx->pc = 0x3C3F80u;
label_3c3f80:
    // 0x3c3f80: 0xc0c8f7c  jal         func_323DF0
label_3c3f84:
    if (ctx->pc == 0x3C3F84u) {
        ctx->pc = 0x3C3F88u;
        goto label_3c3f88;
    }
    ctx->pc = 0x3C3F80u;
    SET_GPR_U32(ctx, 31, 0x3C3F88u);
    ctx->pc = 0x323DF0u;
    if (runtime->hasFunction(0x323DF0u)) {
        auto targetFn = runtime->lookupFunction(0x323DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3F88u; }
        if (ctx->pc != 0x3C3F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323DF0_0x323df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3F88u; }
        if (ctx->pc != 0x3C3F88u) { return; }
    }
    ctx->pc = 0x3C3F88u;
label_3c3f88:
    // 0x3c3f88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c3f88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c3f8c:
    // 0x3c3f8c: 0xc12287c  jal         func_48A1F0
label_3c3f90:
    if (ctx->pc == 0x3C3F90u) {
        ctx->pc = 0x3C3F90u;
            // 0x3c3f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F94u;
        goto label_3c3f94;
    }
    ctx->pc = 0x3C3F8Cu;
    SET_GPR_U32(ctx, 31, 0x3C3F94u);
    ctx->pc = 0x3C3F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3F8Cu;
            // 0x3c3f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48A1F0u;
    if (runtime->hasFunction(0x48A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x48A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3F94u; }
        if (ctx->pc != 0x3C3F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048A1F0_0x48a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3F94u; }
        if (ctx->pc != 0x3C3F94u) { return; }
    }
    ctx->pc = 0x3C3F94u;
label_3c3f94:
    // 0x3c3f94: 0xc0775b8  jal         func_1DD6E0
label_3c3f98:
    if (ctx->pc == 0x3C3F98u) {
        ctx->pc = 0x3C3F98u;
            // 0x3c3f98: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3C3F9Cu;
        goto label_3c3f9c;
    }
    ctx->pc = 0x3C3F94u;
    SET_GPR_U32(ctx, 31, 0x3C3F9Cu);
    ctx->pc = 0x3C3F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3F94u;
            // 0x3c3f98: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3F9Cu; }
        if (ctx->pc != 0x3C3F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3F9Cu; }
        if (ctx->pc != 0x3C3F9Cu) { return; }
    }
    ctx->pc = 0x3C3F9Cu;
label_3c3f9c:
    // 0x3c3f9c: 0xc0c7534  jal         func_31D4D0
label_3c3fa0:
    if (ctx->pc == 0x3C3FA0u) {
        ctx->pc = 0x3C3FA0u;
            // 0x3c3fa0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C3FA4u;
        goto label_3c3fa4;
    }
    ctx->pc = 0x3C3F9Cu;
    SET_GPR_U32(ctx, 31, 0x3C3FA4u);
    ctx->pc = 0x3C3FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3F9Cu;
            // 0x3c3fa0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4D0u;
    if (runtime->hasFunction(0x31D4D0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3FA4u; }
        if (ctx->pc != 0x3C3FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4D0_0x31d4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3FA4u; }
        if (ctx->pc != 0x3C3FA4u) { return; }
    }
    ctx->pc = 0x3C3FA4u;
label_3c3fa4:
    // 0x3c3fa4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3c3fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3c3fa8:
    // 0x3c3fa8: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x3c3fa8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3c3fac:
    // 0x3c3fac: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x3c3facu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3c3fb0:
    // 0x3c3fb0: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x3c3fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_3c3fb4:
    // 0x3c3fb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c3fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c3fb8:
    // 0x3c3fb8: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x3c3fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3c3fbc:
    // 0x3c3fbc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3c3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3c3fc0:
    // 0x3c3fc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c3fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3c3fc4:
    // 0x3c3fc4: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x3c3fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3c3fc8:
    // 0x3c3fc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c3fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c3fcc:
    // 0x3c3fcc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3c3fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c3fd0:
    // 0x3c3fd0: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x3c3fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3c3fd4:
    // 0x3c3fd4: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x3c3fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c3fd8:
    // 0x3c3fd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c3fd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c3fdc:
    // 0x3c3fdc: 0x4501008f  bc1t        . + 4 + (0x8F << 2)
label_3c3fe0:
    if (ctx->pc == 0x3C3FE0u) {
        ctx->pc = 0x3C3FE4u;
        goto label_3c3fe4;
    }
    ctx->pc = 0x3C3FDCu;
    {
        const bool branch_taken_0x3c3fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c3fdc) {
            ctx->pc = 0x3C421Cu;
            goto label_3c421c;
        }
    }
    ctx->pc = 0x3C3FE4u;
label_3c3fe4:
    // 0x3c3fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c3fe8:
    // 0x3c3fe8: 0xc0f1130  jal         func_3C44C0
label_3c3fec:
    if (ctx->pc == 0x3C3FECu) {
        ctx->pc = 0x3C3FECu;
            // 0x3c3fec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C3FF0u;
        goto label_3c3ff0;
    }
    ctx->pc = 0x3C3FE8u;
    SET_GPR_U32(ctx, 31, 0x3C3FF0u);
    ctx->pc = 0x3C3FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3FE8u;
            // 0x3c3fec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C44C0u;
    if (runtime->hasFunction(0x3C44C0u)) {
        auto targetFn = runtime->lookupFunction(0x3C44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3FF0u; }
        if (ctx->pc != 0x3C3FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C44C0_0x3c44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3FF0u; }
        if (ctx->pc != 0x3C3FF0u) { return; }
    }
    ctx->pc = 0x3C3FF0u;
label_3c3ff0:
    // 0x3c3ff0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3c3ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c3ff4:
    // 0x3c3ff4: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_3c3ff8:
    if (ctx->pc == 0x3C3FF8u) {
        ctx->pc = 0x3C3FF8u;
            // 0x3c3ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C3FFCu;
        goto label_3c3ffc;
    }
    ctx->pc = 0x3C3FF4u;
    {
        const bool branch_taken_0x3c3ff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c3ff4) {
            ctx->pc = 0x3C3FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3FF4u;
            // 0x3c3ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C4024u;
            goto label_3c4024;
        }
    }
    ctx->pc = 0x3C3FFCu;
label_3c3ffc:
    // 0x3c3ffc: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x3c3ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_3c4000:
    // 0x3c4000: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x3c4000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_3c4004:
    // 0x3c4004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c4004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c4008:
    // 0x3c4008: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c4008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c400c:
    // 0x3c400c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x3c400cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_3c4010:
    // 0x3c4010: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x3c4010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c4014:
    // 0x3c4014: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c4014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c4018:
    // 0x3c4018: 0x45010080  bc1t        . + 4 + (0x80 << 2)
label_3c401c:
    if (ctx->pc == 0x3C401Cu) {
        ctx->pc = 0x3C4020u;
        goto label_3c4020;
    }
    ctx->pc = 0x3C4018u;
    {
        const bool branch_taken_0x3c4018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c4018) {
            ctx->pc = 0x3C421Cu;
            goto label_3c421c;
        }
    }
    ctx->pc = 0x3C4020u;
label_3c4020:
    // 0x3c4020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c4020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4024:
    // 0x3c4024: 0xc0f1130  jal         func_3C44C0
label_3c4028:
    if (ctx->pc == 0x3C4028u) {
        ctx->pc = 0x3C4028u;
            // 0x3c4028: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C402Cu;
        goto label_3c402c;
    }
    ctx->pc = 0x3C4024u;
    SET_GPR_U32(ctx, 31, 0x3C402Cu);
    ctx->pc = 0x3C4028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4024u;
            // 0x3c4028: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C44C0u;
    if (runtime->hasFunction(0x3C44C0u)) {
        auto targetFn = runtime->lookupFunction(0x3C44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C402Cu; }
        if (ctx->pc != 0x3C402Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C44C0_0x3c44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C402Cu; }
        if (ctx->pc != 0x3C402Cu) { return; }
    }
    ctx->pc = 0x3C402Cu;
label_3c402c:
    // 0x3c402c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x3c402cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c4030:
    // 0x3c4030: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x3c4030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c4034:
    // 0x3c4034: 0x45000079  bc1f        . + 4 + (0x79 << 2)
label_3c4038:
    if (ctx->pc == 0x3C4038u) {
        ctx->pc = 0x3C403Cu;
        goto label_3c403c;
    }
    ctx->pc = 0x3C4034u;
    {
        const bool branch_taken_0x3c4034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c4034) {
            ctx->pc = 0x3C421Cu;
            goto label_3c421c;
        }
    }
    ctx->pc = 0x3C403Cu;
label_3c403c:
    // 0x3c403c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3c403cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c4040:
    // 0x3c4040: 0x45000076  bc1f        . + 4 + (0x76 << 2)
label_3c4044:
    if (ctx->pc == 0x3C4044u) {
        ctx->pc = 0x3C4048u;
        goto label_3c4048;
    }
    ctx->pc = 0x3C4040u;
    {
        const bool branch_taken_0x3c4040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c4040) {
            ctx->pc = 0x3C421Cu;
            goto label_3c421c;
        }
    }
    ctx->pc = 0x3C4048u;
label_3c4048:
    // 0x3c4048: 0xc0d105c  jal         func_344170
label_3c404c:
    if (ctx->pc == 0x3C404Cu) {
        ctx->pc = 0x3C4050u;
        goto label_3c4050;
    }
    ctx->pc = 0x3C4048u;
    SET_GPR_U32(ctx, 31, 0x3C4050u);
    ctx->pc = 0x344170u;
    if (runtime->hasFunction(0x344170u)) {
        auto targetFn = runtime->lookupFunction(0x344170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4050u; }
        if (ctx->pc != 0x3C4050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344170_0x344170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4050u; }
        if (ctx->pc != 0x3C4050u) { return; }
    }
    ctx->pc = 0x3C4050u;
label_3c4050:
    // 0x3c4050: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x3c4050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3c4054:
    // 0x3c4054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c4054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4058:
    // 0x3c4058: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c405c:
    // 0x3c405c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3c405cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3c4060:
    // 0x3c4060: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3c4060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4064:
    // 0x3c4064: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4068:
    // 0x3c4068: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x3c4068u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c406c:
    // 0x3c406c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c406cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4070:
    // 0x3c4070: 0xc0f111c  jal         func_3C4470
label_3c4074:
    if (ctx->pc == 0x3C4074u) {
        ctx->pc = 0x3C4074u;
            // 0x3c4074: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4078u;
        goto label_3c4078;
    }
    ctx->pc = 0x3C4070u;
    SET_GPR_U32(ctx, 31, 0x3C4078u);
    ctx->pc = 0x3C4074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4070u;
            // 0x3c4074: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4470u;
    if (runtime->hasFunction(0x3C4470u)) {
        auto targetFn = runtime->lookupFunction(0x3C4470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4078u; }
        if (ctx->pc != 0x3C4078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4470_0x3c4470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4078u; }
        if (ctx->pc != 0x3C4078u) { return; }
    }
    ctx->pc = 0x3C4078u;
label_3c4078:
    // 0x3c4078: 0xc0f1118  jal         func_3C4460
label_3c407c:
    if (ctx->pc == 0x3C407Cu) {
        ctx->pc = 0x3C4080u;
        goto label_3c4080;
    }
    ctx->pc = 0x3C4078u;
    SET_GPR_U32(ctx, 31, 0x3C4080u);
    ctx->pc = 0x3C4460u;
    if (runtime->hasFunction(0x3C4460u)) {
        auto targetFn = runtime->lookupFunction(0x3C4460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4080u; }
        if (ctx->pc != 0x3C4080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4460_0x3c4460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4080u; }
        if (ctx->pc != 0x3C4080u) { return; }
    }
    ctx->pc = 0x3C4080u;
label_3c4080:
    // 0x3c4080: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3c4080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c4084:
    // 0x3c4084: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c4084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4088:
    // 0x3c4088: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x3c4088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_3c408c:
    // 0x3c408c: 0x320f809  jalr        $t9
label_3c4090:
    if (ctx->pc == 0x3C4090u) {
        ctx->pc = 0x3C4090u;
            // 0x3c4090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4094u;
        goto label_3c4094;
    }
    ctx->pc = 0x3C408Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4094u);
        ctx->pc = 0x3C4090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C408Cu;
            // 0x3c4090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4094u; }
            if (ctx->pc != 0x3C4094u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4094u;
label_3c4094:
    // 0x3c4094: 0xc0d105c  jal         func_344170
label_3c4098:
    if (ctx->pc == 0x3C4098u) {
        ctx->pc = 0x3C409Cu;
        goto label_3c409c;
    }
    ctx->pc = 0x3C4094u;
    SET_GPR_U32(ctx, 31, 0x3C409Cu);
    ctx->pc = 0x344170u;
    if (runtime->hasFunction(0x344170u)) {
        auto targetFn = runtime->lookupFunction(0x344170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C409Cu; }
        if (ctx->pc != 0x3C409Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344170_0x344170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C409Cu; }
        if (ctx->pc != 0x3C409Cu) { return; }
    }
    ctx->pc = 0x3C409Cu;
label_3c409c:
    // 0x3c409c: 0xc0f1114  jal         func_3C4450
label_3c40a0:
    if (ctx->pc == 0x3C40A0u) {
        ctx->pc = 0x3C40A0u;
            // 0x3c40a0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C40A4u;
        goto label_3c40a4;
    }
    ctx->pc = 0x3C409Cu;
    SET_GPR_U32(ctx, 31, 0x3C40A4u);
    ctx->pc = 0x3C40A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C409Cu;
            // 0x3c40a0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4450u;
    if (runtime->hasFunction(0x3C4450u)) {
        auto targetFn = runtime->lookupFunction(0x3C4450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C40A4u; }
        if (ctx->pc != 0x3C40A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4450_0x3c4450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C40A4u; }
        if (ctx->pc != 0x3C40A4u) { return; }
    }
    ctx->pc = 0x3C40A4u;
label_3c40a4:
    // 0x3c40a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3c40a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3c40a8:
    // 0x3c40a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3c40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3c40ac:
    // 0x3c40ac: 0xc0f1110  jal         func_3C4440
label_3c40b0:
    if (ctx->pc == 0x3C40B0u) {
        ctx->pc = 0x3C40B0u;
            // 0x3c40b0: 0x24510169  addiu       $s1, $v0, 0x169 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 361));
        ctx->pc = 0x3C40B4u;
        goto label_3c40b4;
    }
    ctx->pc = 0x3C40ACu;
    SET_GPR_U32(ctx, 31, 0x3C40B4u);
    ctx->pc = 0x3C40B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C40ACu;
            // 0x3c40b0: 0x24510169  addiu       $s1, $v0, 0x169 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 361));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4440u;
    if (runtime->hasFunction(0x3C4440u)) {
        auto targetFn = runtime->lookupFunction(0x3C4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C40B4u; }
        if (ctx->pc != 0x3C40B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4440_0x3c4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C40B4u; }
        if (ctx->pc != 0x3C40B4u) { return; }
    }
    ctx->pc = 0x3C40B4u;
label_3c40b4:
    // 0x3c40b4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3c40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3c40b8:
    // 0x3c40b8: 0xc0f110c  jal         func_3C4430
label_3c40bc:
    if (ctx->pc == 0x3C40BCu) {
        ctx->pc = 0x3C40BCu;
            // 0x3c40bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C40C0u;
        goto label_3c40c0;
    }
    ctx->pc = 0x3C40B8u;
    SET_GPR_U32(ctx, 31, 0x3C40C0u);
    ctx->pc = 0x3C40BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C40B8u;
            // 0x3c40bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4430u;
    if (runtime->hasFunction(0x3C4430u)) {
        auto targetFn = runtime->lookupFunction(0x3C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C40C0u; }
        if (ctx->pc != 0x3C40C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4430_0x3c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C40C0u; }
        if (ctx->pc != 0x3C40C0u) { return; }
    }
    ctx->pc = 0x3C40C0u;
label_3c40c0:
    // 0x3c40c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c40c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c40c4:
    // 0x3c40c4: 0xc0f1104  jal         func_3C4410
label_3c40c8:
    if (ctx->pc == 0x3C40C8u) {
        ctx->pc = 0x3C40C8u;
            // 0x3c40c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3C40CCu;
        goto label_3c40cc;
    }
    ctx->pc = 0x3C40C4u;
    SET_GPR_U32(ctx, 31, 0x3C40CCu);
    ctx->pc = 0x3C40C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C40C4u;
            // 0x3c40c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4410u;
    if (runtime->hasFunction(0x3C4410u)) {
        auto targetFn = runtime->lookupFunction(0x3C4410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C40CCu; }
        if (ctx->pc != 0x3C40CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4410_0x3c4410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C40CCu; }
        if (ctx->pc != 0x3C40CCu) { return; }
    }
    ctx->pc = 0x3C40CCu;
label_3c40cc:
    // 0x3c40cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c40ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c40d0:
    // 0x3c40d0: 0xc0f1100  jal         func_3C4400
label_3c40d4:
    if (ctx->pc == 0x3C40D4u) {
        ctx->pc = 0x3C40D4u;
            // 0x3c40d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C40D8u;
        goto label_3c40d8;
    }
    ctx->pc = 0x3C40D0u;
    SET_GPR_U32(ctx, 31, 0x3C40D8u);
    ctx->pc = 0x3C40D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C40D0u;
            // 0x3c40d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4400u;
    if (runtime->hasFunction(0x3C4400u)) {
        auto targetFn = runtime->lookupFunction(0x3C4400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C40D8u; }
        if (ctx->pc != 0x3C40D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4400_0x3c4400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C40D8u; }
        if (ctx->pc != 0x3C40D8u) { return; }
    }
    ctx->pc = 0x3C40D8u;
label_3c40d8:
    // 0x3c40d8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3c40dc:
    if (ctx->pc == 0x3C40DCu) {
        ctx->pc = 0x3C40DCu;
            // 0x3c40dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3C40E0u;
        goto label_3c40e0;
    }
    ctx->pc = 0x3C40D8u;
    {
        const bool branch_taken_0x3c40d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3c40d8) {
            ctx->pc = 0x3C40DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C40D8u;
            // 0x3c40dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C40ECu;
            goto label_3c40ec;
        }
    }
    ctx->pc = 0x3C40E0u;
label_3c40e0:
    // 0x3c40e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c40e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c40e4:
    // 0x3c40e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c40e8:
    if (ctx->pc == 0x3C40E8u) {
        ctx->pc = 0x3C40E8u;
            // 0x3c40e8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C40ECu;
        goto label_3c40ec;
    }
    ctx->pc = 0x3C40E4u;
    {
        const bool branch_taken_0x3c40e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C40E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C40E4u;
            // 0x3c40e8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c40e4) {
            ctx->pc = 0x3C4104u;
            goto label_3c4104;
        }
    }
    ctx->pc = 0x3C40ECu;
label_3c40ec:
    // 0x3c40ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c40ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c40f0:
    // 0x3c40f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c40f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c40f4:
    // 0x3c40f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c40f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c40f8:
    // 0x3c40f8: 0x0  nop
    ctx->pc = 0x3c40f8u;
    // NOP
label_3c40fc:
    // 0x3c40fc: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3c40fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3c4100:
    // 0x3c4100: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x3c4100u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_3c4104:
    // 0x3c4104: 0xc0f10fc  jal         func_3C43F0
label_3c4108:
    if (ctx->pc == 0x3C4108u) {
        ctx->pc = 0x3C4108u;
            // 0x3c4108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C410Cu;
        goto label_3c410c;
    }
    ctx->pc = 0x3C4104u;
    SET_GPR_U32(ctx, 31, 0x3C410Cu);
    ctx->pc = 0x3C4108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4104u;
            // 0x3c4108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C43F0u;
    if (runtime->hasFunction(0x3C43F0u)) {
        auto targetFn = runtime->lookupFunction(0x3C43F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C410Cu; }
        if (ctx->pc != 0x3C410Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C43F0_0x3c43f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C410Cu; }
        if (ctx->pc != 0x3C410Cu) { return; }
    }
    ctx->pc = 0x3C410Cu;
label_3c410c:
    // 0x3c410c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3c410cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c4110:
    // 0x3c4110: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c4110u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c4114:
    // 0x3c4114: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c4114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3c4118:
    // 0x3c4118: 0xc0f1110  jal         func_3C4440
label_3c411c:
    if (ctx->pc == 0x3C411Cu) {
        ctx->pc = 0x3C411Cu;
            // 0x3c411c: 0x2a840  sll         $s5, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3C4120u;
        goto label_3c4120;
    }
    ctx->pc = 0x3C4118u;
    SET_GPR_U32(ctx, 31, 0x3C4120u);
    ctx->pc = 0x3C411Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4118u;
            // 0x3c411c: 0x2a840  sll         $s5, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4440u;
    if (runtime->hasFunction(0x3C4440u)) {
        auto targetFn = runtime->lookupFunction(0x3C4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4120u; }
        if (ctx->pc != 0x3C4120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4440_0x3c4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4120u; }
        if (ctx->pc != 0x3C4120u) { return; }
    }
    ctx->pc = 0x3C4120u;
label_3c4120:
    // 0x3c4120: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3c4120u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c4124:
    // 0x3c4124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c4124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4128:
    // 0x3c4128: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3c4128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3c412c:
    // 0x3c412c: 0xc0f10e8  jal         func_3C43A0
label_3c4130:
    if (ctx->pc == 0x3C4130u) {
        ctx->pc = 0x3C4130u;
            // 0x3c4130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4134u;
        goto label_3c4134;
    }
    ctx->pc = 0x3C412Cu;
    SET_GPR_U32(ctx, 31, 0x3C4134u);
    ctx->pc = 0x3C4130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C412Cu;
            // 0x3c4130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C43A0u;
    if (runtime->hasFunction(0x3C43A0u)) {
        auto targetFn = runtime->lookupFunction(0x3C43A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4134u; }
        if (ctx->pc != 0x3C4134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C43A0_0x3c43a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4134u; }
        if (ctx->pc != 0x3C4134u) { return; }
    }
    ctx->pc = 0x3C4134u;
label_3c4134:
    // 0x3c4134: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3c4134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3c4138:
    // 0x3c4138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c4138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c413c:
    // 0x3c413c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c413cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c4140:
    // 0x3c4140: 0x0  nop
    ctx->pc = 0x3c4140u;
    // NOP
label_3c4144:
    // 0x3c4144: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x3c4144u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3c4148:
    // 0x3c4148: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3c4148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3c414c:
    // 0x3c414c: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x3c414cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c4150:
    // 0x3c4150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c4150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c4154:
    // 0x3c4154: 0x0  nop
    ctx->pc = 0x3c4154u;
    // NOP
label_3c4158:
    // 0x3c4158: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x3c4158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3c415c:
    // 0x3c415c: 0xc0f10e8  jal         func_3C43A0
label_3c4160:
    if (ctx->pc == 0x3C4160u) {
        ctx->pc = 0x3C4160u;
            // 0x3c4160: 0x46020500  add.s       $f20, $f0, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x3C4164u;
        goto label_3c4164;
    }
    ctx->pc = 0x3C415Cu;
    SET_GPR_U32(ctx, 31, 0x3C4164u);
    ctx->pc = 0x3C4160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C415Cu;
            // 0x3c4160: 0x46020500  add.s       $f20, $f0, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C43A0u;
    if (runtime->hasFunction(0x3C43A0u)) {
        auto targetFn = runtime->lookupFunction(0x3C43A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4164u; }
        if (ctx->pc != 0x3C4164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C43A0_0x3c43a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4164u; }
        if (ctx->pc != 0x3C4164u) { return; }
    }
    ctx->pc = 0x3C4164u;
label_3c4164:
    // 0x3c4164: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x3c4164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_3c4168:
    // 0x3c4168: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x3c4168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
label_3c416c:
    // 0x3c416c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c416cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c4170:
    // 0x3c4170: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3c4170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3c4174:
    // 0x3c4174: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x3c4174u;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3c4178:
    // 0x3c4178: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c4178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c417c:
    // 0x3c417c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x3c417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_3c4180:
    // 0x3c4180: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3c4180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4184:
    // 0x3c4184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c4184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4188:
    // 0x3c4188: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c418c:
    // 0x3c418c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x3c418cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3c4190:
    // 0x3c4190: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x3c4190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_3c4194:
    // 0x3c4194: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3c4194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c4198:
    // 0x3c4198: 0xc0f10b4  jal         func_3C42D0
label_3c419c:
    if (ctx->pc == 0x3C419Cu) {
        ctx->pc = 0x3C419Cu;
            // 0x3c419c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3C41A0u;
        goto label_3c41a0;
    }
    ctx->pc = 0x3C4198u;
    SET_GPR_U32(ctx, 31, 0x3C41A0u);
    ctx->pc = 0x3C419Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4198u;
            // 0x3c419c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C42D0u;
    if (runtime->hasFunction(0x3C42D0u)) {
        auto targetFn = runtime->lookupFunction(0x3C42D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C41A0u; }
        if (ctx->pc != 0x3C41A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C42D0_0x3c42d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C41A0u; }
        if (ctx->pc != 0x3C41A0u) { return; }
    }
    ctx->pc = 0x3C41A0u;
label_3c41a0:
    // 0x3c41a0: 0xc0f1110  jal         func_3C4440
label_3c41a4:
    if (ctx->pc == 0x3C41A4u) {
        ctx->pc = 0x3C41A8u;
        goto label_3c41a8;
    }
    ctx->pc = 0x3C41A0u;
    SET_GPR_U32(ctx, 31, 0x3C41A8u);
    ctx->pc = 0x3C4440u;
    if (runtime->hasFunction(0x3C4440u)) {
        auto targetFn = runtime->lookupFunction(0x3C4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C41A8u; }
        if (ctx->pc != 0x3C41A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4440_0x3c4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C41A8u; }
        if (ctx->pc != 0x3C41A8u) { return; }
    }
    ctx->pc = 0x3C41A8u;
label_3c41a8:
    // 0x3c41a8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x3c41a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3c41ac:
    // 0x3c41ac: 0xc0f110c  jal         func_3C4430
label_3c41b0:
    if (ctx->pc == 0x3C41B0u) {
        ctx->pc = 0x3C41B0u;
            // 0x3c41b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3C41B4u;
        goto label_3c41b4;
    }
    ctx->pc = 0x3C41ACu;
    SET_GPR_U32(ctx, 31, 0x3C41B4u);
    ctx->pc = 0x3C41B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C41ACu;
            // 0x3c41b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4430u;
    if (runtime->hasFunction(0x3C4430u)) {
        auto targetFn = runtime->lookupFunction(0x3C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C41B4u; }
        if (ctx->pc != 0x3C41B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4430_0x3c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C41B4u; }
        if (ctx->pc != 0x3C41B4u) { return; }
    }
    ctx->pc = 0x3C41B4u;
label_3c41b4:
    // 0x3c41b4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3c41b4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c41b8:
    // 0x3c41b8: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x3c41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_3c41bc:
    // 0x3c41bc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3c41bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3c41c0:
    // 0x3c41c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c41c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c41c4:
    // 0x3c41c4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x3c41c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c41c8:
    // 0x3c41c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c41c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c41cc:
    // 0x3c41cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c41ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c41d0:
    // 0x3c41d0: 0x0  nop
    ctx->pc = 0x3c41d0u;
    // NOP
label_3c41d4:
    // 0x3c41d4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3c41d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3c41d8:
    // 0x3c41d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3c41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c41dc:
    // 0x3c41dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c41dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c41e0:
    // 0x3c41e0: 0xc0f10e8  jal         func_3C43A0
label_3c41e4:
    if (ctx->pc == 0x3C41E4u) {
        ctx->pc = 0x3C41E4u;
            // 0x3c41e4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C41E8u;
        goto label_3c41e8;
    }
    ctx->pc = 0x3C41E0u;
    SET_GPR_U32(ctx, 31, 0x3C41E8u);
    ctx->pc = 0x3C41E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C41E0u;
            // 0x3c41e4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C43A0u;
    if (runtime->hasFunction(0x3C43A0u)) {
        auto targetFn = runtime->lookupFunction(0x3C43A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C41E8u; }
        if (ctx->pc != 0x3C41E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C43A0_0x3c43a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C41E8u; }
        if (ctx->pc != 0x3C41E8u) { return; }
    }
    ctx->pc = 0x3C41E8u;
label_3c41e8:
    // 0x3c41e8: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x3c41e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3c41ec:
    // 0x3c41ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c41f0:
    // 0x3c41f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c41f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c41f4:
    // 0x3c41f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c41f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c41f8:
    // 0x3c41f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c41f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c41fc:
    // 0x3c41fc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3c41fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c4200:
    // 0x3c4200: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x3c4200u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_3c4204:
    // 0x3c4204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4208:
    // 0x3c4208: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3c4208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3c420c:
    // 0x3c420c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c420cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4210:
    // 0x3c4210: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c4210u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4214:
    // 0x3c4214: 0xc0f1094  jal         func_3C4250
label_3c4218:
    if (ctx->pc == 0x3C4218u) {
        ctx->pc = 0x3C4218u;
            // 0x3c4218: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C421Cu;
        goto label_3c421c;
    }
    ctx->pc = 0x3C4214u;
    SET_GPR_U32(ctx, 31, 0x3C421Cu);
    ctx->pc = 0x3C4218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4214u;
            // 0x3c4218: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4250u;
    if (runtime->hasFunction(0x3C4250u)) {
        auto targetFn = runtime->lookupFunction(0x3C4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C421Cu; }
        if (ctx->pc != 0x3C421Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4250_0x3c4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C421Cu; }
        if (ctx->pc != 0x3C421Cu) { return; }
    }
    ctx->pc = 0x3C421Cu;
label_3c421c:
    // 0x3c421c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3c421cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3c4220:
    // 0x3c4220: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c4220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c4224:
    // 0x3c4224: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c4224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c4228:
    // 0x3c4228: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c4228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c422c:
    // 0x3c422c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c422cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4230:
    // 0x3c4230: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c4230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c4234:
    // 0x3c4234: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c4234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c4238:
    // 0x3c4238: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c4238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c423c:
    // 0x3c423c: 0x3e00008  jr          $ra
label_3c4240:
    if (ctx->pc == 0x3C4240u) {
        ctx->pc = 0x3C4240u;
            // 0x3c4240: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3C4244u;
        goto label_3c4244;
    }
    ctx->pc = 0x3C423Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C423Cu;
            // 0x3c4240: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C4244u;
label_3c4244:
    // 0x3c4244: 0x0  nop
    ctx->pc = 0x3c4244u;
    // NOP
label_3c4248:
    // 0x3c4248: 0x0  nop
    ctx->pc = 0x3c4248u;
    // NOP
label_3c424c:
    // 0x3c424c: 0x0  nop
    ctx->pc = 0x3c424cu;
    // NOP
}
