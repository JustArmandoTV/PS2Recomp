#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E6D70
// Address: 0x3e6d70 - 0x3e7200
void sub_003E6D70_0x3e6d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6D70_0x3e6d70");
#endif

    switch (ctx->pc) {
        case 0x3e6d70u: goto label_3e6d70;
        case 0x3e6d74u: goto label_3e6d74;
        case 0x3e6d78u: goto label_3e6d78;
        case 0x3e6d7cu: goto label_3e6d7c;
        case 0x3e6d80u: goto label_3e6d80;
        case 0x3e6d84u: goto label_3e6d84;
        case 0x3e6d88u: goto label_3e6d88;
        case 0x3e6d8cu: goto label_3e6d8c;
        case 0x3e6d90u: goto label_3e6d90;
        case 0x3e6d94u: goto label_3e6d94;
        case 0x3e6d98u: goto label_3e6d98;
        case 0x3e6d9cu: goto label_3e6d9c;
        case 0x3e6da0u: goto label_3e6da0;
        case 0x3e6da4u: goto label_3e6da4;
        case 0x3e6da8u: goto label_3e6da8;
        case 0x3e6dacu: goto label_3e6dac;
        case 0x3e6db0u: goto label_3e6db0;
        case 0x3e6db4u: goto label_3e6db4;
        case 0x3e6db8u: goto label_3e6db8;
        case 0x3e6dbcu: goto label_3e6dbc;
        case 0x3e6dc0u: goto label_3e6dc0;
        case 0x3e6dc4u: goto label_3e6dc4;
        case 0x3e6dc8u: goto label_3e6dc8;
        case 0x3e6dccu: goto label_3e6dcc;
        case 0x3e6dd0u: goto label_3e6dd0;
        case 0x3e6dd4u: goto label_3e6dd4;
        case 0x3e6dd8u: goto label_3e6dd8;
        case 0x3e6ddcu: goto label_3e6ddc;
        case 0x3e6de0u: goto label_3e6de0;
        case 0x3e6de4u: goto label_3e6de4;
        case 0x3e6de8u: goto label_3e6de8;
        case 0x3e6decu: goto label_3e6dec;
        case 0x3e6df0u: goto label_3e6df0;
        case 0x3e6df4u: goto label_3e6df4;
        case 0x3e6df8u: goto label_3e6df8;
        case 0x3e6dfcu: goto label_3e6dfc;
        case 0x3e6e00u: goto label_3e6e00;
        case 0x3e6e04u: goto label_3e6e04;
        case 0x3e6e08u: goto label_3e6e08;
        case 0x3e6e0cu: goto label_3e6e0c;
        case 0x3e6e10u: goto label_3e6e10;
        case 0x3e6e14u: goto label_3e6e14;
        case 0x3e6e18u: goto label_3e6e18;
        case 0x3e6e1cu: goto label_3e6e1c;
        case 0x3e6e20u: goto label_3e6e20;
        case 0x3e6e24u: goto label_3e6e24;
        case 0x3e6e28u: goto label_3e6e28;
        case 0x3e6e2cu: goto label_3e6e2c;
        case 0x3e6e30u: goto label_3e6e30;
        case 0x3e6e34u: goto label_3e6e34;
        case 0x3e6e38u: goto label_3e6e38;
        case 0x3e6e3cu: goto label_3e6e3c;
        case 0x3e6e40u: goto label_3e6e40;
        case 0x3e6e44u: goto label_3e6e44;
        case 0x3e6e48u: goto label_3e6e48;
        case 0x3e6e4cu: goto label_3e6e4c;
        case 0x3e6e50u: goto label_3e6e50;
        case 0x3e6e54u: goto label_3e6e54;
        case 0x3e6e58u: goto label_3e6e58;
        case 0x3e6e5cu: goto label_3e6e5c;
        case 0x3e6e60u: goto label_3e6e60;
        case 0x3e6e64u: goto label_3e6e64;
        case 0x3e6e68u: goto label_3e6e68;
        case 0x3e6e6cu: goto label_3e6e6c;
        case 0x3e6e70u: goto label_3e6e70;
        case 0x3e6e74u: goto label_3e6e74;
        case 0x3e6e78u: goto label_3e6e78;
        case 0x3e6e7cu: goto label_3e6e7c;
        case 0x3e6e80u: goto label_3e6e80;
        case 0x3e6e84u: goto label_3e6e84;
        case 0x3e6e88u: goto label_3e6e88;
        case 0x3e6e8cu: goto label_3e6e8c;
        case 0x3e6e90u: goto label_3e6e90;
        case 0x3e6e94u: goto label_3e6e94;
        case 0x3e6e98u: goto label_3e6e98;
        case 0x3e6e9cu: goto label_3e6e9c;
        case 0x3e6ea0u: goto label_3e6ea0;
        case 0x3e6ea4u: goto label_3e6ea4;
        case 0x3e6ea8u: goto label_3e6ea8;
        case 0x3e6eacu: goto label_3e6eac;
        case 0x3e6eb0u: goto label_3e6eb0;
        case 0x3e6eb4u: goto label_3e6eb4;
        case 0x3e6eb8u: goto label_3e6eb8;
        case 0x3e6ebcu: goto label_3e6ebc;
        case 0x3e6ec0u: goto label_3e6ec0;
        case 0x3e6ec4u: goto label_3e6ec4;
        case 0x3e6ec8u: goto label_3e6ec8;
        case 0x3e6eccu: goto label_3e6ecc;
        case 0x3e6ed0u: goto label_3e6ed0;
        case 0x3e6ed4u: goto label_3e6ed4;
        case 0x3e6ed8u: goto label_3e6ed8;
        case 0x3e6edcu: goto label_3e6edc;
        case 0x3e6ee0u: goto label_3e6ee0;
        case 0x3e6ee4u: goto label_3e6ee4;
        case 0x3e6ee8u: goto label_3e6ee8;
        case 0x3e6eecu: goto label_3e6eec;
        case 0x3e6ef0u: goto label_3e6ef0;
        case 0x3e6ef4u: goto label_3e6ef4;
        case 0x3e6ef8u: goto label_3e6ef8;
        case 0x3e6efcu: goto label_3e6efc;
        case 0x3e6f00u: goto label_3e6f00;
        case 0x3e6f04u: goto label_3e6f04;
        case 0x3e6f08u: goto label_3e6f08;
        case 0x3e6f0cu: goto label_3e6f0c;
        case 0x3e6f10u: goto label_3e6f10;
        case 0x3e6f14u: goto label_3e6f14;
        case 0x3e6f18u: goto label_3e6f18;
        case 0x3e6f1cu: goto label_3e6f1c;
        case 0x3e6f20u: goto label_3e6f20;
        case 0x3e6f24u: goto label_3e6f24;
        case 0x3e6f28u: goto label_3e6f28;
        case 0x3e6f2cu: goto label_3e6f2c;
        case 0x3e6f30u: goto label_3e6f30;
        case 0x3e6f34u: goto label_3e6f34;
        case 0x3e6f38u: goto label_3e6f38;
        case 0x3e6f3cu: goto label_3e6f3c;
        case 0x3e6f40u: goto label_3e6f40;
        case 0x3e6f44u: goto label_3e6f44;
        case 0x3e6f48u: goto label_3e6f48;
        case 0x3e6f4cu: goto label_3e6f4c;
        case 0x3e6f50u: goto label_3e6f50;
        case 0x3e6f54u: goto label_3e6f54;
        case 0x3e6f58u: goto label_3e6f58;
        case 0x3e6f5cu: goto label_3e6f5c;
        case 0x3e6f60u: goto label_3e6f60;
        case 0x3e6f64u: goto label_3e6f64;
        case 0x3e6f68u: goto label_3e6f68;
        case 0x3e6f6cu: goto label_3e6f6c;
        case 0x3e6f70u: goto label_3e6f70;
        case 0x3e6f74u: goto label_3e6f74;
        case 0x3e6f78u: goto label_3e6f78;
        case 0x3e6f7cu: goto label_3e6f7c;
        case 0x3e6f80u: goto label_3e6f80;
        case 0x3e6f84u: goto label_3e6f84;
        case 0x3e6f88u: goto label_3e6f88;
        case 0x3e6f8cu: goto label_3e6f8c;
        case 0x3e6f90u: goto label_3e6f90;
        case 0x3e6f94u: goto label_3e6f94;
        case 0x3e6f98u: goto label_3e6f98;
        case 0x3e6f9cu: goto label_3e6f9c;
        case 0x3e6fa0u: goto label_3e6fa0;
        case 0x3e6fa4u: goto label_3e6fa4;
        case 0x3e6fa8u: goto label_3e6fa8;
        case 0x3e6facu: goto label_3e6fac;
        case 0x3e6fb0u: goto label_3e6fb0;
        case 0x3e6fb4u: goto label_3e6fb4;
        case 0x3e6fb8u: goto label_3e6fb8;
        case 0x3e6fbcu: goto label_3e6fbc;
        case 0x3e6fc0u: goto label_3e6fc0;
        case 0x3e6fc4u: goto label_3e6fc4;
        case 0x3e6fc8u: goto label_3e6fc8;
        case 0x3e6fccu: goto label_3e6fcc;
        case 0x3e6fd0u: goto label_3e6fd0;
        case 0x3e6fd4u: goto label_3e6fd4;
        case 0x3e6fd8u: goto label_3e6fd8;
        case 0x3e6fdcu: goto label_3e6fdc;
        case 0x3e6fe0u: goto label_3e6fe0;
        case 0x3e6fe4u: goto label_3e6fe4;
        case 0x3e6fe8u: goto label_3e6fe8;
        case 0x3e6fecu: goto label_3e6fec;
        case 0x3e6ff0u: goto label_3e6ff0;
        case 0x3e6ff4u: goto label_3e6ff4;
        case 0x3e6ff8u: goto label_3e6ff8;
        case 0x3e6ffcu: goto label_3e6ffc;
        case 0x3e7000u: goto label_3e7000;
        case 0x3e7004u: goto label_3e7004;
        case 0x3e7008u: goto label_3e7008;
        case 0x3e700cu: goto label_3e700c;
        case 0x3e7010u: goto label_3e7010;
        case 0x3e7014u: goto label_3e7014;
        case 0x3e7018u: goto label_3e7018;
        case 0x3e701cu: goto label_3e701c;
        case 0x3e7020u: goto label_3e7020;
        case 0x3e7024u: goto label_3e7024;
        case 0x3e7028u: goto label_3e7028;
        case 0x3e702cu: goto label_3e702c;
        case 0x3e7030u: goto label_3e7030;
        case 0x3e7034u: goto label_3e7034;
        case 0x3e7038u: goto label_3e7038;
        case 0x3e703cu: goto label_3e703c;
        case 0x3e7040u: goto label_3e7040;
        case 0x3e7044u: goto label_3e7044;
        case 0x3e7048u: goto label_3e7048;
        case 0x3e704cu: goto label_3e704c;
        case 0x3e7050u: goto label_3e7050;
        case 0x3e7054u: goto label_3e7054;
        case 0x3e7058u: goto label_3e7058;
        case 0x3e705cu: goto label_3e705c;
        case 0x3e7060u: goto label_3e7060;
        case 0x3e7064u: goto label_3e7064;
        case 0x3e7068u: goto label_3e7068;
        case 0x3e706cu: goto label_3e706c;
        case 0x3e7070u: goto label_3e7070;
        case 0x3e7074u: goto label_3e7074;
        case 0x3e7078u: goto label_3e7078;
        case 0x3e707cu: goto label_3e707c;
        case 0x3e7080u: goto label_3e7080;
        case 0x3e7084u: goto label_3e7084;
        case 0x3e7088u: goto label_3e7088;
        case 0x3e708cu: goto label_3e708c;
        case 0x3e7090u: goto label_3e7090;
        case 0x3e7094u: goto label_3e7094;
        case 0x3e7098u: goto label_3e7098;
        case 0x3e709cu: goto label_3e709c;
        case 0x3e70a0u: goto label_3e70a0;
        case 0x3e70a4u: goto label_3e70a4;
        case 0x3e70a8u: goto label_3e70a8;
        case 0x3e70acu: goto label_3e70ac;
        case 0x3e70b0u: goto label_3e70b0;
        case 0x3e70b4u: goto label_3e70b4;
        case 0x3e70b8u: goto label_3e70b8;
        case 0x3e70bcu: goto label_3e70bc;
        case 0x3e70c0u: goto label_3e70c0;
        case 0x3e70c4u: goto label_3e70c4;
        case 0x3e70c8u: goto label_3e70c8;
        case 0x3e70ccu: goto label_3e70cc;
        case 0x3e70d0u: goto label_3e70d0;
        case 0x3e70d4u: goto label_3e70d4;
        case 0x3e70d8u: goto label_3e70d8;
        case 0x3e70dcu: goto label_3e70dc;
        case 0x3e70e0u: goto label_3e70e0;
        case 0x3e70e4u: goto label_3e70e4;
        case 0x3e70e8u: goto label_3e70e8;
        case 0x3e70ecu: goto label_3e70ec;
        case 0x3e70f0u: goto label_3e70f0;
        case 0x3e70f4u: goto label_3e70f4;
        case 0x3e70f8u: goto label_3e70f8;
        case 0x3e70fcu: goto label_3e70fc;
        case 0x3e7100u: goto label_3e7100;
        case 0x3e7104u: goto label_3e7104;
        case 0x3e7108u: goto label_3e7108;
        case 0x3e710cu: goto label_3e710c;
        case 0x3e7110u: goto label_3e7110;
        case 0x3e7114u: goto label_3e7114;
        case 0x3e7118u: goto label_3e7118;
        case 0x3e711cu: goto label_3e711c;
        case 0x3e7120u: goto label_3e7120;
        case 0x3e7124u: goto label_3e7124;
        case 0x3e7128u: goto label_3e7128;
        case 0x3e712cu: goto label_3e712c;
        case 0x3e7130u: goto label_3e7130;
        case 0x3e7134u: goto label_3e7134;
        case 0x3e7138u: goto label_3e7138;
        case 0x3e713cu: goto label_3e713c;
        case 0x3e7140u: goto label_3e7140;
        case 0x3e7144u: goto label_3e7144;
        case 0x3e7148u: goto label_3e7148;
        case 0x3e714cu: goto label_3e714c;
        case 0x3e7150u: goto label_3e7150;
        case 0x3e7154u: goto label_3e7154;
        case 0x3e7158u: goto label_3e7158;
        case 0x3e715cu: goto label_3e715c;
        case 0x3e7160u: goto label_3e7160;
        case 0x3e7164u: goto label_3e7164;
        case 0x3e7168u: goto label_3e7168;
        case 0x3e716cu: goto label_3e716c;
        case 0x3e7170u: goto label_3e7170;
        case 0x3e7174u: goto label_3e7174;
        case 0x3e7178u: goto label_3e7178;
        case 0x3e717cu: goto label_3e717c;
        case 0x3e7180u: goto label_3e7180;
        case 0x3e7184u: goto label_3e7184;
        case 0x3e7188u: goto label_3e7188;
        case 0x3e718cu: goto label_3e718c;
        case 0x3e7190u: goto label_3e7190;
        case 0x3e7194u: goto label_3e7194;
        case 0x3e7198u: goto label_3e7198;
        case 0x3e719cu: goto label_3e719c;
        case 0x3e71a0u: goto label_3e71a0;
        case 0x3e71a4u: goto label_3e71a4;
        case 0x3e71a8u: goto label_3e71a8;
        case 0x3e71acu: goto label_3e71ac;
        case 0x3e71b0u: goto label_3e71b0;
        case 0x3e71b4u: goto label_3e71b4;
        case 0x3e71b8u: goto label_3e71b8;
        case 0x3e71bcu: goto label_3e71bc;
        case 0x3e71c0u: goto label_3e71c0;
        case 0x3e71c4u: goto label_3e71c4;
        case 0x3e71c8u: goto label_3e71c8;
        case 0x3e71ccu: goto label_3e71cc;
        case 0x3e71d0u: goto label_3e71d0;
        case 0x3e71d4u: goto label_3e71d4;
        case 0x3e71d8u: goto label_3e71d8;
        case 0x3e71dcu: goto label_3e71dc;
        case 0x3e71e0u: goto label_3e71e0;
        case 0x3e71e4u: goto label_3e71e4;
        case 0x3e71e8u: goto label_3e71e8;
        case 0x3e71ecu: goto label_3e71ec;
        case 0x3e71f0u: goto label_3e71f0;
        case 0x3e71f4u: goto label_3e71f4;
        case 0x3e71f8u: goto label_3e71f8;
        case 0x3e71fcu: goto label_3e71fc;
        default: break;
    }

    ctx->pc = 0x3e6d70u;

