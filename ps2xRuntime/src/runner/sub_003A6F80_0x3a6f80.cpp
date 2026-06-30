#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A6F80
// Address: 0x3a6f80 - 0x3a7360
void sub_003A6F80_0x3a6f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6F80_0x3a6f80");
#endif

    switch (ctx->pc) {
        case 0x3a6f80u: goto label_3a6f80;
        case 0x3a6f84u: goto label_3a6f84;
        case 0x3a6f88u: goto label_3a6f88;
        case 0x3a6f8cu: goto label_3a6f8c;
        case 0x3a6f90u: goto label_3a6f90;
        case 0x3a6f94u: goto label_3a6f94;
        case 0x3a6f98u: goto label_3a6f98;
        case 0x3a6f9cu: goto label_3a6f9c;
        case 0x3a6fa0u: goto label_3a6fa0;
        case 0x3a6fa4u: goto label_3a6fa4;
        case 0x3a6fa8u: goto label_3a6fa8;
        case 0x3a6facu: goto label_3a6fac;
        case 0x3a6fb0u: goto label_3a6fb0;
        case 0x3a6fb4u: goto label_3a6fb4;
        case 0x3a6fb8u: goto label_3a6fb8;
        case 0x3a6fbcu: goto label_3a6fbc;
        case 0x3a6fc0u: goto label_3a6fc0;
        case 0x3a6fc4u: goto label_3a6fc4;
        case 0x3a6fc8u: goto label_3a6fc8;
        case 0x3a6fccu: goto label_3a6fcc;
        case 0x3a6fd0u: goto label_3a6fd0;
        case 0x3a6fd4u: goto label_3a6fd4;
        case 0x3a6fd8u: goto label_3a6fd8;
        case 0x3a6fdcu: goto label_3a6fdc;
        case 0x3a6fe0u: goto label_3a6fe0;
        case 0x3a6fe4u: goto label_3a6fe4;
        case 0x3a6fe8u: goto label_3a6fe8;
        case 0x3a6fecu: goto label_3a6fec;
        case 0x3a6ff0u: goto label_3a6ff0;
        case 0x3a6ff4u: goto label_3a6ff4;
        case 0x3a6ff8u: goto label_3a6ff8;
        case 0x3a6ffcu: goto label_3a6ffc;
        case 0x3a7000u: goto label_3a7000;
        case 0x3a7004u: goto label_3a7004;
        case 0x3a7008u: goto label_3a7008;
        case 0x3a700cu: goto label_3a700c;
        case 0x3a7010u: goto label_3a7010;
        case 0x3a7014u: goto label_3a7014;
        case 0x3a7018u: goto label_3a7018;
        case 0x3a701cu: goto label_3a701c;
        case 0x3a7020u: goto label_3a7020;
        case 0x3a7024u: goto label_3a7024;
        case 0x3a7028u: goto label_3a7028;
        case 0x3a702cu: goto label_3a702c;
        case 0x3a7030u: goto label_3a7030;
        case 0x3a7034u: goto label_3a7034;
        case 0x3a7038u: goto label_3a7038;
        case 0x3a703cu: goto label_3a703c;
        case 0x3a7040u: goto label_3a7040;
        case 0x3a7044u: goto label_3a7044;
        case 0x3a7048u: goto label_3a7048;
        case 0x3a704cu: goto label_3a704c;
        case 0x3a7050u: goto label_3a7050;
        case 0x3a7054u: goto label_3a7054;
        case 0x3a7058u: goto label_3a7058;
        case 0x3a705cu: goto label_3a705c;
        case 0x3a7060u: goto label_3a7060;
        case 0x3a7064u: goto label_3a7064;
        case 0x3a7068u: goto label_3a7068;
        case 0x3a706cu: goto label_3a706c;
        case 0x3a7070u: goto label_3a7070;
        case 0x3a7074u: goto label_3a7074;
        case 0x3a7078u: goto label_3a7078;
        case 0x3a707cu: goto label_3a707c;
        case 0x3a7080u: goto label_3a7080;
        case 0x3a7084u: goto label_3a7084;
        case 0x3a7088u: goto label_3a7088;
        case 0x3a708cu: goto label_3a708c;
        case 0x3a7090u: goto label_3a7090;
        case 0x3a7094u: goto label_3a7094;
        case 0x3a7098u: goto label_3a7098;
        case 0x3a709cu: goto label_3a709c;
        case 0x3a70a0u: goto label_3a70a0;
        case 0x3a70a4u: goto label_3a70a4;
        case 0x3a70a8u: goto label_3a70a8;
        case 0x3a70acu: goto label_3a70ac;
        case 0x3a70b0u: goto label_3a70b0;
        case 0x3a70b4u: goto label_3a70b4;
        case 0x3a70b8u: goto label_3a70b8;
        case 0x3a70bcu: goto label_3a70bc;
        case 0x3a70c0u: goto label_3a70c0;
        case 0x3a70c4u: goto label_3a70c4;
        case 0x3a70c8u: goto label_3a70c8;
        case 0x3a70ccu: goto label_3a70cc;
        case 0x3a70d0u: goto label_3a70d0;
        case 0x3a70d4u: goto label_3a70d4;
        case 0x3a70d8u: goto label_3a70d8;
        case 0x3a70dcu: goto label_3a70dc;
        case 0x3a70e0u: goto label_3a70e0;
        case 0x3a70e4u: goto label_3a70e4;
        case 0x3a70e8u: goto label_3a70e8;
        case 0x3a70ecu: goto label_3a70ec;
        case 0x3a70f0u: goto label_3a70f0;
        case 0x3a70f4u: goto label_3a70f4;
        case 0x3a70f8u: goto label_3a70f8;
        case 0x3a70fcu: goto label_3a70fc;
        case 0x3a7100u: goto label_3a7100;
        case 0x3a7104u: goto label_3a7104;
        case 0x3a7108u: goto label_3a7108;
        case 0x3a710cu: goto label_3a710c;
        case 0x3a7110u: goto label_3a7110;
        case 0x3a7114u: goto label_3a7114;
        case 0x3a7118u: goto label_3a7118;
        case 0x3a711cu: goto label_3a711c;
        case 0x3a7120u: goto label_3a7120;
        case 0x3a7124u: goto label_3a7124;
        case 0x3a7128u: goto label_3a7128;
        case 0x3a712cu: goto label_3a712c;
        case 0x3a7130u: goto label_3a7130;
        case 0x3a7134u: goto label_3a7134;
        case 0x3a7138u: goto label_3a7138;
        case 0x3a713cu: goto label_3a713c;
        case 0x3a7140u: goto label_3a7140;
        case 0x3a7144u: goto label_3a7144;
        case 0x3a7148u: goto label_3a7148;
        case 0x3a714cu: goto label_3a714c;
        case 0x3a7150u: goto label_3a7150;
        case 0x3a7154u: goto label_3a7154;
        case 0x3a7158u: goto label_3a7158;
        case 0x3a715cu: goto label_3a715c;
        case 0x3a7160u: goto label_3a7160;
        case 0x3a7164u: goto label_3a7164;
        case 0x3a7168u: goto label_3a7168;
        case 0x3a716cu: goto label_3a716c;
        case 0x3a7170u: goto label_3a7170;
        case 0x3a7174u: goto label_3a7174;
        case 0x3a7178u: goto label_3a7178;
        case 0x3a717cu: goto label_3a717c;
        case 0x3a7180u: goto label_3a7180;
        case 0x3a7184u: goto label_3a7184;
        case 0x3a7188u: goto label_3a7188;
        case 0x3a718cu: goto label_3a718c;
        case 0x3a7190u: goto label_3a7190;
        case 0x3a7194u: goto label_3a7194;
        case 0x3a7198u: goto label_3a7198;
        case 0x3a719cu: goto label_3a719c;
        case 0x3a71a0u: goto label_3a71a0;
        case 0x3a71a4u: goto label_3a71a4;
        case 0x3a71a8u: goto label_3a71a8;
        case 0x3a71acu: goto label_3a71ac;
        case 0x3a71b0u: goto label_3a71b0;
        case 0x3a71b4u: goto label_3a71b4;
        case 0x3a71b8u: goto label_3a71b8;
        case 0x3a71bcu: goto label_3a71bc;
        case 0x3a71c0u: goto label_3a71c0;
        case 0x3a71c4u: goto label_3a71c4;
        case 0x3a71c8u: goto label_3a71c8;
        case 0x3a71ccu: goto label_3a71cc;
        case 0x3a71d0u: goto label_3a71d0;
        case 0x3a71d4u: goto label_3a71d4;
        case 0x3a71d8u: goto label_3a71d8;
        case 0x3a71dcu: goto label_3a71dc;
        case 0x3a71e0u: goto label_3a71e0;
        case 0x3a71e4u: goto label_3a71e4;
        case 0x3a71e8u: goto label_3a71e8;
        case 0x3a71ecu: goto label_3a71ec;
        case 0x3a71f0u: goto label_3a71f0;
        case 0x3a71f4u: goto label_3a71f4;
        case 0x3a71f8u: goto label_3a71f8;
        case 0x3a71fcu: goto label_3a71fc;
        case 0x3a7200u: goto label_3a7200;
        case 0x3a7204u: goto label_3a7204;
        case 0x3a7208u: goto label_3a7208;
        case 0x3a720cu: goto label_3a720c;
        case 0x3a7210u: goto label_3a7210;
        case 0x3a7214u: goto label_3a7214;
        case 0x3a7218u: goto label_3a7218;
        case 0x3a721cu: goto label_3a721c;
        case 0x3a7220u: goto label_3a7220;
        case 0x3a7224u: goto label_3a7224;
        case 0x3a7228u: goto label_3a7228;
        case 0x3a722cu: goto label_3a722c;
        case 0x3a7230u: goto label_3a7230;
        case 0x3a7234u: goto label_3a7234;
        case 0x3a7238u: goto label_3a7238;
        case 0x3a723cu: goto label_3a723c;
        case 0x3a7240u: goto label_3a7240;
        case 0x3a7244u: goto label_3a7244;
        case 0x3a7248u: goto label_3a7248;
        case 0x3a724cu: goto label_3a724c;
        case 0x3a7250u: goto label_3a7250;
        case 0x3a7254u: goto label_3a7254;
        case 0x3a7258u: goto label_3a7258;
        case 0x3a725cu: goto label_3a725c;
        case 0x3a7260u: goto label_3a7260;
        case 0x3a7264u: goto label_3a7264;
        case 0x3a7268u: goto label_3a7268;
        case 0x3a726cu: goto label_3a726c;
        case 0x3a7270u: goto label_3a7270;
        case 0x3a7274u: goto label_3a7274;
        case 0x3a7278u: goto label_3a7278;
        case 0x3a727cu: goto label_3a727c;
        case 0x3a7280u: goto label_3a7280;
        case 0x3a7284u: goto label_3a7284;
        case 0x3a7288u: goto label_3a7288;
        case 0x3a728cu: goto label_3a728c;
        case 0x3a7290u: goto label_3a7290;
        case 0x3a7294u: goto label_3a7294;
        case 0x3a7298u: goto label_3a7298;
        case 0x3a729cu: goto label_3a729c;
        case 0x3a72a0u: goto label_3a72a0;
        case 0x3a72a4u: goto label_3a72a4;
        case 0x3a72a8u: goto label_3a72a8;
        case 0x3a72acu: goto label_3a72ac;
        case 0x3a72b0u: goto label_3a72b0;
        case 0x3a72b4u: goto label_3a72b4;
        case 0x3a72b8u: goto label_3a72b8;
        case 0x3a72bcu: goto label_3a72bc;
        case 0x3a72c0u: goto label_3a72c0;
        case 0x3a72c4u: goto label_3a72c4;
        case 0x3a72c8u: goto label_3a72c8;
        case 0x3a72ccu: goto label_3a72cc;
        case 0x3a72d0u: goto label_3a72d0;
        case 0x3a72d4u: goto label_3a72d4;
        case 0x3a72d8u: goto label_3a72d8;
        case 0x3a72dcu: goto label_3a72dc;
        case 0x3a72e0u: goto label_3a72e0;
        case 0x3a72e4u: goto label_3a72e4;
        case 0x3a72e8u: goto label_3a72e8;
        case 0x3a72ecu: goto label_3a72ec;
        case 0x3a72f0u: goto label_3a72f0;
        case 0x3a72f4u: goto label_3a72f4;
        case 0x3a72f8u: goto label_3a72f8;
        case 0x3a72fcu: goto label_3a72fc;
        case 0x3a7300u: goto label_3a7300;
        case 0x3a7304u: goto label_3a7304;
        case 0x3a7308u: goto label_3a7308;
        case 0x3a730cu: goto label_3a730c;
        case 0x3a7310u: goto label_3a7310;
        case 0x3a7314u: goto label_3a7314;
        case 0x3a7318u: goto label_3a7318;
        case 0x3a731cu: goto label_3a731c;
        case 0x3a7320u: goto label_3a7320;
        case 0x3a7324u: goto label_3a7324;
        case 0x3a7328u: goto label_3a7328;
        case 0x3a732cu: goto label_3a732c;
        case 0x3a7330u: goto label_3a7330;
        case 0x3a7334u: goto label_3a7334;
        case 0x3a7338u: goto label_3a7338;
        case 0x3a733cu: goto label_3a733c;
        case 0x3a7340u: goto label_3a7340;
        case 0x3a7344u: goto label_3a7344;
        case 0x3a7348u: goto label_3a7348;
        case 0x3a734cu: goto label_3a734c;
        case 0x3a7350u: goto label_3a7350;
        case 0x3a7354u: goto label_3a7354;
        case 0x3a7358u: goto label_3a7358;
        case 0x3a735cu: goto label_3a735c;
        default: break;
    }

    ctx->pc = 0x3a6f80u;

