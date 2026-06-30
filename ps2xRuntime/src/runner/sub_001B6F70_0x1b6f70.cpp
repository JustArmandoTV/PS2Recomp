#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6F70
// Address: 0x1b6f70 - 0x1b7240
void sub_001B6F70_0x1b6f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6F70_0x1b6f70");
#endif

    switch (ctx->pc) {
        case 0x1b6f70u: goto label_1b6f70;
        case 0x1b6f74u: goto label_1b6f74;
        case 0x1b6f78u: goto label_1b6f78;
        case 0x1b6f7cu: goto label_1b6f7c;
        case 0x1b6f80u: goto label_1b6f80;
        case 0x1b6f84u: goto label_1b6f84;
        case 0x1b6f88u: goto label_1b6f88;
        case 0x1b6f8cu: goto label_1b6f8c;
        case 0x1b6f90u: goto label_1b6f90;
        case 0x1b6f94u: goto label_1b6f94;
        case 0x1b6f98u: goto label_1b6f98;
        case 0x1b6f9cu: goto label_1b6f9c;
        case 0x1b6fa0u: goto label_1b6fa0;
        case 0x1b6fa4u: goto label_1b6fa4;
        case 0x1b6fa8u: goto label_1b6fa8;
        case 0x1b6facu: goto label_1b6fac;
        case 0x1b6fb0u: goto label_1b6fb0;
        case 0x1b6fb4u: goto label_1b6fb4;
        case 0x1b6fb8u: goto label_1b6fb8;
        case 0x1b6fbcu: goto label_1b6fbc;
        case 0x1b6fc0u: goto label_1b6fc0;
        case 0x1b6fc4u: goto label_1b6fc4;
        case 0x1b6fc8u: goto label_1b6fc8;
        case 0x1b6fccu: goto label_1b6fcc;
        case 0x1b6fd0u: goto label_1b6fd0;
        case 0x1b6fd4u: goto label_1b6fd4;
        case 0x1b6fd8u: goto label_1b6fd8;
        case 0x1b6fdcu: goto label_1b6fdc;
        case 0x1b6fe0u: goto label_1b6fe0;
        case 0x1b6fe4u: goto label_1b6fe4;
        case 0x1b6fe8u: goto label_1b6fe8;
        case 0x1b6fecu: goto label_1b6fec;
        case 0x1b6ff0u: goto label_1b6ff0;
        case 0x1b6ff4u: goto label_1b6ff4;
        case 0x1b6ff8u: goto label_1b6ff8;
        case 0x1b6ffcu: goto label_1b6ffc;
        case 0x1b7000u: goto label_1b7000;
        case 0x1b7004u: goto label_1b7004;
        case 0x1b7008u: goto label_1b7008;
        case 0x1b700cu: goto label_1b700c;
        case 0x1b7010u: goto label_1b7010;
        case 0x1b7014u: goto label_1b7014;
        case 0x1b7018u: goto label_1b7018;
        case 0x1b701cu: goto label_1b701c;
        case 0x1b7020u: goto label_1b7020;
        case 0x1b7024u: goto label_1b7024;
        case 0x1b7028u: goto label_1b7028;
        case 0x1b702cu: goto label_1b702c;
        case 0x1b7030u: goto label_1b7030;
        case 0x1b7034u: goto label_1b7034;
        case 0x1b7038u: goto label_1b7038;
        case 0x1b703cu: goto label_1b703c;
        case 0x1b7040u: goto label_1b7040;
        case 0x1b7044u: goto label_1b7044;
        case 0x1b7048u: goto label_1b7048;
        case 0x1b704cu: goto label_1b704c;
        case 0x1b7050u: goto label_1b7050;
        case 0x1b7054u: goto label_1b7054;
        case 0x1b7058u: goto label_1b7058;
        case 0x1b705cu: goto label_1b705c;
        case 0x1b7060u: goto label_1b7060;
        case 0x1b7064u: goto label_1b7064;
        case 0x1b7068u: goto label_1b7068;
        case 0x1b706cu: goto label_1b706c;
        case 0x1b7070u: goto label_1b7070;
        case 0x1b7074u: goto label_1b7074;
        case 0x1b7078u: goto label_1b7078;
        case 0x1b707cu: goto label_1b707c;
        case 0x1b7080u: goto label_1b7080;
        case 0x1b7084u: goto label_1b7084;
        case 0x1b7088u: goto label_1b7088;
        case 0x1b708cu: goto label_1b708c;
        case 0x1b7090u: goto label_1b7090;
        case 0x1b7094u: goto label_1b7094;
        case 0x1b7098u: goto label_1b7098;
        case 0x1b709cu: goto label_1b709c;
        case 0x1b70a0u: goto label_1b70a0;
        case 0x1b70a4u: goto label_1b70a4;
        case 0x1b70a8u: goto label_1b70a8;
        case 0x1b70acu: goto label_1b70ac;
        case 0x1b70b0u: goto label_1b70b0;
        case 0x1b70b4u: goto label_1b70b4;
        case 0x1b70b8u: goto label_1b70b8;
        case 0x1b70bcu: goto label_1b70bc;
        case 0x1b70c0u: goto label_1b70c0;
        case 0x1b70c4u: goto label_1b70c4;
        case 0x1b70c8u: goto label_1b70c8;
        case 0x1b70ccu: goto label_1b70cc;
        case 0x1b70d0u: goto label_1b70d0;
        case 0x1b70d4u: goto label_1b70d4;
        case 0x1b70d8u: goto label_1b70d8;
        case 0x1b70dcu: goto label_1b70dc;
        case 0x1b70e0u: goto label_1b70e0;
        case 0x1b70e4u: goto label_1b70e4;
        case 0x1b70e8u: goto label_1b70e8;
        case 0x1b70ecu: goto label_1b70ec;
        case 0x1b70f0u: goto label_1b70f0;
        case 0x1b70f4u: goto label_1b70f4;
        case 0x1b70f8u: goto label_1b70f8;
        case 0x1b70fcu: goto label_1b70fc;
        case 0x1b7100u: goto label_1b7100;
        case 0x1b7104u: goto label_1b7104;
        case 0x1b7108u: goto label_1b7108;
        case 0x1b710cu: goto label_1b710c;
        case 0x1b7110u: goto label_1b7110;
        case 0x1b7114u: goto label_1b7114;
        case 0x1b7118u: goto label_1b7118;
        case 0x1b711cu: goto label_1b711c;
        case 0x1b7120u: goto label_1b7120;
        case 0x1b7124u: goto label_1b7124;
        case 0x1b7128u: goto label_1b7128;
        case 0x1b712cu: goto label_1b712c;
        case 0x1b7130u: goto label_1b7130;
        case 0x1b7134u: goto label_1b7134;
        case 0x1b7138u: goto label_1b7138;
        case 0x1b713cu: goto label_1b713c;
        case 0x1b7140u: goto label_1b7140;
        case 0x1b7144u: goto label_1b7144;
        case 0x1b7148u: goto label_1b7148;
        case 0x1b714cu: goto label_1b714c;
        case 0x1b7150u: goto label_1b7150;
        case 0x1b7154u: goto label_1b7154;
        case 0x1b7158u: goto label_1b7158;
        case 0x1b715cu: goto label_1b715c;
        case 0x1b7160u: goto label_1b7160;
        case 0x1b7164u: goto label_1b7164;
        case 0x1b7168u: goto label_1b7168;
        case 0x1b716cu: goto label_1b716c;
        case 0x1b7170u: goto label_1b7170;
        case 0x1b7174u: goto label_1b7174;
        case 0x1b7178u: goto label_1b7178;
        case 0x1b717cu: goto label_1b717c;
        case 0x1b7180u: goto label_1b7180;
        case 0x1b7184u: goto label_1b7184;
        case 0x1b7188u: goto label_1b7188;
        case 0x1b718cu: goto label_1b718c;
        case 0x1b7190u: goto label_1b7190;
        case 0x1b7194u: goto label_1b7194;
        case 0x1b7198u: goto label_1b7198;
        case 0x1b719cu: goto label_1b719c;
        case 0x1b71a0u: goto label_1b71a0;
        case 0x1b71a4u: goto label_1b71a4;
        case 0x1b71a8u: goto label_1b71a8;
        case 0x1b71acu: goto label_1b71ac;
        case 0x1b71b0u: goto label_1b71b0;
        case 0x1b71b4u: goto label_1b71b4;
        case 0x1b71b8u: goto label_1b71b8;
        case 0x1b71bcu: goto label_1b71bc;
        case 0x1b71c0u: goto label_1b71c0;
        case 0x1b71c4u: goto label_1b71c4;
        case 0x1b71c8u: goto label_1b71c8;
        case 0x1b71ccu: goto label_1b71cc;
        case 0x1b71d0u: goto label_1b71d0;
        case 0x1b71d4u: goto label_1b71d4;
        case 0x1b71d8u: goto label_1b71d8;
        case 0x1b71dcu: goto label_1b71dc;
        case 0x1b71e0u: goto label_1b71e0;
        case 0x1b71e4u: goto label_1b71e4;
        case 0x1b71e8u: goto label_1b71e8;
        case 0x1b71ecu: goto label_1b71ec;
        case 0x1b71f0u: goto label_1b71f0;
        case 0x1b71f4u: goto label_1b71f4;
        case 0x1b71f8u: goto label_1b71f8;
        case 0x1b71fcu: goto label_1b71fc;
        case 0x1b7200u: goto label_1b7200;
        case 0x1b7204u: goto label_1b7204;
        case 0x1b7208u: goto label_1b7208;
        case 0x1b720cu: goto label_1b720c;
        case 0x1b7210u: goto label_1b7210;
        case 0x1b7214u: goto label_1b7214;
        case 0x1b7218u: goto label_1b7218;
        case 0x1b721cu: goto label_1b721c;
        case 0x1b7220u: goto label_1b7220;
        case 0x1b7224u: goto label_1b7224;
        case 0x1b7228u: goto label_1b7228;
        case 0x1b722cu: goto label_1b722c;
        case 0x1b7230u: goto label_1b7230;
        case 0x1b7234u: goto label_1b7234;
        case 0x1b7238u: goto label_1b7238;
        case 0x1b723cu: goto label_1b723c;
        default: break;
    }

    ctx->pc = 0x1b6f70u;