label_3e6d70:
    // 0x3e6d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e6d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e6d74:
    // 0x3e6d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e6d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e6d78:
    // 0x3e6d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e6d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e6d7c:
    // 0x3e6d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e6d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e6d80:
    // 0x3e6d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e6d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e6d84:
    // 0x3e6d84: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_3e6d88:
    if (ctx->pc == 0x3E6D88u) {
        ctx->pc = 0x3E6D88u;
            // 0x3e6d88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6D8Cu;
        goto label_3e6d8c;
    }
    ctx->pc = 0x3E6D84u;
    {
        const bool branch_taken_0x3e6d84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6D84u;
            // 0x3e6d88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6d84) {
            ctx->pc = 0x3E6EB8u;
            goto label_3e6eb8;
        }
    }
    ctx->pc = 0x3E6D8Cu;
label_3e6d8c:
    // 0x3e6d8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e6d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e6d90:
    // 0x3e6d90: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e6d94:
    // 0x3e6d94: 0x24639d40  addiu       $v1, $v1, -0x62C0
    ctx->pc = 0x3e6d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942016));
label_3e6d98:
    // 0x3e6d98: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3e6d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3e6d9c:
    // 0x3e6d9c: 0x24429d78  addiu       $v0, $v0, -0x6288
    ctx->pc = 0x3e6d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942072));