label_3a6f80:
    // 0x3a6f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a6f84:
    // 0x3a6f84: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3a6f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3a6f88:
    // 0x3a6f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a6f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a6f8c:
    // 0x3a6f8c: 0x246388b0  addiu       $v1, $v1, -0x7750
    ctx->pc = 0x3a6f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936752));
label_3a6f90:
    // 0x3a6f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a6f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a6f94:
    // 0x3a6f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a6f98:
    // 0x3a6f98: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x3a6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
label_3a6f9c:
    // 0x3a6f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a6fa0:
    // 0x3a6fa0: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x3a6fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
label_3a6fa4:
    // 0x3a6fa4: 0xc0e9b44  jal         func_3A6D10
label_3a6fa8:
    if (ctx->pc == 0x3A6FA8u) {
        ctx->pc = 0x3A6FA8u;
            // 0x3a6fa8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x3A6FACu;
        goto label_3a6fac;
    }
    ctx->pc = 0x3A6FA4u;
    SET_GPR_U32(ctx, 31, 0x3A6FACu);
    ctx->pc = 0x3A6FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6FA4u;
            // 0x3a6fa8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A6D10u;
    if (runtime->hasFunction(0x3A6D10u)) {
        auto targetFn = runtime->lookupFunction(0x3A6D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6FACu; }
        if (ctx->pc != 0x3A6FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A6D10_0x3a6d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A6FACu; }
        if (ctx->pc != 0x3A6FACu) { return; }
    }
    ctx->pc = 0x3A6FACu;
