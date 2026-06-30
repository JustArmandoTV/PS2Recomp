#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F6EA0
// Address: 0x2f6ea0 - 0x2f72a0
void sub_002F6EA0_0x2f6ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6EA0_0x2f6ea0");
#endif

    switch (ctx->pc) {
        case 0x2f6ea0u: goto label_2f6ea0;
        case 0x2f6ea4u: goto label_2f6ea4;
        case 0x2f6ea8u: goto label_2f6ea8;
        case 0x2f6eacu: goto label_2f6eac;
        case 0x2f6eb0u: goto label_2f6eb0;
        case 0x2f6eb4u: goto label_2f6eb4;
        case 0x2f6eb8u: goto label_2f6eb8;
        case 0x2f6ebcu: goto label_2f6ebc;
        case 0x2f6ec0u: goto label_2f6ec0;
        case 0x2f6ec4u: goto label_2f6ec4;
        case 0x2f6ec8u: goto label_2f6ec8;
        case 0x2f6eccu: goto label_2f6ecc;
        case 0x2f6ed0u: goto label_2f6ed0;
        case 0x2f6ed4u: goto label_2f6ed4;
        case 0x2f6ed8u: goto label_2f6ed8;
        case 0x2f6edcu: goto label_2f6edc;
        case 0x2f6ee0u: goto label_2f6ee0;
        case 0x2f6ee4u: goto label_2f6ee4;
        case 0x2f6ee8u: goto label_2f6ee8;
        case 0x2f6eecu: goto label_2f6eec;
        case 0x2f6ef0u: goto label_2f6ef0;
        case 0x2f6ef4u: goto label_2f6ef4;
        case 0x2f6ef8u: goto label_2f6ef8;
        case 0x2f6efcu: goto label_2f6efc;
        case 0x2f6f00u: goto label_2f6f00;
        case 0x2f6f04u: goto label_2f6f04;
        case 0x2f6f08u: goto label_2f6f08;
        case 0x2f6f0cu: goto label_2f6f0c;
        case 0x2f6f10u: goto label_2f6f10;
        case 0x2f6f14u: goto label_2f6f14;
        case 0x2f6f18u: goto label_2f6f18;
        case 0x2f6f1cu: goto label_2f6f1c;
        case 0x2f6f20u: goto label_2f6f20;
        case 0x2f6f24u: goto label_2f6f24;
        case 0x2f6f28u: goto label_2f6f28;
        case 0x2f6f2cu: goto label_2f6f2c;
        case 0x2f6f30u: goto label_2f6f30;
        case 0x2f6f34u: goto label_2f6f34;
        case 0x2f6f38u: goto label_2f6f38;
        case 0x2f6f3cu: goto label_2f6f3c;
        case 0x2f6f40u: goto label_2f6f40;
        case 0x2f6f44u: goto label_2f6f44;
        case 0x2f6f48u: goto label_2f6f48;
        case 0x2f6f4cu: goto label_2f6f4c;
        case 0x2f6f50u: goto label_2f6f50;
        case 0x2f6f54u: goto label_2f6f54;
        case 0x2f6f58u: goto label_2f6f58;
        case 0x2f6f5cu: goto label_2f6f5c;
        case 0x2f6f60u: goto label_2f6f60;
        case 0x2f6f64u: goto label_2f6f64;
        case 0x2f6f68u: goto label_2f6f68;
        case 0x2f6f6cu: goto label_2f6f6c;
        case 0x2f6f70u: goto label_2f6f70;
        case 0x2f6f74u: goto label_2f6f74;
        case 0x2f6f78u: goto label_2f6f78;
        case 0x2f6f7cu: goto label_2f6f7c;
        case 0x2f6f80u: goto label_2f6f80;
        case 0x2f6f84u: goto label_2f6f84;
        case 0x2f6f88u: goto label_2f6f88;
        case 0x2f6f8cu: goto label_2f6f8c;
        case 0x2f6f90u: goto label_2f6f90;
        case 0x2f6f94u: goto label_2f6f94;
        case 0x2f6f98u: goto label_2f6f98;
        case 0x2f6f9cu: goto label_2f6f9c;
        case 0x2f6fa0u: goto label_2f6fa0;
        case 0x2f6fa4u: goto label_2f6fa4;
        case 0x2f6fa8u: goto label_2f6fa8;
        case 0x2f6facu: goto label_2f6fac;
        case 0x2f6fb0u: goto label_2f6fb0;
        case 0x2f6fb4u: goto label_2f6fb4;
        case 0x2f6fb8u: goto label_2f6fb8;
        case 0x2f6fbcu: goto label_2f6fbc;
        case 0x2f6fc0u: goto label_2f6fc0;
        case 0x2f6fc4u: goto label_2f6fc4;
        case 0x2f6fc8u: goto label_2f6fc8;
        case 0x2f6fccu: goto label_2f6fcc;
        case 0x2f6fd0u: goto label_2f6fd0;
        case 0x2f6fd4u: goto label_2f6fd4;
        case 0x2f6fd8u: goto label_2f6fd8;
        case 0x2f6fdcu: goto label_2f6fdc;
        case 0x2f6fe0u: goto label_2f6fe0;
        case 0x2f6fe4u: goto label_2f6fe4;
        case 0x2f6fe8u: goto label_2f6fe8;
        case 0x2f6fecu: goto label_2f6fec;
        case 0x2f6ff0u: goto label_2f6ff0;
        case 0x2f6ff4u: goto label_2f6ff4;
        case 0x2f6ff8u: goto label_2f6ff8;
        case 0x2f6ffcu: goto label_2f6ffc;
        case 0x2f7000u: goto label_2f7000;
        case 0x2f7004u: goto label_2f7004;
        case 0x2f7008u: goto label_2f7008;
        case 0x2f700cu: goto label_2f700c;
        case 0x2f7010u: goto label_2f7010;
        case 0x2f7014u: goto label_2f7014;
        case 0x2f7018u: goto label_2f7018;
        case 0x2f701cu: goto label_2f701c;
        case 0x2f7020u: goto label_2f7020;
        case 0x2f7024u: goto label_2f7024;
        case 0x2f7028u: goto label_2f7028;
        case 0x2f702cu: goto label_2f702c;
        case 0x2f7030u: goto label_2f7030;
        case 0x2f7034u: goto label_2f7034;
        case 0x2f7038u: goto label_2f7038;
        case 0x2f703cu: goto label_2f703c;
        case 0x2f7040u: goto label_2f7040;
        case 0x2f7044u: goto label_2f7044;
        case 0x2f7048u: goto label_2f7048;
        case 0x2f704cu: goto label_2f704c;
        case 0x2f7050u: goto label_2f7050;
        case 0x2f7054u: goto label_2f7054;
        case 0x2f7058u: goto label_2f7058;
        case 0x2f705cu: goto label_2f705c;
        case 0x2f7060u: goto label_2f7060;
        case 0x2f7064u: goto label_2f7064;
        case 0x2f7068u: goto label_2f7068;
        case 0x2f706cu: goto label_2f706c;
        case 0x2f7070u: goto label_2f7070;
        case 0x2f7074u: goto label_2f7074;
        case 0x2f7078u: goto label_2f7078;
        case 0x2f707cu: goto label_2f707c;
        case 0x2f7080u: goto label_2f7080;
        case 0x2f7084u: goto label_2f7084;
        case 0x2f7088u: goto label_2f7088;
        case 0x2f708cu: goto label_2f708c;
        case 0x2f7090u: goto label_2f7090;
        case 0x2f7094u: goto label_2f7094;
        case 0x2f7098u: goto label_2f7098;
        case 0x2f709cu: goto label_2f709c;
        case 0x2f70a0u: goto label_2f70a0;
        case 0x2f70a4u: goto label_2f70a4;
        case 0x2f70a8u: goto label_2f70a8;
        case 0x2f70acu: goto label_2f70ac;
        case 0x2f70b0u: goto label_2f70b0;
        case 0x2f70b4u: goto label_2f70b4;
        case 0x2f70b8u: goto label_2f70b8;
        case 0x2f70bcu: goto label_2f70bc;
        case 0x2f70c0u: goto label_2f70c0;
        case 0x2f70c4u: goto label_2f70c4;
        case 0x2f70c8u: goto label_2f70c8;
        case 0x2f70ccu: goto label_2f70cc;
        case 0x2f70d0u: goto label_2f70d0;
        case 0x2f70d4u: goto label_2f70d4;
        case 0x2f70d8u: goto label_2f70d8;
        case 0x2f70dcu: goto label_2f70dc;
        case 0x2f70e0u: goto label_2f70e0;
        case 0x2f70e4u: goto label_2f70e4;
        case 0x2f70e8u: goto label_2f70e8;
        case 0x2f70ecu: goto label_2f70ec;
        case 0x2f70f0u: goto label_2f70f0;
        case 0x2f70f4u: goto label_2f70f4;
        case 0x2f70f8u: goto label_2f70f8;
        case 0x2f70fcu: goto label_2f70fc;
        case 0x2f7100u: goto label_2f7100;
        case 0x2f7104u: goto label_2f7104;
        case 0x2f7108u: goto label_2f7108;
        case 0x2f710cu: goto label_2f710c;
        case 0x2f7110u: goto label_2f7110;
        case 0x2f7114u: goto label_2f7114;
        case 0x2f7118u: goto label_2f7118;
        case 0x2f711cu: goto label_2f711c;
        case 0x2f7120u: goto label_2f7120;
        case 0x2f7124u: goto label_2f7124;
        case 0x2f7128u: goto label_2f7128;
        case 0x2f712cu: goto label_2f712c;
        case 0x2f7130u: goto label_2f7130;
        case 0x2f7134u: goto label_2f7134;
        case 0x2f7138u: goto label_2f7138;
        case 0x2f713cu: goto label_2f713c;
        case 0x2f7140u: goto label_2f7140;
        case 0x2f7144u: goto label_2f7144;
        case 0x2f7148u: goto label_2f7148;
        case 0x2f714cu: goto label_2f714c;
        case 0x2f7150u: goto label_2f7150;
        case 0x2f7154u: goto label_2f7154;
        case 0x2f7158u: goto label_2f7158;
        case 0x2f715cu: goto label_2f715c;
        case 0x2f7160u: goto label_2f7160;
        case 0x2f7164u: goto label_2f7164;
        case 0x2f7168u: goto label_2f7168;
        case 0x2f716cu: goto label_2f716c;
        case 0x2f7170u: goto label_2f7170;
        case 0x2f7174u: goto label_2f7174;
        case 0x2f7178u: goto label_2f7178;
        case 0x2f717cu: goto label_2f717c;
        case 0x2f7180u: goto label_2f7180;
        case 0x2f7184u: goto label_2f7184;
        case 0x2f7188u: goto label_2f7188;
        case 0x2f718cu: goto label_2f718c;
        case 0x2f7190u: goto label_2f7190;
        case 0x2f7194u: goto label_2f7194;
        case 0x2f7198u: goto label_2f7198;
        case 0x2f719cu: goto label_2f719c;
        case 0x2f71a0u: goto label_2f71a0;
        case 0x2f71a4u: goto label_2f71a4;
        case 0x2f71a8u: goto label_2f71a8;
        case 0x2f71acu: goto label_2f71ac;
        case 0x2f71b0u: goto label_2f71b0;
        case 0x2f71b4u: goto label_2f71b4;
        case 0x2f71b8u: goto label_2f71b8;
        case 0x2f71bcu: goto label_2f71bc;
        case 0x2f71c0u: goto label_2f71c0;
        case 0x2f71c4u: goto label_2f71c4;
        case 0x2f71c8u: goto label_2f71c8;
        case 0x2f71ccu: goto label_2f71cc;
        case 0x2f71d0u: goto label_2f71d0;
        case 0x2f71d4u: goto label_2f71d4;
        case 0x2f71d8u: goto label_2f71d8;
        case 0x2f71dcu: goto label_2f71dc;
        case 0x2f71e0u: goto label_2f71e0;
        case 0x2f71e4u: goto label_2f71e4;
        case 0x2f71e8u: goto label_2f71e8;
        case 0x2f71ecu: goto label_2f71ec;
        case 0x2f71f0u: goto label_2f71f0;
        case 0x2f71f4u: goto label_2f71f4;
        case 0x2f71f8u: goto label_2f71f8;
        case 0x2f71fcu: goto label_2f71fc;
        case 0x2f7200u: goto label_2f7200;
        case 0x2f7204u: goto label_2f7204;
        case 0x2f7208u: goto label_2f7208;
        case 0x2f720cu: goto label_2f720c;
        case 0x2f7210u: goto label_2f7210;
        case 0x2f7214u: goto label_2f7214;
        case 0x2f7218u: goto label_2f7218;
        case 0x2f721cu: goto label_2f721c;
        case 0x2f7220u: goto label_2f7220;
        case 0x2f7224u: goto label_2f7224;
        case 0x2f7228u: goto label_2f7228;
        case 0x2f722cu: goto label_2f722c;
        case 0x2f7230u: goto label_2f7230;
        case 0x2f7234u: goto label_2f7234;
        case 0x2f7238u: goto label_2f7238;
        case 0x2f723cu: goto label_2f723c;
        case 0x2f7240u: goto label_2f7240;
        case 0x2f7244u: goto label_2f7244;
        case 0x2f7248u: goto label_2f7248;
        case 0x2f724cu: goto label_2f724c;
        case 0x2f7250u: goto label_2f7250;
        case 0x2f7254u: goto label_2f7254;
        case 0x2f7258u: goto label_2f7258;
        case 0x2f725cu: goto label_2f725c;
        case 0x2f7260u: goto label_2f7260;
        case 0x2f7264u: goto label_2f7264;
        case 0x2f7268u: goto label_2f7268;
        case 0x2f726cu: goto label_2f726c;
        case 0x2f7270u: goto label_2f7270;
        case 0x2f7274u: goto label_2f7274;
        case 0x2f7278u: goto label_2f7278;
        case 0x2f727cu: goto label_2f727c;
        case 0x2f7280u: goto label_2f7280;
        case 0x2f7284u: goto label_2f7284;
        case 0x2f7288u: goto label_2f7288;
        case 0x2f728cu: goto label_2f728c;
        case 0x2f7290u: goto label_2f7290;
        case 0x2f7294u: goto label_2f7294;
        case 0x2f7298u: goto label_2f7298;
        case 0x2f729cu: goto label_2f729c;
        default: break;
    }

    ctx->pc = 0x2f6ea0u;