label_1b6f70:
    // 0x1b6f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b6f74:
    // 0x1b6f74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b6f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1b6f78:
    // 0x1b6f78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f7c:
    // 0x1b6f7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b6f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f80:
    // 0x1b6f80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b6f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b6f84:
    // 0x1b6f84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b6f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1b6f88:
    // 0x1b6f88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b6f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f8c:
    // 0x1b6f8c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b6f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1b6f90:
    // 0x1b6f90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b6f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b6f94:
    // 0x1b6f94: 0xc06a25c  jal         func_1A8970
label_1b6f98:
    if (ctx->pc == 0x1B6F98u) {
        ctx->pc = 0x1B6F98u;
            // 0x1b6f98: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F9Cu;
        goto label_1b6f9c;
    }
    ctx->pc = 0x1B6F94u;
    SET_GPR_U32(ctx, 31, 0x1B6F9Cu);
    ctx->pc = 0x1B6F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6F94u;
            // 0x1b6f98: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F9Cu; }
        if (ctx->pc != 0x1B6F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6F9Cu; }
        if (ctx->pc != 0x1B6F9Cu) { return; }
    }
    ctx->pc = 0x1B6F9Cu;
label_1b6f9c:
    // 0x1b6f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6fa0:
    // 0x1b6fa0: 0xc06d81c  jal         func_1B6070