label_3a6fac:
    // 0x3a6fac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a6facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a6fb0:
    // 0x3a6fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a6fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a6fb4:
    // 0x3a6fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a6fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a6fb8:
    // 0x3a6fb8: 0x3e00008  jr          $ra
label_3a6fbc:
    if (ctx->pc == 0x3A6FBCu) {
        ctx->pc = 0x3A6FBCu;
            // 0x3a6fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3A6FC0u;
        goto label_3a6fc0;
    }
    ctx->pc = 0x3A6FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A6FB8u;
            // 0x3a6fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A6FC0u;
label_3a6fc0:
    // 0x3a6fc0: 0x3e00008  jr          $ra
label_3a6fc4:
    if (ctx->pc == 0x3A6FC4u) {
        ctx->pc = 0x3A6FC8u;
        goto label_3a6fc8;
    }
    ctx->pc = 0x3A6FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A6FC8u;
label_3a6fc8:
    // 0x3a6fc8: 0x0  nop
    ctx->pc = 0x3a6fc8u;
    // NOP
label_3a6fcc:
    // 0x3a6fcc: 0x0  nop
    ctx->pc = 0x3a6fccu;
    // NOP
label_3a6fd0:
    // 0x3a6fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a6fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3a6fd4:
    // 0x3a6fd4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a6fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3a6fd8:
    // 0x3a6fd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a6fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3a6fdc:
    // 0x3a6fdc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a6fe0:
    // 0x3a6fe0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a6fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a6fe4:
    // 0x3a6fe4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a6fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a6fe8:
    // 0x3a6fe8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3a6fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a6fec:
    // 0x3a6fec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a6fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a6ff0:
    // 0x3a6ff0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3a6ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a6ff4:
    // 0x3a6ff4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a6ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a6ff8:
    // 0x3a6ff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a6ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6ffc:
    // 0x3a6ffc: 0x8c7189e0  lw          $s1, -0x7620($v1)
    ctx->pc = 0x3a6ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_3a7000:
    // 0x3a7000: 0x8c441d0c  lw          $a0, 0x1D0C($v0)
    ctx->pc = 0x3a7000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7436)));