label_3e6da0:
    // 0x3e6da0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3e6da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3e6da4:
    // 0x3e6da4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3e6da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3e6da8:
    // 0x3e6da8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3e6da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_3e6dac:
    // 0x3e6dac: 0xc0407c0  jal         func_101F00
label_3e6db0:
    if (ctx->pc == 0x3E6DB0u) {
        ctx->pc = 0x3E6DB0u;
            // 0x3e6db0: 0x24a56ed0  addiu       $a1, $a1, 0x6ED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28368));
        ctx->pc = 0x3E6DB4u;
        goto label_3e6db4;
    }
    ctx->pc = 0x3E6DACu;
    SET_GPR_U32(ctx, 31, 0x3E6DB4u);
    ctx->pc = 0x3E6DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6DACu;
            // 0x3e6db0: 0x24a56ed0  addiu       $a1, $a1, 0x6ED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6DB4u; }
        if (ctx->pc != 0x3E6DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6DB4u; }
        if (ctx->pc != 0x3E6DB4u) { return; }
    }
    ctx->pc = 0x3E6DB4u;
label_3e6db4:
    // 0x3e6db4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x3e6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3e6db8:
    // 0x3e6db8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3e6dbc:
    if (ctx->pc == 0x3E6DBCu) {
        ctx->pc = 0x3E6DBCu;
            // 0x3e6dbc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3E6DC0u;
        goto label_3e6dc0;
    }
    ctx->pc = 0x3E6DB8u;
    {
        const bool branch_taken_0x3e6db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6db8) {
            ctx->pc = 0x3E6DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6DB8u;
            // 0x3e6dbc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6DCCu;
            goto label_3e6dcc;
        }
    }
    ctx->pc = 0x3E6DC0u;
label_3e6dc0:
    // 0x3e6dc0: 0xc07507c  jal         func_1D41F0
label_3e6dc4:
    if (ctx->pc == 0x3E6DC4u) {
        ctx->pc = 0x3E6DC4u;
            // 0x3e6dc4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3E6DC8u;
        goto label_3e6dc8;
    }
    ctx->pc = 0x3E6DC0u;
    SET_GPR_U32(ctx, 31, 0x3E6DC8u);
    ctx->pc = 0x3E6DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6DC0u;
            // 0x3e6dc4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6DC8u; }
        if (ctx->pc != 0x3E6DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6DC8u; }
        if (ctx->pc != 0x3E6DC8u) { return; }
    }
    ctx->pc = 0x3E6DC8u;
label_3e6dc8:
    // 0x3e6dc8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3e6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3e6dcc:
    // 0x3e6dcc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3e6dd0:
    if (ctx->pc == 0x3E6DD0u) {
        ctx->pc = 0x3E6DD0u;
            // 0x3e6dd0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3E6DD4u;
        goto label_3e6dd4;
    }
    ctx->pc = 0x3E6DCCu;
    {
        const bool branch_taken_0x3e6dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6dcc) {
            ctx->pc = 0x3E6DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6DCCu;
            // 0x3e6dd0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6DFCu;
            goto label_3e6dfc;
        }
    }
    ctx->pc = 0x3E6DD4u;
label_3e6dd4:
    // 0x3e6dd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3e6dd8:
    if (ctx->pc == 0x3E6DD8u) {
        ctx->pc = 0x3E6DDCu;
        goto label_3e6ddc;
    }
    ctx->pc = 0x3E6DD4u;
    {
        const bool branch_taken_0x3e6dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6dd4) {
            ctx->pc = 0x3E6DF8u;
            goto label_3e6df8;
        }
    }
    ctx->pc = 0x3E6DDCu;
label_3e6ddc:
    // 0x3e6ddc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e6de0:
    if (ctx->pc == 0x3E6DE0u) {
        ctx->pc = 0x3E6DE4u;
        goto label_3e6de4;
    }
    ctx->pc = 0x3E6DDCu;
    {
        const bool branch_taken_0x3e6ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6ddc) {
            ctx->pc = 0x3E6DF8u;
            goto label_3e6df8;
        }
    }
    ctx->pc = 0x3E6DE4u;