label_1b6fa4:
    if (ctx->pc == 0x1B6FA4u) {
        ctx->pc = 0x1B6FA4u;
            // 0x1b6fa4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x1B6FA8u;
        goto label_1b6fa8;
    }
    ctx->pc = 0x1B6FA0u;
    SET_GPR_U32(ctx, 31, 0x1B6FA8u);
    ctx->pc = 0x1B6FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FA0u;
            // 0x1b6fa4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FA8u; }
        if (ctx->pc != 0x1B6FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FA8u; }
        if (ctx->pc != 0x1B6FA8u) { return; }
    }
    ctx->pc = 0x1B6FA8u;
label_1b6fa8:
    // 0x1b6fa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6fac:
    // 0x1b6fac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b6facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b6fb0:
    // 0x1b6fb0: 0x26300d88  addiu       $s0, $s1, 0xD88
    ctx->pc = 0x1b6fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
label_1b6fb4:
    // 0x1b6fb4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b6fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b6fb8:
    // 0x1b6fb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6fbc:
    // 0x1b6fbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6fc0:
    // 0x1b6fc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b6fc4:
    if (ctx->pc == 0x1B6FC4u) {
        ctx->pc = 0x1B6FC4u;
            // 0x1b6fc4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FC8u;
        goto label_1b6fc8;
    }
    ctx->pc = 0x1B6FC0u;
    {
        const bool branch_taken_0x1b6fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FC0u;
            // 0x1b6fc4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6fc0) {
            ctx->pc = 0x1B6FD0u;
            goto label_1b6fd0;
        }
    }
    ctx->pc = 0x1B6FC8u;
label_1b6fc8:
    // 0x1b6fc8: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1b6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
label_1b6fcc:
    // 0x1b6fcc: 0x24427008  addiu       $v0, $v0, 0x7008
    ctx->pc = 0x1b6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28680));