label_3a7004:
    // 0x3a7004: 0xc0506ac  jal         func_141AB0
label_3a7008:
    if (ctx->pc == 0x3A7008u) {
        ctx->pc = 0x3A7008u;
            // 0x3a7008: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A700Cu;
        goto label_3a700c;
    }
    ctx->pc = 0x3A7004u;
    SET_GPR_U32(ctx, 31, 0x3A700Cu);
    ctx->pc = 0x3A7008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7004u;
            // 0x3a7008: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A700Cu; }
        if (ctx->pc != 0x3A700Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A700Cu; }
        if (ctx->pc != 0x3A700Cu) { return; }
    }
    ctx->pc = 0x3A700Cu;
label_3a700c:
    // 0x3a700c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3a700cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a7010:
    // 0x3a7010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a7014:
    // 0x3a7014: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a7014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a7018:
    // 0x3a7018: 0x320f809  jalr        $t9
label_3a701c:
    if (ctx->pc == 0x3A701Cu) {
        ctx->pc = 0x3A701Cu;
            // 0x3a701c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A7020u;
        goto label_3a7020;
    }
    ctx->pc = 0x3A7018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A7020u);
        ctx->pc = 0x3A701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7018u;
            // 0x3a701c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A7020u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A7020u; }
            if (ctx->pc != 0x3A7020u) { return; }
        }
        }
    }
    ctx->pc = 0x3A7020u;
label_3a7020:
    // 0x3a7020: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3a7020u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7024:
    // 0x3a7024: 0x3c074280  lui         $a3, 0x4280
    ctx->pc = 0x3a7024u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17024 << 16));
label_3a7028:
    // 0x3a7028: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3a7028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3a702c:
    // 0x3a702c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3a702cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3a7030:
    // 0x3a7030: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x3a7030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3a7034:
    // 0x3a7034: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a7034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3a7038:
    // 0x3a7038: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a7038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a703c:
    // 0x3a703c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3a703cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3a7040:
    // 0x3a7040: 0x24a5f3f0  addiu       $a1, $a1, -0xC10
    ctx->pc = 0x3a7040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964208));