label_2f6ea0:
    // 0x2f6ea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f6ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f6ea4:
    // 0x2f6ea4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f6ea8:
    // 0x2f6ea8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f6ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2f6eac:
    // 0x2f6eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f6eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f6eb0:
    // 0x2f6eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f6eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f6eb4:
    // 0x2f6eb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f6eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f6eb8:
    // 0x2f6eb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f6eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f6ebc:
    // 0x2f6ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f6ec0:
    // 0x2f6ec0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f6ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f6ec4:
    // 0x2f6ec4: 0x8c8400cc  lw          $a0, 0xCC($a0)
    ctx->pc = 0x2f6ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_2f6ec8:
    // 0x2f6ec8: 0x108300bd  beq         $a0, $v1, . + 4 + (0xBD << 2)
label_2f6ecc:
    if (ctx->pc == 0x2F6ECCu) {
        ctx->pc = 0x2F6ECCu;
            // 0x2f6ecc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6ED0u;
        goto label_2f6ed0;
    }
    ctx->pc = 0x2F6EC8u;
    {
        const bool branch_taken_0x2f6ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F6ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6EC8u;
            // 0x2f6ecc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ec8) {
            ctx->pc = 0x2F71C0u;
            goto label_2f71c0;
        }
    }
    ctx->pc = 0x2F6ED0u;