label_1b6fd0:
    // 0x1b6fd0: 0x40f809  jalr        $v0
label_1b6fd4:
    if (ctx->pc == 0x1B6FD4u) {
        ctx->pc = 0x1B6FD8u;
        goto label_1b6fd8;
    }
    ctx->pc = 0x1B6FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B6FD8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B6FD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FD8u; }
            if (ctx->pc != 0x1B6FD8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B6FD8u;
label_1b6fd8:
    // 0x1b6fd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b6fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b6fdc:
    // 0x1b6fdc: 0xc06a262  jal         func_1A8988
label_1b6fe0:
    if (ctx->pc == 0x1B6FE0u) {
        ctx->pc = 0x1B6FE0u;
            // 0x1b6fe0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FE4u;
        goto label_1b6fe4;
    }
    ctx->pc = 0x1B6FDCu;
    SET_GPR_U32(ctx, 31, 0x1B6FE4u);
    ctx->pc = 0x1B6FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FDCu;
            // 0x1b6fe0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FE4u; }
        if (ctx->pc != 0x1B6FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6FE4u; }
        if (ctx->pc != 0x1B6FE4u) { return; }
    }
    ctx->pc = 0x1B6FE4u;
label_1b6fe4:
    // 0x1b6fe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6fe8:
    // 0x1b6fe8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b6fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b6fec:
    // 0x1b6fec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b6fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6ff0:
    // 0x1b6ff0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b6ff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6ff4:
    // 0x1b6ff4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b6ff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b6ff8:
    // 0x1b6ff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b6ffc:
    // 0x1b6ffc: 0x3e00008  jr          $ra
label_1b7000:
    if (ctx->pc == 0x1B7000u) {
        ctx->pc = 0x1B7000u;
            // 0x1b7000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B7004u;
        goto label_1b7004;
    }
    ctx->pc = 0x1B6FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6FFCu;
            // 0x1b7000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7004u;
label_1b7004:
    // 0x1b7004: 0x0  nop
    ctx->pc = 0x1b7004u;
    // NOP
label_1b7008:
    // 0x1b7008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b700c:
    // 0x1b700c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b7010:
    // 0x1b7010: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b7010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b7014:
    // 0x1b7014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b7018:
    // 0x1b7018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b701c:
    // 0x1b701c: 0xc06dc90  jal         func_1B7240
label_1b7020:
    if (ctx->pc == 0x1B7020u) {
        ctx->pc = 0x1B7020u;
            // 0x1b7020: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7024u;
        goto label_1b7024;
    }
    ctx->pc = 0x1B701Cu;
    SET_GPR_U32(ctx, 31, 0x1B7024u);
    ctx->pc = 0x1B7020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B701Cu;
            // 0x1b7020: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7240u;
    if (runtime->hasFunction(0x1B7240u)) {
        auto targetFn = runtime->lookupFunction(0x1B7240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7024u; }
        if (ctx->pc != 0x1B7024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7240_0x1b7240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7024u; }
        if (ctx->pc != 0x1B7024u) { return; }
    }
    ctx->pc = 0x1B7024u;
label_1b7024:
    // 0x1b7024: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b7028:
    if (ctx->pc == 0x1B7028u) {
        ctx->pc = 0x1B7028u;
            // 0x1b7028: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B702Cu;
        goto label_1b702c;
    }
    ctx->pc = 0x1B7024u;
    {
        const bool branch_taken_0x1b7024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7024u;
            // 0x1b7028: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7024) {
            ctx->pc = 0x1B703Cu;
            goto label_1b703c;
        }
    }
    ctx->pc = 0x1B702Cu;
label_1b702c:
    // 0x1b702c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1b702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b7030:
    // 0x1b7030: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b7030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1b7034:
    // 0x1b7034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7038:
    // 0x1b7038: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b7038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1b703c:
    // 0x1b703c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b703cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7040:
    // 0x1b7040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b7044:
    // 0x1b7044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7048:
    // 0x1b7048: 0x3e00008  jr          $ra
label_1b704c:
    if (ctx->pc == 0x1B704Cu) {
        ctx->pc = 0x1B704Cu;
            // 0x1b704c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B7050u;
        goto label_1b7050;
    }
    ctx->pc = 0x1B7048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7048u;
            // 0x1b704c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7050u;
label_1b7050:
    // 0x1b7050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b7054:
    // 0x1b7054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b7058:
    // 0x1b7058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b705c:
    // 0x1b705c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b7060:
    // 0x1b7060: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b7060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b7064:
    // 0x1b7064: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b7064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b7068:
    // 0x1b7068: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b7068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b706c:
    // 0x1b706c: 0xc06dc90  jal         func_1B7240