label_3a7044:
    // 0x3a7044: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3a7044u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7048:
    // 0x3a7048: 0x0  nop
    ctx->pc = 0x3a7048u;
    // NOP
label_3a704c:
    // 0x3a704c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a704cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3a7050:
    // 0x3a7050: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x3a7050u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a7054:
    // 0x3a7054: 0x0  nop
    ctx->pc = 0x3a7054u;
    // NOP
label_3a7058:
    // 0x3a7058: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x3a7058u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3a705c:
    // 0x3a705c: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x3a705cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3a7060:
    // 0x3a7060: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x3a7060u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3a7064:
    // 0x3a7064: 0xc0bc21c  jal         func_2F0870
label_3a7068:
    if (ctx->pc == 0x3A7068u) {
        ctx->pc = 0x3A7068u;
            // 0x3a7068: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3A706Cu;
        goto label_3a706c;
    }
    ctx->pc = 0x3A7064u;
    SET_GPR_U32(ctx, 31, 0x3A706Cu);
    ctx->pc = 0x3A7068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7064u;
            // 0x3a7068: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0870u;
    if (runtime->hasFunction(0x2F0870u)) {
        auto targetFn = runtime->lookupFunction(0x2F0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A706Cu; }
        if (ctx->pc != 0x3A706Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0870_0x2f0870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A706Cu; }
        if (ctx->pc != 0x3A706Cu) { return; }
    }
    ctx->pc = 0x3A706Cu;
label_3a706c:
    // 0x3a706c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3a706cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a7070:
    // 0x3a7070: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a7070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a7074:
    // 0x3a7074: 0x320f809  jalr        $t9
label_3a7078:
    if (ctx->pc == 0x3A7078u) {
        ctx->pc = 0x3A7078u;
            // 0x3a7078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A707Cu;
        goto label_3a707c;
    }
    ctx->pc = 0x3A7074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A707Cu);
        ctx->pc = 0x3A7078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7074u;
            // 0x3a7078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A707Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A707Cu; }
            if (ctx->pc != 0x3A707Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A707Cu;
label_3a707c:
    // 0x3a707c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a707cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a7080:
    // 0x3a7080: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a7080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a7084:
    // 0x3a7084: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a7084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a7088:
    // 0x3a7088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a7088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a708c:
    // 0x3a708c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a708cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a7090:
    // 0x3a7090: 0x3e00008  jr          $ra
label_3a7094:
    if (ctx->pc == 0x3A7094u) {
        ctx->pc = 0x3A7094u;
            // 0x3a7094: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3A7098u;
        goto label_3a7098;
    }
    ctx->pc = 0x3A7090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7090u;
            // 0x3a7094: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A7098u;
label_3a7098:
    // 0x3a7098: 0x0  nop
    ctx->pc = 0x3a7098u;
    // NOP
label_3a709c:
    // 0x3a709c: 0x0  nop
    ctx->pc = 0x3a709cu;
    // NOP
label_3a70a0:
    // 0x3a70a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3a70a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3a70a4:
    // 0x3a70a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3a70a8:
    // 0x3a70a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a70a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3a70ac:
    // 0x3a70ac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3a70acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3a70b0:
    // 0x3a70b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a70b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3a70b4:
    // 0x3a70b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a70b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3a70b8:
    // 0x3a70b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a70b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3a70bc:
    // 0x3a70bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a70bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a70c0:
    // 0x3a70c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3a70c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a70c4:
    // 0x3a70c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a70c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3a70c8:
    // 0x3a70c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3a70c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a70cc:
    // 0x3a70cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a70ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a70d0:
    // 0x3a70d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3a70d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3a70d4:
    // 0x3a70d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a70d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a70d8:
    // 0x3a70d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a70d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a70dc:
    // 0x3a70dc: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3a70dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_3a70e0:
    // 0x3a70e0: 0x8c5389e0  lw          $s3, -0x7620($v0)
    ctx->pc = 0x3a70e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3a70e4:
    // 0x3a70e4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3a70e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a70e8:
    // 0x3a70e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a70ec:
    // 0x3a70ec: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3a70ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3a70f0:
    // 0x3a70f0: 0xc0506ac  jal         func_141AB0
label_3a70f4:
    if (ctx->pc == 0x3A70F4u) {
        ctx->pc = 0x3A70F4u;
            // 0x3a70f4: 0x2631211c  addiu       $s1, $s1, 0x211C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8476));
        ctx->pc = 0x3A70F8u;
        goto label_3a70f8;
    }
    ctx->pc = 0x3A70F0u;
    SET_GPR_U32(ctx, 31, 0x3A70F8u);
    ctx->pc = 0x3A70F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A70F0u;
            // 0x3a70f4: 0x2631211c  addiu       $s1, $s1, 0x211C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A70F8u; }
        if (ctx->pc != 0x3A70F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A70F8u; }
        if (ctx->pc != 0x3A70F8u) { return; }
    }
    ctx->pc = 0x3A70F8u;