label_2f6ed0:
    // 0x2f6ed0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f6ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f6ed4:
    // 0x2f6ed4: 0x508300a6  beql        $a0, $v1, . + 4 + (0xA6 << 2)
label_2f6ed8:
    if (ctx->pc == 0x2F6ED8u) {
        ctx->pc = 0x2F6ED8u;
            // 0x2f6ed8: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->pc = 0x2F6EDCu;
        goto label_2f6edc;
    }
    ctx->pc = 0x2F6ED4u;
    {
        const bool branch_taken_0x2f6ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6ed4) {
            ctx->pc = 0x2F6ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6ED4u;
            // 0x2f6ed8: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7170u;
            goto label_2f7170;
        }
    }
    ctx->pc = 0x2F6EDCu;
label_2f6edc:
    // 0x2f6edc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f6ee0:
    // 0x2f6ee0: 0x50830091  beql        $a0, $v1, . + 4 + (0x91 << 2)
label_2f6ee4:
    if (ctx->pc == 0x2F6EE4u) {
        ctx->pc = 0x2F6EE4u;
            // 0x2f6ee4: 0x8e440044  lw          $a0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->pc = 0x2F6EE8u;
        goto label_2f6ee8;
    }
    ctx->pc = 0x2F6EE0u;
    {
        const bool branch_taken_0x2f6ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6ee0) {
            ctx->pc = 0x2F6EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6EE0u;
            // 0x2f6ee4: 0x8e440044  lw          $a0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7128u;
            goto label_2f7128;
        }
    }
    ctx->pc = 0x2F6EE8u;
label_2f6ee8:
    // 0x2f6ee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6eec:
    // 0x2f6eec: 0x5083002a  beql        $a0, $v1, . + 4 + (0x2A << 2)
label_2f6ef0:
    if (ctx->pc == 0x2F6EF0u) {
        ctx->pc = 0x2F6EF0u;
            // 0x2f6ef0: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->pc = 0x2F6EF4u;
        goto label_2f6ef4;
    }
    ctx->pc = 0x2F6EECu;
    {
        const bool branch_taken_0x2f6eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6eec) {
            ctx->pc = 0x2F6EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6EECu;
            // 0x2f6ef0: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6F98u;
            goto label_2f6f98;
        }
    }
    ctx->pc = 0x2F6EF4u;
label_2f6ef4:
    // 0x2f6ef4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_2f6ef8:
    if (ctx->pc == 0x2F6EF8u) {
        ctx->pc = 0x2F6EF8u;
            // 0x2f6ef8: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->pc = 0x2F6EFCu;
        goto label_2f6efc;
    }
    ctx->pc = 0x2F6EF4u;
    {
        const bool branch_taken_0x2f6ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6ef4) {
            ctx->pc = 0x2F6EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6EF4u;
            // 0x2f6ef8: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6F04u;
            goto label_2f6f04;
        }
    }
    ctx->pc = 0x2F6EFCu;
label_2f6efc:
    // 0x2f6efc: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_2f6f00:
    if (ctx->pc == 0x2F6F00u) {
        ctx->pc = 0x2F6F04u;
        goto label_2f6f04;
    }
    ctx->pc = 0x2F6EFCu;
    {
        const bool branch_taken_0x2f6efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6efc) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F6F04u;
label_2f6f04:
    // 0x2f6f04: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_2f6f08:
    if (ctx->pc == 0x2F6F08u) {
        ctx->pc = 0x2F6F08u;
            // 0x2f6f08: 0x924300dd  lbu         $v1, 0xDD($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 221)));
        ctx->pc = 0x2F6F0Cu;
        goto label_2f6f0c;
    }
    ctx->pc = 0x2F6F04u;
    {
        const bool branch_taken_0x2f6f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f04) {
            ctx->pc = 0x2F6F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F04u;
            // 0x2f6f08: 0x924300dd  lbu         $v1, 0xDD($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 221)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6F34u;
            goto label_2f6f34;
        }
    }
    ctx->pc = 0x2F6F0Cu;
label_2f6f0c:
    // 0x2f6f0c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2f6f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2f6f10:
    // 0x2f6f10: 0x108000d3  beqz        $a0, . + 4 + (0xD3 << 2)
label_2f6f14:
    if (ctx->pc == 0x2F6F14u) {
        ctx->pc = 0x2F6F18u;
        goto label_2f6f18;
    }
    ctx->pc = 0x2F6F10u;
    {
        const bool branch_taken_0x2f6f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f10) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F6F18u;
label_2f6f18:
    // 0x2f6f18: 0x924300dd  lbu         $v1, 0xDD($s2)
    ctx->pc = 0x2f6f18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 221)));
label_2f6f1c:
    // 0x2f6f1c: 0x106000d0  beqz        $v1, . + 4 + (0xD0 << 2)