label_1b7070:
    if (ctx->pc == 0x1B7070u) {
        ctx->pc = 0x1B7070u;
            // 0x1b7070: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7074u;
        goto label_1b7074;
    }
    ctx->pc = 0x1B706Cu;
    SET_GPR_U32(ctx, 31, 0x1B7074u);
    ctx->pc = 0x1B7070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B706Cu;
            // 0x1b7070: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7240u;
    if (runtime->hasFunction(0x1B7240u)) {
        auto targetFn = runtime->lookupFunction(0x1B7240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7074u; }
        if (ctx->pc != 0x1B7074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7240_0x1b7240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7074u; }
        if (ctx->pc != 0x1B7074u) { return; }
    }
    ctx->pc = 0x1B7074u;
label_1b7074:
    // 0x1b7074: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1b7078:
    if (ctx->pc == 0x1B7078u) {
        ctx->pc = 0x1B7078u;
            // 0x1b7078: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1B707Cu;
        goto label_1b707c;
    }
    ctx->pc = 0x1B7074u;
    {
        const bool branch_taken_0x1b7074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7074) {
            ctx->pc = 0x1B7078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7074u;
            // 0x1b7078: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7098u;
            goto label_1b7098;
        }
    }
    ctx->pc = 0x1B707Cu;
label_1b707c:
    // 0x1b707c: 0x8e031030  lw          $v1, 0x1030($s0)
    ctx->pc = 0x1b707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4144)));
label_1b7080:
    // 0x1b7080: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b7080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1b7084:
    // 0x1b7084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7088:
    // 0x1b7088: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b7088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1b708c:
    // 0x1b708c: 0x8c839b3c  lw          $v1, -0x64C4($a0)
    ctx->pc = 0x1b708cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941500)));
label_1b7090:
    // 0x1b7090: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1b7090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1b7094:
    // 0x1b7094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7098:
    // 0x1b7098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b709c:
    // 0x1b709c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b709cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b70a0:
    // 0x1b70a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b70a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b70a4:
    // 0x1b70a4: 0x3e00008  jr          $ra
label_1b70a8:
    if (ctx->pc == 0x1B70A8u) {
        ctx->pc = 0x1B70A8u;
            // 0x1b70a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B70ACu;
        goto label_1b70ac;
    }
    ctx->pc = 0x1B70A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B70A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B70A4u;
            // 0x1b70a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B70ACu;
label_1b70ac:
    // 0x1b70ac: 0x0  nop
    ctx->pc = 0x1b70acu;
    // NOP
label_1b70b0:
    // 0x1b70b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b70b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b70b4:
    // 0x1b70b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b70b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b70b8:
    // 0x1b70b8: 0xc06dc90  jal         func_1B7240
label_1b70bc:
    if (ctx->pc == 0x1B70BCu) {
        ctx->pc = 0x1B70C0u;
        goto label_1b70c0;
    }
    ctx->pc = 0x1B70B8u;
    SET_GPR_U32(ctx, 31, 0x1B70C0u);
    ctx->pc = 0x1B7240u;
    if (runtime->hasFunction(0x1B7240u)) {
        auto targetFn = runtime->lookupFunction(0x1B7240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B70C0u; }
        if (ctx->pc != 0x1B70C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7240_0x1b7240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B70C0u; }
        if (ctx->pc != 0x1B70C0u) { return; }
    }
    ctx->pc = 0x1B70C0u;
label_1b70c0:
    // 0x1b70c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b70c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b70c4:
    // 0x1b70c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b70c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b70c8:
    // 0x1b70c8: 0x3e00008  jr          $ra
label_1b70cc:
    if (ctx->pc == 0x1B70CCu) {
        ctx->pc = 0x1B70CCu;
            // 0x1b70cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B70D0u;
        goto label_1b70d0;
    }
    ctx->pc = 0x1B70C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B70CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B70C8u;
            // 0x1b70cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B70D0u;
label_1b70d0:
    // 0x1b70d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b70d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b70d4:
    // 0x1b70d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b70d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b70d8:
    // 0x1b70d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b70d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b70dc:
    // 0x1b70dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b70dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b70e0:
    // 0x1b70e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b70e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b70e4:
    // 0x1b70e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b70e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b70e8:
    // 0x1b70e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b70e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b70ec:
    // 0x1b70ec: 0xc06dc90  jal         func_1B7240