label_3e6de4:
    // 0x3e6de4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3e6de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3e6de8:
    // 0x3e6de8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3e6dec:
    if (ctx->pc == 0x3E6DECu) {
        ctx->pc = 0x3E6DF0u;
        goto label_3e6df0;
    }
    ctx->pc = 0x3E6DE8u;
    {
        const bool branch_taken_0x3e6de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6de8) {
            ctx->pc = 0x3E6DF8u;
            goto label_3e6df8;
        }
    }
    ctx->pc = 0x3E6DF0u;
label_3e6df0:
    // 0x3e6df0: 0xc0400a8  jal         func_1002A0
label_3e6df4:
    if (ctx->pc == 0x3E6DF4u) {
        ctx->pc = 0x3E6DF8u;
        goto label_3e6df8;
    }
    ctx->pc = 0x3E6DF0u;
    SET_GPR_U32(ctx, 31, 0x3E6DF8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6DF8u; }
        if (ctx->pc != 0x3E6DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6DF8u; }
        if (ctx->pc != 0x3E6DF8u) { return; }
    }
    ctx->pc = 0x3E6DF8u;
label_3e6df8:
    // 0x3e6df8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3e6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3e6dfc:
    // 0x3e6dfc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3e6e00:
    if (ctx->pc == 0x3E6E00u) {
        ctx->pc = 0x3E6E00u;
            // 0x3e6e00: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3E6E04u;
        goto label_3e6e04;
    }
    ctx->pc = 0x3E6DFCu;
    {
        const bool branch_taken_0x3e6dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6dfc) {
            ctx->pc = 0x3E6E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6DFCu;
            // 0x3e6e00: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6E2Cu;
            goto label_3e6e2c;
        }
    }
    ctx->pc = 0x3E6E04u;
label_3e6e04:
    // 0x3e6e04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3e6e08:
    if (ctx->pc == 0x3E6E08u) {
        ctx->pc = 0x3E6E0Cu;
        goto label_3e6e0c;
    }
    ctx->pc = 0x3E6E04u;
    {
        const bool branch_taken_0x3e6e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6e04) {
            ctx->pc = 0x3E6E28u;
            goto label_3e6e28;
        }
    }
    ctx->pc = 0x3E6E0Cu;
label_3e6e0c:
    // 0x3e6e0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e6e10:
    if (ctx->pc == 0x3E6E10u) {
        ctx->pc = 0x3E6E14u;
        goto label_3e6e14;
    }
    ctx->pc = 0x3E6E0Cu;
    {
        const bool branch_taken_0x3e6e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6e0c) {
            ctx->pc = 0x3E6E28u;
            goto label_3e6e28;
        }
    }
    ctx->pc = 0x3E6E14u;
label_3e6e14:
    // 0x3e6e14: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3e6e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3e6e18:
    // 0x3e6e18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3e6e1c:
    if (ctx->pc == 0x3E6E1Cu) {
        ctx->pc = 0x3E6E20u;
        goto label_3e6e20;
    }
    ctx->pc = 0x3E6E18u;
    {
        const bool branch_taken_0x3e6e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6e18) {
            ctx->pc = 0x3E6E28u;
            goto label_3e6e28;
        }
    }
    ctx->pc = 0x3E6E20u;
label_3e6e20:
    // 0x3e6e20: 0xc0400a8  jal         func_1002A0
label_3e6e24:
    if (ctx->pc == 0x3E6E24u) {
        ctx->pc = 0x3E6E28u;
        goto label_3e6e28;
    }
    ctx->pc = 0x3E6E20u;
    SET_GPR_U32(ctx, 31, 0x3E6E28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6E28u; }
        if (ctx->pc != 0x3E6E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6E28u; }
        if (ctx->pc != 0x3E6E28u) { return; }
    }
    ctx->pc = 0x3E6E28u;
label_3e6e28:
    // 0x3e6e28: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x3e6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3e6e2c:
    // 0x3e6e2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3e6e30:
    if (ctx->pc == 0x3E6E30u) {
        ctx->pc = 0x3E6E34u;
        goto label_3e6e34;
    }
    ctx->pc = 0x3E6E2Cu;
    {
        const bool branch_taken_0x3e6e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6e2c) {
            ctx->pc = 0x3E6E48u;
            goto label_3e6e48;
        }
    }
    ctx->pc = 0x3E6E34u;
label_3e6e34:
    // 0x3e6e34: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e6e38:
    // 0x3e6e38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e6e3c:
    // 0x3e6e3c: 0x24639d30  addiu       $v1, $v1, -0x62D0
    ctx->pc = 0x3e6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942000));
label_3e6e40:
    // 0x3e6e40: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3e6e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_3e6e44:
    // 0x3e6e44: 0xac406f00  sw          $zero, 0x6F00($v0)
    ctx->pc = 0x3e6e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28416), GPR_U32(ctx, 0));
label_3e6e48:
    // 0x3e6e48: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_3e6e4c:
    if (ctx->pc == 0x3E6E4Cu) {
        ctx->pc = 0x3E6E4Cu;
            // 0x3e6e4c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3E6E50u;
        goto label_3e6e50;
    }
    ctx->pc = 0x3E6E48u;
    {
        const bool branch_taken_0x3e6e48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6e48) {
            ctx->pc = 0x3E6E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6E48u;
            // 0x3e6e4c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6EA4u;
            goto label_3e6ea4;
        }
    }
    ctx->pc = 0x3E6E50u;
label_3e6e50:
    // 0x3e6e50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3e6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3e6e54:
    // 0x3e6e54: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3e6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3e6e58:
    // 0x3e6e58: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3e6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3e6e5c:
    // 0x3e6e5c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x3e6e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_3e6e60:
    // 0x3e6e60: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3e6e64:
    if (ctx->pc == 0x3E6E64u) {
        ctx->pc = 0x3E6E64u;
            // 0x3e6e64: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3E6E68u;
        goto label_3e6e68;
    }
    ctx->pc = 0x3E6E60u;
    {
        const bool branch_taken_0x3e6e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6e60) {
            ctx->pc = 0x3E6E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6E60u;
            // 0x3e6e64: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6E7Cu;
            goto label_3e6e7c;
        }
    }
    ctx->pc = 0x3E6E68u;
label_3e6e68:
    // 0x3e6e68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e6e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e6e6c:
    // 0x3e6e6c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e6e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e6e70:
    // 0x3e6e70: 0x320f809  jalr        $t9
label_3e6e74:
    if (ctx->pc == 0x3E6E74u) {
        ctx->pc = 0x3E6E74u;
            // 0x3e6e74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E6E78u;
        goto label_3e6e78;
    }
    ctx->pc = 0x3E6E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E6E78u);
        ctx->pc = 0x3E6E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6E70u;
            // 0x3e6e74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E6E78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E6E78u; }
            if (ctx->pc != 0x3E6E78u) { return; }
        }
        }
    }
    ctx->pc = 0x3E6E78u;
label_3e6e78:
    // 0x3e6e78: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3e6e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3e6e7c:
    // 0x3e6e7c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3e6e80:
    if (ctx->pc == 0x3E6E80u) {
        ctx->pc = 0x3E6E80u;
            // 0x3e6e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6E84u;
        goto label_3e6e84;
    }
    ctx->pc = 0x3E6E7Cu;
    {
        const bool branch_taken_0x3e6e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6e7c) {
            ctx->pc = 0x3E6E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6E7Cu;
            // 0x3e6e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6E98u;
            goto label_3e6e98;
        }
    }
    ctx->pc = 0x3E6E84u;