label_2f6f20:
    if (ctx->pc == 0x2F6F20u) {
        ctx->pc = 0x2F6F24u;
        goto label_2f6f24;
    }
    ctx->pc = 0x2F6F1Cu;
    {
        const bool branch_taken_0x2f6f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f1c) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F6F24u;
label_2f6f24:
    // 0x2f6f24: 0xc0ce920  jal         func_33A480
label_2f6f28:
    if (ctx->pc == 0x2F6F28u) {
        ctx->pc = 0x2F6F28u;
            // 0x2f6f28: 0xc64c00d4  lwc1        $f12, 0xD4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2F6F2Cu;
        goto label_2f6f2c;
    }
    ctx->pc = 0x2F6F24u;
    SET_GPR_U32(ctx, 31, 0x2F6F2Cu);
    ctx->pc = 0x2F6F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F24u;
            // 0x2f6f28: 0xc64c00d4  lwc1        $f12, 0xD4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x33A480u;
    if (runtime->hasFunction(0x33A480u)) {
        auto targetFn = runtime->lookupFunction(0x33A480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6F2Cu; }
        if (ctx->pc != 0x2F6F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033A480_0x33a480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6F2Cu; }
        if (ctx->pc != 0x2F6F2Cu) { return; }
    }
    ctx->pc = 0x2F6F2Cu;
label_2f6f2c:
    // 0x2f6f2c: 0x100000cc  b           . + 4 + (0xCC << 2)
label_2f6f30:
    if (ctx->pc == 0x2F6F30u) {
        ctx->pc = 0x2F6F34u;
        goto label_2f6f34;
    }
    ctx->pc = 0x2F6F2Cu;
    {
        const bool branch_taken_0x2f6f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f2c) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F6F34u;
label_2f6f34:
    // 0x2f6f34: 0x106000ca  beqz        $v1, . + 4 + (0xCA << 2)
label_2f6f38:
    if (ctx->pc == 0x2F6F38u) {
        ctx->pc = 0x2F6F3Cu;
        goto label_2f6f3c;
    }
    ctx->pc = 0x2F6F34u;
    {
        const bool branch_taken_0x2f6f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f34) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F6F3Cu;
label_2f6f3c:
    // 0x2f6f3c: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x2f6f3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2f6f40:
    // 0x2f6f40: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f6f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f6f44:
    // 0x2f6f44: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x2f6f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f6f48:
    // 0x2f6f48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f6f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f6f4c:
    // 0x2f6f4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f6f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6f50:
    // 0x2f6f50: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f6f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f6f54:
    // 0x2f6f54: 0x320f809  jalr        $t9
label_2f6f58:
    if (ctx->pc == 0x2F6F58u) {
        ctx->pc = 0x2F6F58u;
            // 0x2f6f58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F5Cu;
        goto label_2f6f5c;
    }
    ctx->pc = 0x2F6F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6F5Cu);
        ctx->pc = 0x2F6F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F54u;
            // 0x2f6f58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6F5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6F5Cu; }
            if (ctx->pc != 0x2F6F5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F6F5Cu;
label_2f6f5c:
    // 0x2f6f5c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2f6f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2f6f60:
    // 0x2f6f60: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f6f64:
    // 0x2f6f64: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_2f6f68:
    if (ctx->pc == 0x2F6F68u) {
        ctx->pc = 0x2F6F68u;
            // 0x2f6f68: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2F6F6Cu;
        goto label_2f6f6c;
    }
    ctx->pc = 0x2F6F64u;
    {
        const bool branch_taken_0x2f6f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f64) {
            ctx->pc = 0x2F6F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F64u;
            // 0x2f6f68: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6F44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6f44;
        }
    }
    ctx->pc = 0x2F6F6Cu;
label_2f6f6c:
    // 0x2f6f6c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2f6f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2f6f70:
    // 0x2f6f70: 0x108000bb  beqz        $a0, . + 4 + (0xBB << 2)
label_2f6f74:
    if (ctx->pc == 0x2F6F74u) {
        ctx->pc = 0x2F6F78u;
        goto label_2f6f78;
    }
    ctx->pc = 0x2F6F70u;
    {
        const bool branch_taken_0x2f6f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f70) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F6F78u;
label_2f6f78:
    // 0x2f6f78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f6f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6f7c:
    // 0x2f6f7c: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x2f6f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f6f80:
    // 0x2f6f80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f6f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f6f84:
    // 0x2f6f84: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f6f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f6f88:
    // 0x2f6f88: 0x320f809  jalr        $t9
label_2f6f8c:
    if (ctx->pc == 0x2F6F8Cu) {
        ctx->pc = 0x2F6F8Cu;
            // 0x2f6f8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F90u;
        goto label_2f6f90;
    }
    ctx->pc = 0x2F6F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6F90u);
        ctx->pc = 0x2F6F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F88u;
            // 0x2f6f8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6F90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6F90u; }
            if (ctx->pc != 0x2F6F90u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6F90u;
label_2f6f90:
    // 0x2f6f90: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_2f6f94:
    if (ctx->pc == 0x2F6F94u) {
        ctx->pc = 0x2F6F98u;
        goto label_2f6f98;
    }
    ctx->pc = 0x2F6F90u;
    {
        const bool branch_taken_0x2f6f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f90) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F6F98u;
label_2f6f98:
    // 0x2f6f98: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_2f6f9c:
    if (ctx->pc == 0x2F6F9Cu) {
        ctx->pc = 0x2F6F9Cu;
            // 0x2f6f9c: 0x26530030  addiu       $s3, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x2F6FA0u;
        goto label_2f6fa0;
    }
    ctx->pc = 0x2F6F98u;
    {
        const bool branch_taken_0x2f6f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f98) {
            ctx->pc = 0x2F6F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F98u;
            // 0x2f6f9c: 0x26530030  addiu       $s3, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6FC4u;
            goto label_2f6fc4;
        }
    }
    ctx->pc = 0x2F6FA0u;
label_2f6fa0:
    // 0x2f6fa0: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2f6fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2f6fa4:
    // 0x2f6fa4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_2f6fa8:
    if (ctx->pc == 0x2F6FA8u) {
        ctx->pc = 0x2F6FACu;
        goto label_2f6fac;
    }
    ctx->pc = 0x2F6FA4u;
    {
        const bool branch_taken_0x2f6fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6fa4) {
            ctx->pc = 0x2F6FF0u;
            goto label_2f6ff0;
        }
    }
    ctx->pc = 0x2F6FACu;
label_2f6fac:
    // 0x2f6fac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f6facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6fb0:
    // 0x2f6fb0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f6fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f6fb4:
    // 0x2f6fb4: 0x320f809  jalr        $t9