label_1b70f0:
    if (ctx->pc == 0x1B70F0u) {
        ctx->pc = 0x1B70F0u;
            // 0x1b70f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B70F4u;
        goto label_1b70f4;
    }
    ctx->pc = 0x1B70ECu;
    SET_GPR_U32(ctx, 31, 0x1B70F4u);
    ctx->pc = 0x1B70F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B70ECu;
            // 0x1b70f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7240u;
    if (runtime->hasFunction(0x1B7240u)) {
        auto targetFn = runtime->lookupFunction(0x1B7240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B70F4u; }
        if (ctx->pc != 0x1B70F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7240_0x1b7240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B70F4u; }
        if (ctx->pc != 0x1B70F4u) { return; }
    }
    ctx->pc = 0x1B70F4u;
label_1b70f4:
    // 0x1b70f4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1b70f8:
    if (ctx->pc == 0x1B70F8u) {
        ctx->pc = 0x1B70F8u;
            // 0x1b70f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1B70FCu;
        goto label_1b70fc;
    }
    ctx->pc = 0x1B70F4u;
    {
        const bool branch_taken_0x1b70f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b70f4) {
            ctx->pc = 0x1B70F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B70F4u;
            // 0x1b70f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7130u;
            goto label_1b7130;
        }
    }
    ctx->pc = 0x1B70FCu;
label_1b70fc:
    // 0x1b70fc: 0x8e02105c  lw          $v0, 0x105C($s0)
    ctx->pc = 0x1b70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4188)));
label_1b7100:
    // 0x1b7100: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1b7104:
    if (ctx->pc == 0x1B7104u) {
        ctx->pc = 0x1B7104u;
            // 0x1b7104: 0x8e041060  lw          $a0, 0x1060($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
        ctx->pc = 0x1B7108u;
        goto label_1b7108;
    }
    ctx->pc = 0x1B7100u;
    {
        const bool branch_taken_0x1b7100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7100) {
            ctx->pc = 0x1B7104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7100u;
            // 0x1b7104: 0x8e041060  lw          $a0, 0x1060($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7120u;
            goto label_1b7120;
        }
    }
    ctx->pc = 0x1B7108u;
label_1b7108:
    // 0x1b7108: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1b7108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b710c:
    // 0x1b710c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7110:
    // 0x1b7110: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b7110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1b7114:
    // 0x1b7114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7118:
    // 0x1b7118: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b711c:
    if (ctx->pc == 0x1B711Cu) {
        ctx->pc = 0x1B711Cu;
            // 0x1b711c: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x1B7120u;
        goto label_1b7120;
    }
    ctx->pc = 0x1B7118u;
    {
        const bool branch_taken_0x1b7118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B711Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7118u;
            // 0x1b711c: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7118) {
            ctx->pc = 0x1B712Cu;
            goto label_1b712c;
        }
    }
    ctx->pc = 0x1B7120u;
label_1b7120:
    // 0x1b7120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b7120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b7124:
    // 0x1b7124: 0x40f809  jalr        $v0
label_1b7128:
    if (ctx->pc == 0x1B7128u) {
        ctx->pc = 0x1B7128u;
            // 0x1b7128: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B712Cu;
        goto label_1b712c;
    }
    ctx->pc = 0x1B7124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B712Cu);
        ctx->pc = 0x1B7128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7124u;
            // 0x1b7128: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B712Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B712Cu; }
            if (ctx->pc != 0x1B712Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B712Cu;
label_1b712c:
    // 0x1b712c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b712cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7130:
    // 0x1b7130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b7134:
    // 0x1b7134: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b7134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7138:
    // 0x1b7138: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b7138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b713c:
    // 0x1b713c: 0x3e00008  jr          $ra
label_1b7140:
    if (ctx->pc == 0x1B7140u) {
        ctx->pc = 0x1B7140u;
            // 0x1b7140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1B7144u;
        goto label_1b7144;
    }
    ctx->pc = 0x1B713Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B713Cu;
            // 0x1b7140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7144u;
label_1b7144:
    // 0x1b7144: 0x0  nop
    ctx->pc = 0x1b7144u;
    // NOP
label_1b7148:
    // 0x1b7148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b714c:
    // 0x1b714c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b714cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1b7150:
    // 0x1b7150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7154:
    // 0x1b7154: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b7154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1b7158:
    // 0x1b7158: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b7158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b715c:
    // 0x1b715c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1b715cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1b7160:
    // 0x1b7160: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b7160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b7164:
    // 0x1b7164: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b7164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1b7168:
    // 0x1b7168: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b7168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1b716c:
    // 0x1b716c: 0xc06dc90  jal         func_1B7240
label_1b7170:
    if (ctx->pc == 0x1B7170u) {
        ctx->pc = 0x1B7170u;
            // 0x1b7170: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B7174u;
        goto label_1b7174;
    }
    ctx->pc = 0x1B716Cu;
    SET_GPR_U32(ctx, 31, 0x1B7174u);
    ctx->pc = 0x1B7170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B716Cu;
            // 0x1b7170: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7240u;
    if (runtime->hasFunction(0x1B7240u)) {
        auto targetFn = runtime->lookupFunction(0x1B7240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7174u; }
        if (ctx->pc != 0x1B7174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7240_0x1b7240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7174u; }
        if (ctx->pc != 0x1B7174u) { return; }
    }
    ctx->pc = 0x1B7174u;
label_1b7174:
    // 0x1b7174: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1b7178:
    if (ctx->pc == 0x1B7178u) {
        ctx->pc = 0x1B7178u;
            // 0x1b7178: 0x26300d88  addiu       $s0, $s1, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
        ctx->pc = 0x1B717Cu;
        goto label_1b717c;
    }
    ctx->pc = 0x1B7174u;
    {
        const bool branch_taken_0x1b7174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7174u;
            // 0x1b7178: 0x26300d88  addiu       $s0, $s1, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7174) {
            ctx->pc = 0x1B7220u;
            goto label_1b7220;
        }
    }
    ctx->pc = 0x1B717Cu;