label_3a70f8:
    // 0x3a70f8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3a70f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a70fc:
    // 0x3a70fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a70fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a7100:
    // 0x3a7100: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a7100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a7104:
    // 0x3a7104: 0x320f809  jalr        $t9
label_3a7108:
    if (ctx->pc == 0x3A7108u) {
        ctx->pc = 0x3A7108u;
            // 0x3a7108: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3A710Cu;
        goto label_3a710c;
    }
    ctx->pc = 0x3A7104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A710Cu);
        ctx->pc = 0x3A7108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7104u;
            // 0x3a7108: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A710Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A710Cu; }
            if (ctx->pc != 0x3A710Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3A710Cu;
label_3a710c:
    // 0x3a710c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3a710cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3a7110:
    // 0x3a7110: 0x15f43c  dsll32      $fp, $s5, 16
    ctx->pc = 0x3a7110u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) << (32 + 16));
label_3a7114:
    // 0x3a7114: 0xc441a2a8  lwc1        $f1, -0x5D58($v0)
    ctx->pc = 0x3a7114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a7118:
    // 0x3a7118: 0x14b43c  dsll32      $s6, $s4, 16
    ctx->pc = 0x3a7118u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 20) << (32 + 16));
label_3a711c:
    // 0x3a711c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3a711cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3a7120:
    // 0x3a7120: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x3a7120u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3a7124:
    // 0x3a7124: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3a7124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3a7128:
    // 0x3a7128: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x3a7128u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3a712c:
    // 0x3a712c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3a712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_3a7130:
    // 0x3a7130: 0x1ef43f  dsra32      $fp, $fp, 16
    ctx->pc = 0x3a7130u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
label_3a7134:
    // 0x3a7134: 0xc440a2ac  lwc1        $f0, -0x5D54($v0)
    ctx->pc = 0x3a7134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a7138:
    // 0x3a7138: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x3a7138u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
label_3a713c:
    // 0x3a713c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a713cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3a7140:
    // 0x3a7140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a7140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a7144:
    // 0x3a7144: 0x24a5a2a0  addiu       $a1, $a1, -0x5D60
    ctx->pc = 0x3a7144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943392));
label_3a7148:
    // 0x3a7148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a714c:
    // 0x3a714c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3a714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3a7150:
    // 0x3a7150: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x3a7150u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3a7154:
    // 0x3a7154: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3a7154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3a7158:
    // 0x3a7158: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a7158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a715c:
    // 0x3a715c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a715cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a7160:
    // 0x3a7160: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x3a7160u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_3a7164:
    // 0x3a7164: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3a7164u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7168:
    // 0x3a7168: 0x0  nop
    ctx->pc = 0x3a7168u;
    // NOP
label_3a716c:
    // 0x3a716c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a716cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a7170:
    // 0x3a7170: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a7170u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7174:
    // 0x3a7174: 0x0  nop
    ctx->pc = 0x3a7174u;
    // NOP
label_3a7178:
    // 0x3a7178: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a7178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a717c:
    // 0x3a717c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3a717cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7180:
    // 0x3a7180: 0x0  nop
    ctx->pc = 0x3a7180u;
    // NOP
label_3a7184:
    // 0x3a7184: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3a7184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3a7188:
    // 0x3a7188: 0x44170800  mfc1        $s7, $f1
    ctx->pc = 0x3a7188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_3a718c:
    // 0x3a718c: 0x0  nop
    ctx->pc = 0x3a718cu;
    // NOP
label_3a7190:
    // 0x3a7190: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x3a7190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_3a7194:
    // 0x3a7194: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3a7194u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7198:
    // 0x3a7198: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3a7198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3a719c:
    // 0x3a719c: 0x2d01023  subu        $v0, $s6, $s0
    ctx->pc = 0x3a719cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_3a71a0:
    // 0x3a71a0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3a71a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3a71a4:
    // 0x3a71a4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3a71a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_3a71a8:
    // 0x3a71a8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3a71a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a71ac:
    // 0x3a71ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a71acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a71b0:
    // 0x3a71b0: 0x0  nop
    ctx->pc = 0x3a71b0u;
    // NOP
label_3a71b4:
    // 0x3a71b4: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x3a71b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_3a71b8:
    // 0x3a71b8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a71b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a71bc:
    // 0x3a71bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a71bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a71c0:
    // 0x3a71c0: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x3a71c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a71c4:
    // 0x3a71c4: 0xc0bc284  jal         func_2F0A10