label_3e6e84:
    // 0x3e6e84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e6e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e6e88:
    // 0x3e6e88: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3e6e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3e6e8c:
    // 0x3e6e8c: 0x320f809  jalr        $t9
label_3e6e90:
    if (ctx->pc == 0x3E6E90u) {
        ctx->pc = 0x3E6E90u;
            // 0x3e6e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E6E94u;
        goto label_3e6e94;
    }
    ctx->pc = 0x3E6E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E6E94u);
        ctx->pc = 0x3E6E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6E8Cu;
            // 0x3e6e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E6E94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E6E94u; }
            if (ctx->pc != 0x3E6E94u) { return; }
        }
        }
    }
    ctx->pc = 0x3E6E94u;
label_3e6e94:
    // 0x3e6e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e6e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6e98:
    // 0x3e6e98: 0xc075bf8  jal         func_1D6FE0
label_3e6e9c:
    if (ctx->pc == 0x3E6E9Cu) {
        ctx->pc = 0x3E6E9Cu;
            // 0x3e6e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6EA0u;
        goto label_3e6ea0;
    }
    ctx->pc = 0x3E6E98u;
    SET_GPR_U32(ctx, 31, 0x3E6EA0u);
    ctx->pc = 0x3E6E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6E98u;
            // 0x3e6e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6EA0u; }
        if (ctx->pc != 0x3E6EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6EA0u; }
        if (ctx->pc != 0x3E6EA0u) { return; }
    }
    ctx->pc = 0x3E6EA0u;
label_3e6ea0:
    // 0x3e6ea0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3e6ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3e6ea4:
    // 0x3e6ea4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e6ea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3e6ea8:
    // 0x3e6ea8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3e6eac:
    if (ctx->pc == 0x3E6EACu) {
        ctx->pc = 0x3E6EACu;
            // 0x3e6eac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6EB0u;
        goto label_3e6eb0;
    }
    ctx->pc = 0x3E6EA8u;
    {
        const bool branch_taken_0x3e6ea8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e6ea8) {
            ctx->pc = 0x3E6EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6EA8u;
            // 0x3e6eac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6EBCu;
            goto label_3e6ebc;
        }
    }
    ctx->pc = 0x3E6EB0u;
label_3e6eb0:
    // 0x3e6eb0: 0xc0400a8  jal         func_1002A0
label_3e6eb4:
    if (ctx->pc == 0x3E6EB4u) {
        ctx->pc = 0x3E6EB4u;
            // 0x3e6eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6EB8u;
        goto label_3e6eb8;
    }
    ctx->pc = 0x3E6EB0u;
    SET_GPR_U32(ctx, 31, 0x3E6EB8u);
    ctx->pc = 0x3E6EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6EB0u;
            // 0x3e6eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6EB8u; }
        if (ctx->pc != 0x3E6EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6EB8u; }
        if (ctx->pc != 0x3E6EB8u) { return; }
    }
    ctx->pc = 0x3E6EB8u;
label_3e6eb8:
    // 0x3e6eb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3e6eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6ebc:
    // 0x3e6ebc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e6ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e6ec0:
    // 0x3e6ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e6ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6ec4:
    // 0x3e6ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e6ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e6ec8:
    // 0x3e6ec8: 0x3e00008  jr          $ra
label_3e6ecc:
    if (ctx->pc == 0x3E6ECCu) {
        ctx->pc = 0x3E6ECCu;
            // 0x3e6ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3E6ED0u;
        goto label_3e6ed0;
    }
    ctx->pc = 0x3E6EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6EC8u;
            // 0x3e6ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6ED0u;
label_3e6ed0:
    // 0x3e6ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e6ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e6ed4:
    // 0x3e6ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e6ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e6ed8:
    // 0x3e6ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e6ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e6edc:
    // 0x3e6edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e6edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e6ee0:
    // 0x3e6ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e6ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e6ee4:
    // 0x3e6ee4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_3e6ee8:
    if (ctx->pc == 0x3E6EE8u) {
        ctx->pc = 0x3E6EE8u;
            // 0x3e6ee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6EECu;
        goto label_3e6eec;
    }
    ctx->pc = 0x3E6EE4u;
    {
        const bool branch_taken_0x3e6ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6EE4u;
            // 0x3e6ee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6ee4) {
            ctx->pc = 0x3E6F58u;
            goto label_3e6f58;
        }
    }
    ctx->pc = 0x3E6EECu;
label_3e6eec:
    // 0x3e6eec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e6eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e6ef0:
    // 0x3e6ef0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e6ef4:
    // 0x3e6ef4: 0x24639c80  addiu       $v1, $v1, -0x6380
    ctx->pc = 0x3e6ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941824));
label_3e6ef8:
    // 0x3e6ef8: 0x24429cc0  addiu       $v0, $v0, -0x6340
    ctx->pc = 0x3e6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941888));
label_3e6efc:
    // 0x3e6efc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e6efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3e6f00:
    // 0x3e6f00: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e6f04:
    // 0x3e6f04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e6f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e6f08:
    // 0x3e6f08: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3e6f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3e6f0c:
    // 0x3e6f0c: 0x320f809  jalr        $t9
label_3e6f10:
    if (ctx->pc == 0x3E6F10u) {
        ctx->pc = 0x3E6F14u;
        goto label_3e6f14;
    }
    ctx->pc = 0x3E6F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E6F14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E6F14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E6F14u; }
            if (ctx->pc != 0x3E6F14u) { return; }
        }
        }
    }
    ctx->pc = 0x3E6F14u;
label_3e6f14:
    // 0x3e6f14: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_3e6f18:
    if (ctx->pc == 0x3E6F18u) {
        ctx->pc = 0x3E6F18u;
            // 0x3e6f18: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3E6F1Cu;
        goto label_3e6f1c;
    }
    ctx->pc = 0x3E6F14u;
    {
        const bool branch_taken_0x3e6f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6f14) {
            ctx->pc = 0x3E6F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6F14u;
            // 0x3e6f18: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6F44u;
            goto label_3e6f44;
        }
    }
    ctx->pc = 0x3E6F1Cu;
label_3e6f1c:
    // 0x3e6f1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3e6f20:
    // 0x3e6f20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e6f24:
    // 0x3e6f24: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x3e6f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_3e6f28:
    // 0x3e6f28: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x3e6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_3e6f2c:
    // 0x3e6f2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e6f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3e6f30:
    // 0x3e6f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e6f34:
    // 0x3e6f34: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e6f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e6f38:
    // 0x3e6f38: 0xc0aee40  jal         func_2BB900
label_3e6f3c:
    if (ctx->pc == 0x3E6F3Cu) {
        ctx->pc = 0x3E6F3Cu;
            // 0x3e6f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F40u;
        goto label_3e6f40;
    }
    ctx->pc = 0x3E6F38u;
    SET_GPR_U32(ctx, 31, 0x3E6F40u);
    ctx->pc = 0x3E6F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6F38u;
            // 0x3e6f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6F40u; }
        if (ctx->pc != 0x3E6F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6F40u; }
        if (ctx->pc != 0x3E6F40u) { return; }
    }
    ctx->pc = 0x3E6F40u;