label_2f6fb8:
    if (ctx->pc == 0x2F6FB8u) {
        ctx->pc = 0x2F6FB8u;
            // 0x2f6fb8: 0xc64c00d4  lwc1        $f12, 0xD4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2F6FBCu;
        goto label_2f6fbc;
    }
    ctx->pc = 0x2F6FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6FBCu);
        ctx->pc = 0x2F6FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6FB4u;
            // 0x2f6fb8: 0xc64c00d4  lwc1        $f12, 0xD4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6FBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6FBCu; }
            if (ctx->pc != 0x2F6FBCu) { return; }
        }
        }
    }
    ctx->pc = 0x2F6FBCu;
label_2f6fbc:
    // 0x2f6fbc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2f6fc0:
    if (ctx->pc == 0x2F6FC0u) {
        ctx->pc = 0x2F6FC4u;
        goto label_2f6fc4;
    }
    ctx->pc = 0x2F6FBCu;
    {
        const bool branch_taken_0x2f6fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6fbc) {
            ctx->pc = 0x2F6FF0u;
            goto label_2f6ff0;
        }
    }
    ctx->pc = 0x2F6FC4u;
label_2f6fc4:
    // 0x2f6fc4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f6fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f6fc8:
    // 0x2f6fc8: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x2f6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f6fcc:
    // 0x2f6fcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f6fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f6fd0:
    // 0x2f6fd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f6fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6fd4:
    // 0x2f6fd4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f6fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f6fd8:
    // 0x2f6fd8: 0x320f809  jalr        $t9
label_2f6fdc:
    if (ctx->pc == 0x2F6FDCu) {
        ctx->pc = 0x2F6FDCu;
            // 0x2f6fdc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6FE0u;
        goto label_2f6fe0;
    }
    ctx->pc = 0x2F6FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F6FE0u);
        ctx->pc = 0x2F6FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6FD8u;
            // 0x2f6fdc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F6FE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F6FE0u; }
            if (ctx->pc != 0x2F6FE0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F6FE0u;
label_2f6fe0:
    // 0x2f6fe0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2f6fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2f6fe4:
    // 0x2f6fe4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f6fe8:
    // 0x2f6fe8: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_2f6fec:
    if (ctx->pc == 0x2F6FECu) {
        ctx->pc = 0x2F6FECu;
            // 0x2f6fec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2F6FF0u;
        goto label_2f6ff0;
    }
    ctx->pc = 0x2F6FE8u;
    {
        const bool branch_taken_0x2f6fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6fe8) {
            ctx->pc = 0x2F6FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6FE8u;
            // 0x2f6fec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6fc8;
        }
    }
    ctx->pc = 0x2F6FF0u;
label_2f6ff0:
    // 0x2f6ff0: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2f6ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2f6ff4:
    // 0x2f6ff4: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x2f6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2f6ff8:
    // 0x2f6ff8: 0x14830099  bne         $a0, $v1, . + 4 + (0x99 << 2)
label_2f6ffc:
    if (ctx->pc == 0x2F6FFCu) {
        ctx->pc = 0x2F7000u;
        goto label_2f7000;
    }
    ctx->pc = 0x2F6FF8u;
    {
        const bool branch_taken_0x2f6ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6ff8) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F7000u;
label_2f7000:
    // 0x2f7000: 0x8e4400c8  lw          $a0, 0xC8($s2)
    ctx->pc = 0x2f7000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_2f7004:
    // 0x2f7004: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x2f7004u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2f7008:
    // 0x2f7008: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x2f7008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_2f700c:
    // 0x2f700c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_2f7010:
    if (ctx->pc == 0x2F7010u) {
        ctx->pc = 0x2F7010u;
            // 0x2f7010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7014u;
        goto label_2f7014;
    }
    ctx->pc = 0x2F700Cu;
    {
        const bool branch_taken_0x2f700c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F7010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F700Cu;
            // 0x2f7010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f700c) {
            ctx->pc = 0x2F7024u;
            goto label_2f7024;
        }
    }
    ctx->pc = 0x2F7014u;
label_2f7014:
    // 0x2f7014: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2f7014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f7018:
    // 0x2f7018: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2f701c:
    if (ctx->pc == 0x2F701Cu) {
        ctx->pc = 0x2F7020u;
        goto label_2f7020;
    }
    ctx->pc = 0x2F7018u;
    {
        const bool branch_taken_0x2f7018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7018) {
            ctx->pc = 0x2F7024u;
            goto label_2f7024;
        }
    }
    ctx->pc = 0x2F7020u;
label_2f7020:
    // 0x2f7020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f7020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7024:
    // 0x2f7024: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_2f7028:
    if (ctx->pc == 0x2F7028u) {
        ctx->pc = 0x2F702Cu;
        goto label_2f702c;
    }
    ctx->pc = 0x2F7024u;
    {
        const bool branch_taken_0x2f7024 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7024) {
            ctx->pc = 0x2F7040u;
            goto label_2f7040;
        }
    }
    ctx->pc = 0x2F702Cu;
label_2f702c:
    // 0x2f702c: 0xc075eb4  jal         func_1D7AD0
label_2f7030:
    if (ctx->pc == 0x2F7030u) {
        ctx->pc = 0x2F7034u;
        goto label_2f7034;
    }
    ctx->pc = 0x2F702Cu;
    SET_GPR_U32(ctx, 31, 0x2F7034u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7034u; }
        if (ctx->pc != 0x2F7034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7034u; }
        if (ctx->pc != 0x2F7034u) { return; }
    }
    ctx->pc = 0x2F7034u;
label_2f7034:
    // 0x2f7034: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2f7038:
    if (ctx->pc == 0x2F7038u) {
        ctx->pc = 0x2F703Cu;
        goto label_2f703c;
    }
    ctx->pc = 0x2F7034u;
    {
        const bool branch_taken_0x2f7034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7034) {
            ctx->pc = 0x2F7040u;
            goto label_2f7040;
        }
    }
    ctx->pc = 0x2F703Cu;
label_2f703c:
    // 0x2f703c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f703cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7040:
    // 0x2f7040: 0x12000087  beqz        $s0, . + 4 + (0x87 << 2)
label_2f7044:
    if (ctx->pc == 0x2F7044u) {
        ctx->pc = 0x2F7048u;
        goto label_2f7048;
    }
    ctx->pc = 0x2F7040u;
    {
        const bool branch_taken_0x2f7040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7040) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F7048u;
label_2f7048:
    // 0x2f7048: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2f7048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2f704c:
    // 0x2f704c: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x2f704cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2f7050:
    // 0x2f7050: 0x9083007d  lbu         $v1, 0x7D($a0)
    ctx->pc = 0x2f7050u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 125)));
label_2f7054:
    // 0x2f7054: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
label_2f7058:
    if (ctx->pc == 0x2F7058u) {
        ctx->pc = 0x2F705Cu;
        goto label_2f705c;
    }
    ctx->pc = 0x2F7054u;
    {
        const bool branch_taken_0x2f7054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7054) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F705Cu;
label_2f705c:
    // 0x2f705c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2f705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7060:
    // 0x2f7060: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f7060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2f7064:
    // 0x2f7064: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x2f7064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7068:
    // 0x2f7068: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f7068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f706c:
    // 0x2f706c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x2f706cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