label_3a71c8:
    if (ctx->pc == 0x3A71C8u) {
        ctx->pc = 0x3A71C8u;
            // 0x3a71c8: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3A71CCu;
        goto label_3a71cc;
    }
    ctx->pc = 0x3A71C4u;
    SET_GPR_U32(ctx, 31, 0x3A71CCu);
    ctx->pc = 0x3A71C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A71C4u;
            // 0x3a71c8: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A71CCu; }
        if (ctx->pc != 0x3A71CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A71CCu; }
        if (ctx->pc != 0x3A71CCu) { return; }
    }
    ctx->pc = 0x3A71CCu;
label_3a71cc:
    // 0x3a71cc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3a71ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a71d0:
    // 0x3a71d0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3a71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3a71d4:
    // 0x3a71d4: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x3a71d4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3a71d8:
    // 0x3a71d8: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x3a71d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_3a71dc:
    // 0x3a71dc: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a71dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3a71e0:
    // 0x3a71e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a71e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a71e4:
    // 0x3a71e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a71e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a71e8:
    // 0x3a71e8: 0x24a5a2a0  addiu       $a1, $a1, -0x5D60
    ctx->pc = 0x3a71e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943392));
label_3a71ec:
    // 0x3a71ec: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x3a71ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_3a71f0:
    // 0x3a71f0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a71f4:
    // 0x3a71f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a71f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a71f8:
    // 0x3a71f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a71f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a71fc:
    // 0x3a71fc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a71fcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7200:
    // 0x3a7200: 0x0  nop
    ctx->pc = 0x3a7200u;
    // NOP
label_3a7204:
    // 0x3a7204: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a7204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a7208:
    // 0x3a7208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a720c:
    // 0x3a720c: 0x0  nop
    ctx->pc = 0x3a720cu;
    // NOP
label_3a7210:
    // 0x3a7210: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a7210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a7214:
    // 0x3a7214: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3a7214u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7218:
    // 0x3a7218: 0x0  nop
    ctx->pc = 0x3a7218u;
    // NOP
label_3a721c:
    // 0x3a721c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3a721cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3a7220:
    // 0x3a7220: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3a7220u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7224:
    // 0x3a7224: 0x0  nop
    ctx->pc = 0x3a7224u;
    // NOP
label_3a7228:
    // 0x3a7228: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3a7228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_3a722c:
    // 0x3a722c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3a722cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7230:
    // 0x3a7230: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a7230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a7234:
    // 0x3a7234: 0xc0bc284  jal         func_2F0A10
label_3a7238:
    if (ctx->pc == 0x3A7238u) {
        ctx->pc = 0x3A7238u;
            // 0x3a7238: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3A723Cu;
        goto label_3a723c;
    }
    ctx->pc = 0x3A7234u;
    SET_GPR_U32(ctx, 31, 0x3A723Cu);
    ctx->pc = 0x3A7238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7234u;
            // 0x3a7238: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A723Cu; }
        if (ctx->pc != 0x3A723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A723Cu; }
        if (ctx->pc != 0x3A723Cu) { return; }
    }
    ctx->pc = 0x3A723Cu;
label_3a723c:
    // 0x3a723c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3a723cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a7240:
    // 0x3a7240: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3a7240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3a7244:
    // 0x3a7244: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x3a7244u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3a7248:
    // 0x3a7248: 0x3d7b023  subu        $s6, $fp, $s7
    ctx->pc = 0x3a7248u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_3a724c:
    // 0x3a724c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a724cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3a7250:
    // 0x3a7250: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a7250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a7254:
    // 0x3a7254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a7254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7258:
    // 0x3a7258: 0x24a5a2a0  addiu       $a1, $a1, -0x5D60
    ctx->pc = 0x3a7258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943392));
label_3a725c:
    // 0x3a725c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x3a725cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_3a7260:
    // 0x3a7260: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a7260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a7264:
    // 0x3a7264: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a7264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a7268:
    // 0x3a7268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a726c:
    // 0x3a726c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a726cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7270:
    // 0x3a7270: 0x0  nop
    ctx->pc = 0x3a7270u;
    // NOP
label_3a7274:
    // 0x3a7274: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a7274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a7278:
    // 0x3a7278: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a727c:
    // 0x3a727c: 0x0  nop
    ctx->pc = 0x3a727cu;
    // NOP
label_3a7280:
    // 0x3a7280: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3a7280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3a7284:
    // 0x3a7284: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3a7284u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7288:
    // 0x3a7288: 0x0  nop
    ctx->pc = 0x3a7288u;
    // NOP
label_3a728c:
    // 0x3a728c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3a728cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3a7290:
    // 0x3a7290: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3a7290u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7294:
    // 0x3a7294: 0x0  nop
    ctx->pc = 0x3a7294u;
    // NOP
label_3a7298:
    // 0x3a7298: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3a7298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_3a729c:
    // 0x3a729c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3a729cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a72a0:
    // 0x3a72a0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a72a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a72a4:
    // 0x3a72a4: 0xc0bc284  jal         func_2F0A10