label_3e6f40:
    // 0x3e6f40: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3e6f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3e6f44:
    // 0x3e6f44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e6f44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3e6f48:
    // 0x3e6f48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3e6f4c:
    if (ctx->pc == 0x3E6F4Cu) {
        ctx->pc = 0x3E6F4Cu;
            // 0x3e6f4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F50u;
        goto label_3e6f50;
    }
    ctx->pc = 0x3E6F48u;
    {
        const bool branch_taken_0x3e6f48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e6f48) {
            ctx->pc = 0x3E6F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6F48u;
            // 0x3e6f4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E6F5Cu;
            goto label_3e6f5c;
        }
    }
    ctx->pc = 0x3E6F50u;
label_3e6f50:
    // 0x3e6f50: 0xc0400a8  jal         func_1002A0
label_3e6f54:
    if (ctx->pc == 0x3E6F54u) {
        ctx->pc = 0x3E6F54u;
            // 0x3e6f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F58u;
        goto label_3e6f58;
    }
    ctx->pc = 0x3E6F50u;
    SET_GPR_U32(ctx, 31, 0x3E6F58u);
    ctx->pc = 0x3E6F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6F50u;
            // 0x3e6f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6F58u; }
        if (ctx->pc != 0x3E6F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6F58u; }
        if (ctx->pc != 0x3E6F58u) { return; }
    }
    ctx->pc = 0x3E6F58u;
label_3e6f58:
    // 0x3e6f58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e6f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e6f5c:
    // 0x3e6f5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e6f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e6f60:
    // 0x3e6f60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e6f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6f64:
    // 0x3e6f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e6f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e6f68:
    // 0x3e6f68: 0x3e00008  jr          $ra
label_3e6f6c:
    if (ctx->pc == 0x3E6F6Cu) {
        ctx->pc = 0x3E6F6Cu;
            // 0x3e6f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3E6F70u;
        goto label_3e6f70;
    }
    ctx->pc = 0x3E6F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6F68u;
            // 0x3e6f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6F70u;
label_3e6f70:
    // 0x3e6f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e6f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3e6f74:
    // 0x3e6f74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e6f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3e6f78:
    // 0x3e6f78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e6f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e6f7c:
    // 0x3e6f7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e6f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e6f80:
    // 0x3e6f80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e6f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e6f84:
    // 0x3e6f84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e6f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e6f88:
    // 0x3e6f88: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x3e6f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3e6f8c:
    // 0x3e6f8c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_3e6f90:
    if (ctx->pc == 0x3E6F90u) {
        ctx->pc = 0x3E6F90u;
            // 0x3e6f90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F94u;
        goto label_3e6f94;
    }
    ctx->pc = 0x3E6F8Cu;
    {
        const bool branch_taken_0x3e6f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6F8Cu;
            // 0x3e6f90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6f8c) {
            ctx->pc = 0x3E6FC8u;
            goto label_3e6fc8;
        }
    }
    ctx->pc = 0x3E6F94u;
label_3e6f94:
    // 0x3e6f94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e6f94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e6f98:
    // 0x3e6f98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e6f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e6f9c:
    // 0x3e6f9c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3e6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3e6fa0:
    // 0x3e6fa0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e6fa4:
    // 0x3e6fa4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e6fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e6fa8:
    // 0x3e6fa8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e6fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e6fac:
    // 0x3e6fac: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3e6facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3e6fb0:
    // 0x3e6fb0: 0x320f809  jalr        $t9
label_3e6fb4:
    if (ctx->pc == 0x3E6FB4u) {
        ctx->pc = 0x3E6FB8u;
        goto label_3e6fb8;
    }
    ctx->pc = 0x3E6FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E6FB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E6FB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E6FB8u; }
            if (ctx->pc != 0x3E6FB8u) { return; }
        }
        }
    }
    ctx->pc = 0x3E6FB8u;
label_3e6fb8:
    // 0x3e6fb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e6fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e6fbc:
    // 0x3e6fbc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3e6fbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3e6fc0:
    // 0x3e6fc0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3e6fc4:
    if (ctx->pc == 0x3E6FC4u) {
        ctx->pc = 0x3E6FC4u;
            // 0x3e6fc4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3E6FC8u;
        goto label_3e6fc8;
    }
    ctx->pc = 0x3E6FC0u;
    {
        const bool branch_taken_0x3e6fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6FC0u;
            // 0x3e6fc4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6fc0) {
            ctx->pc = 0x3E6F9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e6f9c;
        }
    }
    ctx->pc = 0x3E6FC8u;
label_3e6fc8:
    // 0x3e6fc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e6fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3e6fcc:
    // 0x3e6fcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e6fccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e6fd0:
    // 0x3e6fd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e6fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e6fd4:
    // 0x3e6fd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e6fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e6fd8:
    // 0x3e6fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e6fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e6fdc:
    // 0x3e6fdc: 0x3e00008  jr          $ra
label_3e6fe0:
    if (ctx->pc == 0x3E6FE0u) {
        ctx->pc = 0x3E6FE0u;
            // 0x3e6fe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3E6FE4u;
        goto label_3e6fe4;
    }
    ctx->pc = 0x3E6FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6FDCu;
            // 0x3e6fe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6FE4u;
label_3e6fe4:
    // 0x3e6fe4: 0x0  nop
    ctx->pc = 0x3e6fe4u;
    // NOP
label_3e6fe8:
    // 0x3e6fe8: 0x0  nop
    ctx->pc = 0x3e6fe8u;
    // NOP
label_3e6fec:
    // 0x3e6fec: 0x0  nop
    ctx->pc = 0x3e6fecu;
    // NOP
label_3e6ff0:
    // 0x3e6ff0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3e6ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3e6ff4:
    // 0x3e6ff4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e6ff8:
    // 0x3e6ff8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3e6ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3e6ffc:
    // 0x3e6ffc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3e6ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3e7000:
    // 0x3e7000: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3e7000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3e7004:
    // 0x3e7004: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e7004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3e7008:
    // 0x3e7008: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e7008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e700c:
    // 0x3e700c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e7010:
    // 0x3e7010: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e7010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e7014:
    // 0x3e7014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e7014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e7018:
    // 0x3e7018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e7018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e701c:
    // 0x3e701c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x3e701cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e7020:
    // 0x3e7020: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3e7020u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3e7024:
    // 0x3e7024: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e7024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e7028:
    // 0x3e7028: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3e702c:
    if (ctx->pc == 0x3E702Cu) {
        ctx->pc = 0x3E702Cu;
            // 0x3e702c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7030u;
        goto label_3e7030;
    }
    ctx->pc = 0x3E7028u;
    {
        const bool branch_taken_0x3e7028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E702Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7028u;
            // 0x3e702c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7028) {
            ctx->pc = 0x3E706Cu;
            goto label_3e706c;
        }
    }
    ctx->pc = 0x3E7030u;
label_3e7030:
    // 0x3e7030: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e7030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e7034:
    // 0x3e7034: 0x10a30038  beq         $a1, $v1, . + 4 + (0x38 << 2)
label_3e7038:
    if (ctx->pc == 0x3E7038u) {
        ctx->pc = 0x3E703Cu;
        goto label_3e703c;
    }
    ctx->pc = 0x3E7034u;
    {
        const bool branch_taken_0x3e7034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e7034) {
            ctx->pc = 0x3E7118u;
            goto label_3e7118;
        }
    }
    ctx->pc = 0x3E703Cu;