label_2f7070:
    // 0x2f7070: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x2f7070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_2f7074:
    // 0x2f7074: 0x8c630788  lw          $v1, 0x788($v1)
    ctx->pc = 0x2f7074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
label_2f7078:
    // 0x2f7078: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2f7078u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2f707c:
    // 0x2f707c: 0x50200016  beql        $at, $zero, . + 4 + (0x16 << 2)
label_2f7080:
    if (ctx->pc == 0x2F7080u) {
        ctx->pc = 0x2F7080u;
            // 0x2f7080: 0xc64100e4  lwc1        $f1, 0xE4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2F7084u;
        goto label_2f7084;
    }
    ctx->pc = 0x2F707Cu;
    {
        const bool branch_taken_0x2f707c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f707c) {
            ctx->pc = 0x2F7080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F707Cu;
            // 0x2f7080: 0xc64100e4  lwc1        $f1, 0xE4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F70D8u;
            goto label_2f70d8;
        }
    }
    ctx->pc = 0x2F7084u;
label_2f7084:
    // 0x2f7084: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x2f7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f7088:
    // 0x2f7088: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2f7088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
label_2f708c:
    // 0x2f708c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f708cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f7090:
    // 0x2f7090: 0x0  nop
    ctx->pc = 0x2f7090u;
    // NOP
label_2f7094:
    // 0x2f7094: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f7094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f7098:
    // 0x2f7098: 0x45010071  bc1t        . + 4 + (0x71 << 2)
label_2f709c:
    if (ctx->pc == 0x2F709Cu) {
        ctx->pc = 0x2F70A0u;
        goto label_2f70a0;
    }
    ctx->pc = 0x2F7098u;
    {
        const bool branch_taken_0x2f7098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7098) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F70A0u;
label_2f70a0:
    // 0x2f70a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2f70a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2f70a4:
    // 0x2f70a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f70a8:
    // 0x2f70a8: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x2f70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_2f70ac:
    // 0x2f70ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f70acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f70b0:
    // 0x2f70b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f70b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f70b4:
    // 0x2f70b4: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x2f70b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
label_2f70b8:
    // 0x2f70b8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2f70b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_2f70bc:
    // 0x2f70bc: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x2f70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_2f70c0:
    // 0x2f70c0: 0x904411aa  lbu         $a0, 0x11AA($v0)
    ctx->pc = 0x2f70c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4522)));
label_2f70c4:
    // 0x2f70c4: 0x24460fc0  addiu       $a2, $v0, 0xFC0
    ctx->pc = 0x2f70c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
label_2f70c8:
    // 0x2f70c8: 0xc0bb404  jal         func_2ED010
label_2f70cc:
    if (ctx->pc == 0x2F70CCu) {
        ctx->pc = 0x2F70CCu;
            // 0x2f70cc: 0x24470ee0  addiu       $a3, $v0, 0xEE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3808));
        ctx->pc = 0x2F70D0u;
        goto label_2f70d0;
    }
    ctx->pc = 0x2F70C8u;
    SET_GPR_U32(ctx, 31, 0x2F70D0u);
    ctx->pc = 0x2F70CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F70C8u;
            // 0x2f70cc: 0x24470ee0  addiu       $a3, $v0, 0xEE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F70D0u; }
        if (ctx->pc != 0x2F70D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F70D0u; }
        if (ctx->pc != 0x2F70D0u) { return; }
    }
    ctx->pc = 0x2F70D0u;
label_2f70d0:
    // 0x2f70d0: 0x10000063  b           . + 4 + (0x63 << 2)
label_2f70d4:
    if (ctx->pc == 0x2F70D4u) {
        ctx->pc = 0x2F70D8u;
        goto label_2f70d8;
    }
    ctx->pc = 0x2F70D0u;
    {
        const bool branch_taken_0x2f70d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f70d0) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F70D8u;
label_2f70d8:
    // 0x2f70d8: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x2f70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
label_2f70dc:
    // 0x2f70dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f70dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f70e0:
    // 0x2f70e0: 0x0  nop
    ctx->pc = 0x2f70e0u;
    // NOP
label_2f70e4:
    // 0x2f70e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f70e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f70e8:
    // 0x2f70e8: 0x4501005d  bc1t        . + 4 + (0x5D << 2)
label_2f70ec:
    if (ctx->pc == 0x2F70ECu) {
        ctx->pc = 0x2F70F0u;
        goto label_2f70f0;
    }
    ctx->pc = 0x2F70E8u;
    {
        const bool branch_taken_0x2f70e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f70e8) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F70F0u;
label_2f70f0:
    // 0x2f70f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2f70f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2f70f4:
    // 0x2f70f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f70f8:
    // 0x2f70f8: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x2f70f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2f70fc:
    // 0x2f70fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f70fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7100:
    // 0x2f7100: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f7100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7104:
    // 0x2f7104: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x2f7104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
label_2f7108:
    // 0x2f7108: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2f7108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_2f710c:
    // 0x2f710c: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x2f710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_2f7110:
    // 0x2f7110: 0x904411aa  lbu         $a0, 0x11AA($v0)
    ctx->pc = 0x2f7110u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4522)));
label_2f7114:
    // 0x2f7114: 0x24460fc0  addiu       $a2, $v0, 0xFC0
    ctx->pc = 0x2f7114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
label_2f7118:
    // 0x2f7118: 0xc0bb404  jal         func_2ED010
label_2f711c:
    if (ctx->pc == 0x2F711Cu) {
        ctx->pc = 0x2F711Cu;
            // 0x2f711c: 0x24470ee0  addiu       $a3, $v0, 0xEE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3808));
        ctx->pc = 0x2F7120u;
        goto label_2f7120;
    }
    ctx->pc = 0x2F7118u;
    SET_GPR_U32(ctx, 31, 0x2F7120u);
    ctx->pc = 0x2F711Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7118u;
            // 0x2f711c: 0x24470ee0  addiu       $a3, $v0, 0xEE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7120u; }
        if (ctx->pc != 0x2F7120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7120u; }
        if (ctx->pc != 0x2F7120u) { return; }
    }
    ctx->pc = 0x2F7120u;
label_2f7120:
    // 0x2f7120: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2f7124:
    if (ctx->pc == 0x2F7124u) {
        ctx->pc = 0x2F7128u;
        goto label_2f7128;
    }
    ctx->pc = 0x2F7120u;
    {
        const bool branch_taken_0x2f7120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7120) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F7128u;
label_2f7128:
    // 0x2f7128: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f712c:
    // 0x2f712c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f712cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f7130:
    // 0x2f7130: 0x320f809  jalr        $t9