label_3a72a8:
    if (ctx->pc == 0x3A72A8u) {
        ctx->pc = 0x3A72A8u;
            // 0x3a72a8: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3A72ACu;
        goto label_3a72ac;
    }
    ctx->pc = 0x3A72A4u;
    SET_GPR_U32(ctx, 31, 0x3A72ACu);
    ctx->pc = 0x3A72A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A72A4u;
            // 0x3a72a8: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A72ACu; }
        if (ctx->pc != 0x3A72ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A72ACu; }
        if (ctx->pc != 0x3A72ACu) { return; }
    }
    ctx->pc = 0x3A72ACu;
label_3a72ac:
    // 0x3a72ac: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x3a72acu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a72b0:
    // 0x3a72b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3a72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3a72b4:
    // 0x3a72b4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3a72b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3a72b8:
    // 0x3a72b8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3a72b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3a72bc:
    // 0x3a72bc: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x3a72bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3a72c0:
    // 0x3a72c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a72c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a72c4:
    // 0x3a72c4: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3a72c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3a72c8:
    // 0x3a72c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a72c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a72cc:
    // 0x3a72cc: 0x24a5a2a0  addiu       $a1, $a1, -0x5D60
    ctx->pc = 0x3a72ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943392));
label_3a72d0:
    // 0x3a72d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a72d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a72d4:
    // 0x3a72d4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3a72d4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a72d8:
    // 0x3a72d8: 0x0  nop
    ctx->pc = 0x3a72d8u;
    // NOP
label_3a72dc:
    // 0x3a72dc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x3a72dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_3a72e0:
    // 0x3a72e0: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3a72e0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a72e4:
    // 0x3a72e4: 0x0  nop
    ctx->pc = 0x3a72e4u;
    // NOP
label_3a72e8:
    // 0x3a72e8: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x3a72e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_3a72ec:
    // 0x3a72ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3a72ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a72f0:
    // 0x3a72f0: 0x0  nop
    ctx->pc = 0x3a72f0u;
    // NOP
label_3a72f4:
    // 0x3a72f4: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x3a72f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_3a72f8:
    // 0x3a72f8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3a72f8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a72fc:
    // 0x3a72fc: 0x0  nop
    ctx->pc = 0x3a72fcu;
    // NOP
label_3a7300:
    // 0x3a7300: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3a7300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3a7304:
    // 0x3a7304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a7304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7308:
    // 0x3a7308: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3a7308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3a730c:
    // 0x3a730c: 0xc0bc284  jal         func_2F0A10
label_3a7310:
    if (ctx->pc == 0x3A7310u) {
        ctx->pc = 0x3A7310u;
            // 0x3a7310: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3A7314u;
        goto label_3a7314;
    }
    ctx->pc = 0x3A730Cu;
    SET_GPR_U32(ctx, 31, 0x3A7314u);
    ctx->pc = 0x3A7310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A730Cu;
            // 0x3a7310: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7314u; }
        if (ctx->pc != 0x3A7314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A7314u; }
        if (ctx->pc != 0x3A7314u) { return; }
    }
    ctx->pc = 0x3A7314u;
label_3a7314:
    // 0x3a7314: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3a7314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3a7318:
    // 0x3a7318: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3a7318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3a731c:
    // 0x3a731c: 0x320f809  jalr        $t9
label_3a7320:
    if (ctx->pc == 0x3A7320u) {
        ctx->pc = 0x3A7320u;
            // 0x3a7320: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A7324u;
        goto label_3a7324;
    }
    ctx->pc = 0x3A731Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A7324u);
        ctx->pc = 0x3A7320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A731Cu;
            // 0x3a7320: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A7324u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A7324u; }
            if (ctx->pc != 0x3A7324u) { return; }
        }
        }
    }
    ctx->pc = 0x3A7324u;
label_3a7324:
    // 0x3a7324: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a7324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3a7328:
    // 0x3a7328: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3a7328u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a732c:
    // 0x3a732c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a732cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a7330:
    // 0x3a7330: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a7330u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a7334:
    // 0x3a7334: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a7334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a7338:
    // 0x3a7338: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a7338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a733c:
    // 0x3a733c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a733cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a7340:
    // 0x3a7340: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a7340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a7344:
    // 0x3a7344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a7344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a7348:
    // 0x3a7348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a7348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a734c:
    // 0x3a734c: 0x3e00008  jr          $ra
label_3a7350:
    if (ctx->pc == 0x3A7350u) {
        ctx->pc = 0x3A7350u;
            // 0x3a7350: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3A7354u;
        goto label_3a7354;
    }
    ctx->pc = 0x3A734Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A734Cu;
            // 0x3a7350: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A7354u;
label_3a7354:
    // 0x3a7354: 0x0  nop
    ctx->pc = 0x3a7354u;
    // NOP
label_3a7358:
    // 0x3a7358: 0x0  nop
    ctx->pc = 0x3a7358u;
    // NOP
label_3a735c:
    // 0x3a735c: 0x0  nop
    ctx->pc = 0x3a735cu;
    // NOP
}