label_3e703c:
    // 0x3e703c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e703cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e7040:
    // 0x3e7040: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3e7044:
    if (ctx->pc == 0x3E7044u) {
        ctx->pc = 0x3E7044u;
            // 0x3e7044: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3E7048u;
        goto label_3e7048;
    }
    ctx->pc = 0x3E7040u;
    {
        const bool branch_taken_0x3e7040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e7040) {
            ctx->pc = 0x3E7044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7040u;
            // 0x3e7044: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7050u;
            goto label_3e7050;
        }
    }
    ctx->pc = 0x3E7048u;
label_3e7048:
    // 0x3e7048: 0x10000033  b           . + 4 + (0x33 << 2)
label_3e704c:
    if (ctx->pc == 0x3E704Cu) {
        ctx->pc = 0x3E7050u;
        goto label_3e7050;
    }
    ctx->pc = 0x3E7048u;
    {
        const bool branch_taken_0x3e7048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7048) {
            ctx->pc = 0x3E7118u;
            goto label_3e7118;
        }
    }
    ctx->pc = 0x3E7050u;
label_3e7050:
    // 0x3e7050: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x3e7050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_3e7054:
    // 0x3e7054: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3e7054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3e7058:
    // 0x3e7058: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e7058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3e705c:
    // 0x3e705c: 0x320f809  jalr        $t9
label_3e7060:
    if (ctx->pc == 0x3E7060u) {
        ctx->pc = 0x3E7060u;
            // 0x3e7060: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3E7064u;
        goto label_3e7064;
    }
    ctx->pc = 0x3E705Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E7064u);
        ctx->pc = 0x3E7060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E705Cu;
            // 0x3e7060: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E7064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E7064u; }
            if (ctx->pc != 0x3E7064u) { return; }
        }
        }
    }
    ctx->pc = 0x3E7064u;
label_3e7064:
    // 0x3e7064: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3e7068:
    if (ctx->pc == 0x3E7068u) {
        ctx->pc = 0x3E706Cu;
        goto label_3e706c;
    }
    ctx->pc = 0x3E7064u;
    {
        const bool branch_taken_0x3e7064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7064) {
            ctx->pc = 0x3E7118u;
            goto label_3e7118;
        }
    }
    ctx->pc = 0x3E706Cu;
label_3e706c:
    // 0x3e706c: 0x8e740070  lw          $s4, 0x70($s3)
    ctx->pc = 0x3e706cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_3e7070:
    // 0x3e7070: 0x12800029  beqz        $s4, . + 4 + (0x29 << 2)
label_3e7074:
    if (ctx->pc == 0x3E7074u) {
        ctx->pc = 0x3E7078u;
        goto label_3e7078;
    }
    ctx->pc = 0x3E7070u;
    {
        const bool branch_taken_0x3e7070 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7070) {
            ctx->pc = 0x3E7118u;
            goto label_3e7118;
        }
    }
    ctx->pc = 0x3E7078u;
label_3e7078:
    // 0x3e7078: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e7078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e707c:
    // 0x3e707c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3e707cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3e7080:
    // 0x3e7080: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x3e7080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3e7084:
    // 0x3e7084: 0x26700084  addiu       $s0, $s3, 0x84
    ctx->pc = 0x3e7084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_3e7088:
    // 0x3e7088: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x3e7088u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3e708c:
    // 0x3e708c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e708cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e7090:
    // 0x3e7090: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x3e7090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_3e7094:
    // 0x3e7094: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3e7094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3e7098:
    // 0x3e7098: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x3e7098u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3e709c:
    // 0x3e709c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x3e709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3e70a0:
    // 0x3e70a0: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x3e70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_3e70a4:
    // 0x3e70a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3e70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3e70a8:
    // 0x3e70a8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3e70a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3e70ac:
    // 0x3e70ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e70acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e70b0:
    // 0x3e70b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e70b4:
    // 0x3e70b4: 0xc04e738  jal         func_139CE0
label_3e70b8:
    if (ctx->pc == 0x3E70B8u) {
        ctx->pc = 0x3E70B8u;
            // 0x3e70b8: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3E70BCu;
        goto label_3e70bc;
    }
    ctx->pc = 0x3E70B4u;
    SET_GPR_U32(ctx, 31, 0x3E70BCu);
    ctx->pc = 0x3E70B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E70B4u;
            // 0x3e70b8: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E70BCu; }
        if (ctx->pc != 0x3E70BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E70BCu; }
        if (ctx->pc != 0x3E70BCu) { return; }
    }
    ctx->pc = 0x3E70BCu;
label_3e70bc:
    // 0x3e70bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3e70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e70c0:
    // 0x3e70c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e70c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e70c4:
    // 0x3e70c4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3e70c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3e70c8:
    // 0x3e70c8: 0xc04e4a4  jal         func_139290
label_3e70cc:
    if (ctx->pc == 0x3E70CCu) {
        ctx->pc = 0x3E70CCu;
            // 0x3e70cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E70D0u;
        goto label_3e70d0;
    }
    ctx->pc = 0x3E70C8u;
    SET_GPR_U32(ctx, 31, 0x3E70D0u);
    ctx->pc = 0x3E70CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E70C8u;
            // 0x3e70cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E70D0u; }
        if (ctx->pc != 0x3E70D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E70D0u; }
        if (ctx->pc != 0x3E70D0u) { return; }
    }
    ctx->pc = 0x3E70D0u;
label_3e70d0:
    // 0x3e70d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3e70d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e70d4:
    // 0x3e70d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3e70d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e70d8:
    // 0x3e70d8: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x3e70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_3e70dc:
    // 0x3e70dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3e70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3e70e0:
    // 0x3e70e0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3e70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3e70e4:
    // 0x3e70e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e70e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e70e8:
    // 0x3e70e8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3e70e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e70ec:
    // 0x3e70ec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3e70ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e70f0:
    // 0x3e70f0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x3e70f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_3e70f4:
    // 0x3e70f4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3e70f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e70f8:
    // 0x3e70f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e70f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e70fc:
    // 0x3e70fc: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x3e70fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_3e7100:
    // 0x3e7100: 0xc0fa040  jal         func_3E8100
label_3e7104:
    if (ctx->pc == 0x3E7104u) {
        ctx->pc = 0x3E7104u;
            // 0x3e7104: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3E7108u;
        goto label_3e7108;
    }
    ctx->pc = 0x3E7100u;
    SET_GPR_U32(ctx, 31, 0x3E7108u);
    ctx->pc = 0x3E7104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7100u;
            // 0x3e7104: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E8100u;
    if (runtime->hasFunction(0x3E8100u)) {
        auto targetFn = runtime->lookupFunction(0x3E8100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7108u; }
        if (ctx->pc != 0x3E7108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E8100_0x3e8100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7108u; }
        if (ctx->pc != 0x3E7108u) { return; }
    }
    ctx->pc = 0x3E7108u;
label_3e7108:
    // 0x3e7108: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3e7108u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3e710c:
    // 0x3e710c: 0x2d4182b  sltu        $v1, $s6, $s4
    ctx->pc = 0x3e710cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3e7110:
    // 0x3e7110: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_3e7114:
    if (ctx->pc == 0x3E7114u) {
        ctx->pc = 0x3E7114u;
            // 0x3e7114: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x3E7118u;
        goto label_3e7118;
    }
    ctx->pc = 0x3E7110u;
    {
        const bool branch_taken_0x3e7110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7110u;
            // 0x3e7114: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7110) {
            ctx->pc = 0x3E70D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e70d8;
        }
    }
    ctx->pc = 0x3E7118u;