label_2f7134:
    if (ctx->pc == 0x2F7134u) {
        ctx->pc = 0x2F7134u;
            // 0x2f7134: 0xc64c00d4  lwc1        $f12, 0xD4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2F7138u;
        goto label_2f7138;
    }
    ctx->pc = 0x2F7130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7138u);
        ctx->pc = 0x2F7134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7130u;
            // 0x2f7134: 0xc64c00d4  lwc1        $f12, 0xD4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7138u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7138u; }
            if (ctx->pc != 0x2F7138u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7138u;
label_2f7138:
    // 0x2f7138: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x2f7138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2f713c:
    // 0x2f713c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f713cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f7140:
    // 0x2f7140: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x2f7140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f7144:
    // 0x2f7144: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f7144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7148:
    // 0x2f7148: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f714c:
    // 0x2f714c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f714cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f7150:
    // 0x2f7150: 0x320f809  jalr        $t9
label_2f7154:
    if (ctx->pc == 0x2F7154u) {
        ctx->pc = 0x2F7154u;
            // 0x2f7154: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F7158u;
        goto label_2f7158;
    }
    ctx->pc = 0x2F7150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7158u);
        ctx->pc = 0x2F7154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7150u;
            // 0x2f7154: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7158u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7158u; }
            if (ctx->pc != 0x2F7158u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7158u;
label_2f7158:
    // 0x2f7158: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2f7158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2f715c:
    // 0x2f715c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f7160:
    // 0x2f7160: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_2f7164:
    if (ctx->pc == 0x2F7164u) {
        ctx->pc = 0x2F7164u;
            // 0x2f7164: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2F7168u;
        goto label_2f7168;
    }
    ctx->pc = 0x2F7160u;
    {
        const bool branch_taken_0x2f7160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7160) {
            ctx->pc = 0x2F7164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7160u;
            // 0x2f7164: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7140;
        }
    }
    ctx->pc = 0x2F7168u;
label_2f7168:
    // 0x2f7168: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2f716c:
    if (ctx->pc == 0x2F716Cu) {
        ctx->pc = 0x2F7170u;
        goto label_2f7170;
    }
    ctx->pc = 0x2F7168u;
    {
        const bool branch_taken_0x2f7168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7168) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F7170u;
label_2f7170:
    // 0x2f7170: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f7174:
    if (ctx->pc == 0x2F7174u) {
        ctx->pc = 0x2F7174u;
            // 0x2f7174: 0x26530030  addiu       $s3, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x2F7178u;
        goto label_2f7178;
    }
    ctx->pc = 0x2F7170u;
    {
        const bool branch_taken_0x2f7170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7170) {
            ctx->pc = 0x2F7174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7170u;
            // 0x2f7174: 0x26530030  addiu       $s3, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F718Cu;
            goto label_2f718c;
        }
    }
    ctx->pc = 0x2F7178u;
label_2f7178:
    // 0x2f7178: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f717c:
    // 0x2f717c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f717cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f7180:
    // 0x2f7180: 0x320f809  jalr        $t9
label_2f7184:
    if (ctx->pc == 0x2F7184u) {
        ctx->pc = 0x2F7184u;
            // 0x2f7184: 0xc64c00d4  lwc1        $f12, 0xD4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2F7188u;
        goto label_2f7188;
    }
    ctx->pc = 0x2F7180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7188u);
        ctx->pc = 0x2F7184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7180u;
            // 0x2f7184: 0xc64c00d4  lwc1        $f12, 0xD4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7188u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7188u; }
            if (ctx->pc != 0x2F7188u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7188u;
label_2f7188:
    // 0x2f7188: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x2f7188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2f718c:
    // 0x2f718c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f718cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f7190:
    // 0x2f7190: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x2f7190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f7194:
    // 0x2f7194: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f7194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f7198:
    // 0x2f7198: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f719c:
    // 0x2f719c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f719cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f71a0:
    // 0x2f71a0: 0x320f809  jalr        $t9
label_2f71a4:
    if (ctx->pc == 0x2F71A4u) {
        ctx->pc = 0x2F71A4u;
            // 0x2f71a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F71A8u;
        goto label_2f71a8;
    }
    ctx->pc = 0x2F71A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F71A8u);
        ctx->pc = 0x2F71A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F71A0u;
            // 0x2f71a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F71A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F71A8u; }
            if (ctx->pc != 0x2F71A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F71A8u;
label_2f71a8:
    // 0x2f71a8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2f71a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2f71ac:
    // 0x2f71ac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f71acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f71b0:
    // 0x2f71b0: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_2f71b4:
    if (ctx->pc == 0x2F71B4u) {
        ctx->pc = 0x2F71B4u;
            // 0x2f71b4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2F71B8u;
        goto label_2f71b8;
    }
    ctx->pc = 0x2F71B0u;
    {
        const bool branch_taken_0x2f71b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f71b0) {
            ctx->pc = 0x2F71B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F71B0u;
            // 0x2f71b4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7190;
        }
    }
    ctx->pc = 0x2F71B8u;
label_2f71b8:
    // 0x2f71b8: 0x10000029  b           . + 4 + (0x29 << 2)
label_2f71bc:
    if (ctx->pc == 0x2F71BCu) {
        ctx->pc = 0x2F71C0u;
        goto label_2f71c0;
    }
    ctx->pc = 0x2F71B8u;
    {
        const bool branch_taken_0x2f71b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f71b8) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F71C0u;
label_2f71c0:
    // 0x2f71c0: 0x8e4300c8  lw          $v1, 0xC8($s2)
    ctx->pc = 0x2f71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_2f71c4:
    // 0x2f71c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2f71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f71c8:
    // 0x2f71c8: 0x8c630a5c  lw          $v1, 0xA5C($v1)
    ctx->pc = 0x2f71c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2652)));
label_2f71cc:
    // 0x2f71cc: 0x8c6301a8  lw          $v1, 0x1A8($v1)
    ctx->pc = 0x2f71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 424)));
label_2f71d0:
    // 0x2f71d0: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_2f71d4:
    if (ctx->pc == 0x2F71D4u) {
        ctx->pc = 0x2F71D4u;
            // 0x2f71d4: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x2F71D8u;
        goto label_2f71d8;
    }
    ctx->pc = 0x2F71D0u;
    {
        const bool branch_taken_0x2f71d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f71d0) {
            ctx->pc = 0x2F71D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F71D0u;
            // 0x2f71d4: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7210u;
            goto label_2f7210;
        }
    }
    ctx->pc = 0x2F71D8u;
label_2f71d8:
    // 0x2f71d8: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x2f71d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2f71dc:
    // 0x2f71dc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f71dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f71e0:
    // 0x2f71e0: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x2f71e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f71e4:
    // 0x2f71e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f71e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f71e8:
    // 0x2f71e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f71e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f71ec:
    // 0x2f71ec: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f71ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f71f0:
    // 0x2f71f0: 0x320f809  jalr        $t9