label_1b717c:
    // 0x1b717c: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1b717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_1b7180:
    // 0x1b7180: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1b7184:
    if (ctx->pc == 0x1B7184u) {
        ctx->pc = 0x1B7184u;
            // 0x1b7184: 0x8e0402f0  lw          $a0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->pc = 0x1B7188u;
        goto label_1b7188;
    }
    ctx->pc = 0x1B7180u;
    {
        const bool branch_taken_0x1b7180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7180) {
            ctx->pc = 0x1B7184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7180u;
            // 0x1b7184: 0x8e0402f0  lw          $a0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B71A0u;
            goto label_1b71a0;
        }
    }
    ctx->pc = 0x1B7188u;
label_1b7188:
    // 0x1b7188: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1b7188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1b718c:
    // 0x1b718c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b718cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7190:
    // 0x1b7190: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1b7190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1b7194:
    // 0x1b7194: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b7198:
    if (ctx->pc == 0x1B7198u) {
        ctx->pc = 0x1B7198u;
            // 0x1b7198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B719Cu;
        goto label_1b719c;
    }
    ctx->pc = 0x1B7194u;
    {
        const bool branch_taken_0x1b7194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7194u;
            // 0x1b7198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7194) {
            ctx->pc = 0x1B721Cu;
            goto label_1b721c;
        }
    }
    ctx->pc = 0x1B719Cu;
label_1b719c:
    // 0x1b719c: 0x0  nop
    ctx->pc = 0x1b719cu;
    // NOP
label_1b71a0:
    // 0x1b71a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b71a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b71a4:
    // 0x1b71a4: 0x40f809  jalr        $v0
label_1b71a8:
    if (ctx->pc == 0x1B71A8u) {
        ctx->pc = 0x1B71A8u;
            // 0x1b71a8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x1B71ACu;
        goto label_1b71ac;
    }
    ctx->pc = 0x1B71A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B71ACu);
        ctx->pc = 0x1B71A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71A4u;
            // 0x1b71a8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B71ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B71ACu; }
            if (ctx->pc != 0x1B71ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1B71ACu;
label_1b71ac:
    // 0x1b71ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b71acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b71b0:
    // 0x1b71b0: 0xc06da92  jal         func_1B6A48
label_1b71b4:
    if (ctx->pc == 0x1B71B4u) {
        ctx->pc = 0x1B71B4u;
            // 0x1b71b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B71B8u;
        goto label_1b71b8;
    }
    ctx->pc = 0x1B71B0u;
    SET_GPR_U32(ctx, 31, 0x1B71B8u);
    ctx->pc = 0x1B71B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71B0u;
            // 0x1b71b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6A48u;
    if (runtime->hasFunction(0x1B6A48u)) {
        auto targetFn = runtime->lookupFunction(0x1B6A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71B8u; }
        if (ctx->pc != 0x1B71B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6A48_0x1b6a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B71B8u; }
        if (ctx->pc != 0x1B71B8u) { return; }
    }
    ctx->pc = 0x1B71B8u;
label_1b71b8:
    // 0x1b71b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1b71bc:
    if (ctx->pc == 0x1B71BCu) {
        ctx->pc = 0x1B71BCu;
            // 0x1b71bc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1B71C0u;
        goto label_1b71c0;
    }
    ctx->pc = 0x1B71B8u;
    {
        const bool branch_taken_0x1b71b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B71BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71B8u;
            // 0x1b71bc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71b8) {
            ctx->pc = 0x1B7200u;
            goto label_1b7200;
        }
    }
    ctx->pc = 0x1B71C0u;