label_3e7118:
    // 0x3e7118: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3e7118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3e711c:
    // 0x3e711c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3e711cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e7120:
    // 0x3e7120: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3e7120u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e7124:
    // 0x3e7124: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e7124u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e7128:
    // 0x3e7128: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e7128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e712c:
    // 0x3e712c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e712cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e7130:
    // 0x3e7130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e7130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e7134:
    // 0x3e7134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e7134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e7138:
    // 0x3e7138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e7138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e713c:
    // 0x3e713c: 0x3e00008  jr          $ra
label_3e7140:
    if (ctx->pc == 0x3E7140u) {
        ctx->pc = 0x3E7140u;
            // 0x3e7140: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3E7144u;
        goto label_3e7144;
    }
    ctx->pc = 0x3E713Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E713Cu;
            // 0x3e7140: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E7144u;
label_3e7144:
    // 0x3e7144: 0x0  nop
    ctx->pc = 0x3e7144u;
    // NOP
label_3e7148:
    // 0x3e7148: 0x0  nop
    ctx->pc = 0x3e7148u;
    // NOP
label_3e714c:
    // 0x3e714c: 0x0  nop
    ctx->pc = 0x3e714cu;
    // NOP
label_3e7150:
    // 0x3e7150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e7150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3e7154:
    // 0x3e7154: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e7154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e7158:
    // 0x3e7158: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e7158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3e715c:
    // 0x3e715c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e7160:
    // 0x3e7160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e7160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e7164:
    // 0x3e7164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e7164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e7168:
    // 0x3e7168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e7168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e716c:
    // 0x3e716c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3e716cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3e7170:
    // 0x3e7170: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_3e7174:
    if (ctx->pc == 0x3E7174u) {
        ctx->pc = 0x3E7174u;
            // 0x3e7174: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E7178u;
        goto label_3e7178;
    }
    ctx->pc = 0x3E7170u;
    {
        const bool branch_taken_0x3e7170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E7174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7170u;
            // 0x3e7174: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7170) {
            ctx->pc = 0x3E71A4u;
            goto label_3e71a4;
        }
    }
    ctx->pc = 0x3E7178u;
label_3e7178:
    // 0x3e7178: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e7178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e717c:
    // 0x3e717c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3e7180:
    if (ctx->pc == 0x3E7180u) {
        ctx->pc = 0x3E7180u;
            // 0x3e7180: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3E7184u;
        goto label_3e7184;
    }
    ctx->pc = 0x3E717Cu;
    {
        const bool branch_taken_0x3e717c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e717c) {
            ctx->pc = 0x3E7180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E717Cu;
            // 0x3e7180: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7198u;
            goto label_3e7198;
        }
    }
    ctx->pc = 0x3E7184u;
label_3e7184:
    // 0x3e7184: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e7184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e7188:
    // 0x3e7188: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_3e718c:
    if (ctx->pc == 0x3E718Cu) {
        ctx->pc = 0x3E7190u;
        goto label_3e7190;
    }
    ctx->pc = 0x3E7188u;
    {
        const bool branch_taken_0x3e7188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e7188) {
            ctx->pc = 0x3E71D8u;
            goto label_3e71d8;
        }
    }
    ctx->pc = 0x3E7190u;
label_3e7190:
    // 0x3e7190: 0x10000011  b           . + 4 + (0x11 << 2)
label_3e7194:
    if (ctx->pc == 0x3E7194u) {
        ctx->pc = 0x3E7198u;
        goto label_3e7198;
    }
    ctx->pc = 0x3E7190u;
    {
        const bool branch_taken_0x3e7190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7190) {
            ctx->pc = 0x3E71D8u;
            goto label_3e71d8;
        }
    }
    ctx->pc = 0x3E7198u;
label_3e7198:
    // 0x3e7198: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3e7198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3e719c:
    // 0x3e719c: 0x320f809  jalr        $t9
label_3e71a0:
    if (ctx->pc == 0x3E71A0u) {
        ctx->pc = 0x3E71A4u;
        goto label_3e71a4;
    }
    ctx->pc = 0x3E719Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E71A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E71A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E71A4u; }
            if (ctx->pc != 0x3E71A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3E71A4u;
label_3e71a4:
    // 0x3e71a4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x3e71a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3e71a8:
    // 0x3e71a8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_3e71ac:
    if (ctx->pc == 0x3E71ACu) {
        ctx->pc = 0x3E71B0u;
        goto label_3e71b0;
    }
    ctx->pc = 0x3E71A8u;
    {
        const bool branch_taken_0x3e71a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e71a8) {
            ctx->pc = 0x3E71D8u;
            goto label_3e71d8;
        }
    }
    ctx->pc = 0x3E71B0u;
label_3e71b0:
    // 0x3e71b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e71b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e71b4:
    // 0x3e71b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e71b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e71b8:
    // 0x3e71b8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3e71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3e71bc:
    // 0x3e71bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e71bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3e71c0:
    // 0x3e71c0: 0xc0e3658  jal         func_38D960
label_3e71c4:
    if (ctx->pc == 0x3E71C4u) {
        ctx->pc = 0x3E71C4u;
            // 0x3e71c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3E71C8u;
        goto label_3e71c8;
    }
    ctx->pc = 0x3E71C0u;
    SET_GPR_U32(ctx, 31, 0x3E71C8u);
    ctx->pc = 0x3E71C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E71C0u;
            // 0x3e71c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E71C8u; }
        if (ctx->pc != 0x3E71C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E71C8u; }
        if (ctx->pc != 0x3E71C8u) { return; }
    }
    ctx->pc = 0x3E71C8u;
label_3e71c8:
    // 0x3e71c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e71c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e71cc:
    // 0x3e71cc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3e71ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3e71d0:
    // 0x3e71d0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3e71d4:
    if (ctx->pc == 0x3E71D4u) {
        ctx->pc = 0x3E71D4u;
            // 0x3e71d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3E71D8u;
        goto label_3e71d8;
    }
    ctx->pc = 0x3E71D0u;
    {
        const bool branch_taken_0x3e71d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E71D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E71D0u;
            // 0x3e71d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e71d0) {
            ctx->pc = 0x3E71B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e71b8;
        }
    }
    ctx->pc = 0x3E71D8u;
label_3e71d8:
    // 0x3e71d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e71d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3e71dc:
    // 0x3e71dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e71dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e71e0:
    // 0x3e71e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e71e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e71e4:
    // 0x3e71e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e71e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e71e8:
    // 0x3e71e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e71e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e71ec:
    // 0x3e71ec: 0x3e00008  jr          $ra
label_3e71f0:
    if (ctx->pc == 0x3E71F0u) {
        ctx->pc = 0x3E71F0u;
            // 0x3e71f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3E71F4u;
        goto label_3e71f4;
    }
    ctx->pc = 0x3E71ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E71F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E71ECu;
            // 0x3e71f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E71F4u;
label_3e71f4:
    // 0x3e71f4: 0x0  nop
    ctx->pc = 0x3e71f4u;
    // NOP
label_3e71f8:
    // 0x3e71f8: 0x0  nop
    ctx->pc = 0x3e71f8u;
    // NOP
label_3e71fc:
    // 0x3e71fc: 0x0  nop
    ctx->pc = 0x3e71fcu;
    // NOP
}