label_2f71f4:
    if (ctx->pc == 0x2F71F4u) {
        ctx->pc = 0x2F71F4u;
            // 0x2f71f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F71F8u;
        goto label_2f71f8;
    }
    ctx->pc = 0x2F71F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F71F8u);
        ctx->pc = 0x2F71F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F71F0u;
            // 0x2f71f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F71F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F71F8u; }
            if (ctx->pc != 0x2F71F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F71F8u;
label_2f71f8:
    // 0x2f71f8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2f71f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2f71fc:
    // 0x2f71fc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f71fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f7200:
    // 0x2f7200: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_2f7204:
    if (ctx->pc == 0x2F7204u) {
        ctx->pc = 0x2F7204u;
            // 0x2f7204: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2F7208u;
        goto label_2f7208;
    }
    ctx->pc = 0x2F7200u;
    {
        const bool branch_taken_0x2f7200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7200) {
            ctx->pc = 0x2F7204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7200u;
            // 0x2f7204: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F71E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f71e0;
        }
    }
    ctx->pc = 0x2F7208u;
label_2f7208:
    // 0x2f7208: 0x10000015  b           . + 4 + (0x15 << 2)
label_2f720c:
    if (ctx->pc == 0x2F720Cu) {
        ctx->pc = 0x2F7210u;
        goto label_2f7210;
    }
    ctx->pc = 0x2F7208u;
    {
        const bool branch_taken_0x2f7208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7208) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F7210u;
label_2f7210:
    // 0x2f7210: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f7210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7214:
    // 0x2f7214: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f7214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f7218:
    // 0x2f7218: 0x320f809  jalr        $t9
label_2f721c:
    if (ctx->pc == 0x2F721Cu) {
        ctx->pc = 0x2F721Cu;
            // 0x2f721c: 0xc64c00d4  lwc1        $f12, 0xD4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2F7220u;
        goto label_2f7220;
    }
    ctx->pc = 0x2F7218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F7220u);
        ctx->pc = 0x2F721Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7218u;
            // 0x2f721c: 0xc64c00d4  lwc1        $f12, 0xD4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F7220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F7220u; }
            if (ctx->pc != 0x2F7220u) { return; }
        }
        }
    }
    ctx->pc = 0x2F7220u;
label_2f7220:
    // 0x2f7220: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x2f7220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_2f7224:
    // 0x2f7224: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_2f7228:
    if (ctx->pc == 0x2F7228u) {
        ctx->pc = 0x2F722Cu;
        goto label_2f722c;
    }
    ctx->pc = 0x2F7224u;
    {
        const bool branch_taken_0x2f7224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7224) {
            ctx->pc = 0x2F7260u;
            goto label_2f7260;
        }
    }
    ctx->pc = 0x2F722Cu;
label_2f722c:
    // 0x2f722c: 0x26530030  addiu       $s3, $s2, 0x30
    ctx->pc = 0x2f722cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2f7230:
    // 0x2f7230: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f7230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f7234:
    // 0x2f7234: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x2f7234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f7238:
    // 0x2f7238: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f7238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f723c:
    // 0x2f723c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f723cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f7240:
    // 0x2f7240: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2f7240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2f7244:
    // 0x2f7244: 0x320f809  jalr        $t9
label_2f7248:
    if (ctx->pc == 0x2F7248u) {
        ctx->pc = 0x2F7248u;
            // 0x2f7248: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F724Cu;
        goto label_2f724c;
    }
    ctx->pc = 0x2F7244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F724Cu);
        ctx->pc = 0x2F7248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7244u;
            // 0x2f7248: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F724Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F724Cu; }
            if (ctx->pc != 0x2F724Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F724Cu;
label_2f724c:
    // 0x2f724c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2f724cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2f7250:
    // 0x2f7250: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f7250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f7254:
    // 0x2f7254: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_2f7258:
    if (ctx->pc == 0x2F7258u) {
        ctx->pc = 0x2F7258u;
            // 0x2f7258: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2F725Cu;
        goto label_2f725c;
    }
    ctx->pc = 0x2F7254u;
    {
        const bool branch_taken_0x2f7254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7254) {
            ctx->pc = 0x2F7258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7254u;
            // 0x2f7258: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7234;
        }
    }
    ctx->pc = 0x2F725Cu;
label_2f725c:
    // 0x2f725c: 0x0  nop
    ctx->pc = 0x2f725cu;
    // NOP
label_2f7260:
    // 0x2f7260: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2f7260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2f7264:
    // 0x2f7264: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x2f7264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2f7268:
    // 0x2f7268: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_2f726c:
    if (ctx->pc == 0x2F726Cu) {
        ctx->pc = 0x2F726Cu;
            // 0x2f726c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2F7270u;
        goto label_2f7270;
    }
    ctx->pc = 0x2F7268u;
    {
        const bool branch_taken_0x2f7268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f7268) {
            ctx->pc = 0x2F726Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7268u;
            // 0x2f726c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7288u;
            goto label_2f7288;
        }
    }
    ctx->pc = 0x2F7270u;
label_2f7270:
    // 0x2f7270: 0x9243001b  lbu         $v1, 0x1B($s2)
    ctx->pc = 0x2f7270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 27)));
label_2f7274:
    // 0x2f7274: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2f7278:
    if (ctx->pc == 0x2F7278u) {
        ctx->pc = 0x2F727Cu;
        goto label_2f727c;
    }
    ctx->pc = 0x2F7274u;
    {
        const bool branch_taken_0x2f7274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7274) {
            ctx->pc = 0x2F7284u;
            goto label_2f7284;
        }
    }
    ctx->pc = 0x2F727Cu;
label_2f727c:
    // 0x2f727c: 0xc0ce420  jal         func_339080
label_2f7280:
    if (ctx->pc == 0x2F7280u) {
        ctx->pc = 0x2F7280u;
            // 0x2f7280: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x2F7284u;
        goto label_2f7284;
    }
    ctx->pc = 0x2F727Cu;
    SET_GPR_U32(ctx, 31, 0x2F7284u);
    ctx->pc = 0x2F7280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F727Cu;
            // 0x2f7280: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x339080u;
    if (runtime->hasFunction(0x339080u)) {
        auto targetFn = runtime->lookupFunction(0x339080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7284u; }
        if (ctx->pc != 0x2F7284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00339080_0x339080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7284u; }
        if (ctx->pc != 0x2F7284u) { return; }
    }
    ctx->pc = 0x2F7284u;
label_2f7284:
    // 0x2f7284: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f7284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f7288:
    // 0x2f7288: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f7288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f728c:
    // 0x2f728c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f728cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f7290:
    // 0x2f7290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f7290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f7294:
    // 0x2f7294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f7294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f7298:
    // 0x2f7298: 0x3e00008  jr          $ra
label_2f729c:
    if (ctx->pc == 0x2F729Cu) {
        ctx->pc = 0x2F729Cu;
            // 0x2f729c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2F72A0u;
        goto label_fallthrough_0x2f7298;
    }
    ctx->pc = 0x2F7298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F729Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7298u;
            // 0x2f729c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f7298:
    ctx->pc = 0x2F72A0u;
}