label_1b71c0:
    // 0x1b71c0: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x1b71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_1b71c4:
    // 0x1b71c4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1b71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_1b71c8:
    // 0x1b71c8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1b71cc:
    if (ctx->pc == 0x1B71CCu) {
        ctx->pc = 0x1B71CCu;
            // 0x1b71cc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1B71D0u;
        goto label_1b71d0;
    }
    ctx->pc = 0x1B71C8u;
    {
        const bool branch_taken_0x1b71c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B71CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71C8u;
            // 0x1b71cc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71c8) {
            ctx->pc = 0x1B7204u;
            goto label_1b7204;
        }
    }
    ctx->pc = 0x1B71D0u;
label_1b71d0:
    // 0x1b71d0: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x1b71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_1b71d4:
    // 0x1b71d4: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1b71d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b71d8:
    // 0x1b71d8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1b71dc:
    if (ctx->pc == 0x1B71DCu) {
        ctx->pc = 0x1B71E0u;
        goto label_1b71e0;
    }
    ctx->pc = 0x1B71D8u;
    {
        const bool branch_taken_0x1b71d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b71d8) {
            ctx->pc = 0x1B71ECu;
            goto label_1b71ec;
        }
    }
    ctx->pc = 0x1B71E0u;
label_1b71e0:
    // 0x1b71e0: 0x8e0202ec  lw          $v0, 0x2EC($s0)
    ctx->pc = 0x1b71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
label_1b71e4:
    // 0x1b71e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b71e8:
    // 0x1b71e8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1b71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b71ec:
    // 0x1b71ec: 0x8e0202e4  lw          $v0, 0x2E4($s0)
    ctx->pc = 0x1b71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_1b71f0:
    // 0x1b71f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b71f4:
    // 0x1b71f4: 0xae0202e4  sw          $v0, 0x2E4($s0)
    ctx->pc = 0x1b71f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
label_1b71f8:
    // 0x1b71f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b71fc:
    if (ctx->pc == 0x1B71FCu) {
        ctx->pc = 0x1B71FCu;
            // 0x1b71fc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1B7200u;
        goto label_1b7200;
    }
    ctx->pc = 0x1B71F8u;
    {
        const bool branch_taken_0x1b71f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B71FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B71F8u;
            // 0x1b71fc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71f8) {
            ctx->pc = 0x1B7204u;
            goto label_1b7204;
        }
    }
    ctx->pc = 0x1B7200u;
label_1b7200:
    // 0x1b7200: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b7200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b7204:
    // 0x1b7204: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b7204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b7208:
    // 0x1b7208: 0xae0402e0  sw          $a0, 0x2E0($s0)
    ctx->pc = 0x1b7208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 4));
label_1b720c:
    // 0x1b720c: 0xae0302e8  sw          $v1, 0x2E8($s0)
    ctx->pc = 0x1b720cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 3));
label_1b7210:
    // 0x1b7210: 0x8e0402e4  lw          $a0, 0x2E4($s0)
    ctx->pc = 0x1b7210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_1b7214:
    // 0x1b7214: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1b7214u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_1b7218:
    // 0x1b7218: 0x8e0302e8  lw          $v1, 0x2E8($s0)
    ctx->pc = 0x1b7218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
label_1b721c:
    // 0x1b721c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1b721cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1b7220:
    // 0x1b7220: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b7220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7224:
    // 0x1b7224: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b7224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b7228:
    // 0x1b7228: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b7228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b722c:
    // 0x1b722c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b722cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b7230:
    // 0x1b7230: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1b7230u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b7234:
    // 0x1b7234: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b7234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b7238:
    // 0x1b7238: 0x3e00008  jr          $ra
label_1b723c:
    if (ctx->pc == 0x1B723Cu) {
        ctx->pc = 0x1B723Cu;
            // 0x1b723c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B7240u;
        goto label_fallthrough_0x1b7238;
    }
    ctx->pc = 0x1B7238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7238u;
            // 0x1b723c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b7238:
    ctx->pc = 0x1B7240u;
}
