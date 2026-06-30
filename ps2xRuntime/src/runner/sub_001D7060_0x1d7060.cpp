#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7060
// Address: 0x1d7060 - 0x1d7250
void sub_001D7060_0x1d7060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7060_0x1d7060");
#endif

    switch (ctx->pc) {
        case 0x1d7060u: goto label_1d7060;
        case 0x1d7064u: goto label_1d7064;
        case 0x1d7068u: goto label_1d7068;
        case 0x1d706cu: goto label_1d706c;
        case 0x1d7070u: goto label_1d7070;
        case 0x1d7074u: goto label_1d7074;
        case 0x1d7078u: goto label_1d7078;
        case 0x1d707cu: goto label_1d707c;
        case 0x1d7080u: goto label_1d7080;
        case 0x1d7084u: goto label_1d7084;
        case 0x1d7088u: goto label_1d7088;
        case 0x1d708cu: goto label_1d708c;
        case 0x1d7090u: goto label_1d7090;
        case 0x1d7094u: goto label_1d7094;
        case 0x1d7098u: goto label_1d7098;
        case 0x1d709cu: goto label_1d709c;
        case 0x1d70a0u: goto label_1d70a0;
        case 0x1d70a4u: goto label_1d70a4;
        case 0x1d70a8u: goto label_1d70a8;
        case 0x1d70acu: goto label_1d70ac;
        case 0x1d70b0u: goto label_1d70b0;
        case 0x1d70b4u: goto label_1d70b4;
        case 0x1d70b8u: goto label_1d70b8;
        case 0x1d70bcu: goto label_1d70bc;
        case 0x1d70c0u: goto label_1d70c0;
        case 0x1d70c4u: goto label_1d70c4;
        case 0x1d70c8u: goto label_1d70c8;
        case 0x1d70ccu: goto label_1d70cc;
        case 0x1d70d0u: goto label_1d70d0;
        case 0x1d70d4u: goto label_1d70d4;
        case 0x1d70d8u: goto label_1d70d8;
        case 0x1d70dcu: goto label_1d70dc;
        case 0x1d70e0u: goto label_1d70e0;
        case 0x1d70e4u: goto label_1d70e4;
        case 0x1d70e8u: goto label_1d70e8;
        case 0x1d70ecu: goto label_1d70ec;
        case 0x1d70f0u: goto label_1d70f0;
        case 0x1d70f4u: goto label_1d70f4;
        case 0x1d70f8u: goto label_1d70f8;
        case 0x1d70fcu: goto label_1d70fc;
        case 0x1d7100u: goto label_1d7100;
        case 0x1d7104u: goto label_1d7104;
        case 0x1d7108u: goto label_1d7108;
        case 0x1d710cu: goto label_1d710c;
        case 0x1d7110u: goto label_1d7110;
        case 0x1d7114u: goto label_1d7114;
        case 0x1d7118u: goto label_1d7118;
        case 0x1d711cu: goto label_1d711c;
        case 0x1d7120u: goto label_1d7120;
        case 0x1d7124u: goto label_1d7124;
        case 0x1d7128u: goto label_1d7128;
        case 0x1d712cu: goto label_1d712c;
        case 0x1d7130u: goto label_1d7130;
        case 0x1d7134u: goto label_1d7134;
        case 0x1d7138u: goto label_1d7138;
        case 0x1d713cu: goto label_1d713c;
        case 0x1d7140u: goto label_1d7140;
        case 0x1d7144u: goto label_1d7144;
        case 0x1d7148u: goto label_1d7148;
        case 0x1d714cu: goto label_1d714c;
        case 0x1d7150u: goto label_1d7150;
        case 0x1d7154u: goto label_1d7154;
        case 0x1d7158u: goto label_1d7158;
        case 0x1d715cu: goto label_1d715c;
        case 0x1d7160u: goto label_1d7160;
        case 0x1d7164u: goto label_1d7164;
        case 0x1d7168u: goto label_1d7168;
        case 0x1d716cu: goto label_1d716c;
        case 0x1d7170u: goto label_1d7170;
        case 0x1d7174u: goto label_1d7174;
        case 0x1d7178u: goto label_1d7178;
        case 0x1d717cu: goto label_1d717c;
        case 0x1d7180u: goto label_1d7180;
        case 0x1d7184u: goto label_1d7184;
        case 0x1d7188u: goto label_1d7188;
        case 0x1d718cu: goto label_1d718c;
        case 0x1d7190u: goto label_1d7190;
        case 0x1d7194u: goto label_1d7194;
        case 0x1d7198u: goto label_1d7198;
        case 0x1d719cu: goto label_1d719c;
        case 0x1d71a0u: goto label_1d71a0;
        case 0x1d71a4u: goto label_1d71a4;
        case 0x1d71a8u: goto label_1d71a8;
        case 0x1d71acu: goto label_1d71ac;
        case 0x1d71b0u: goto label_1d71b0;
        case 0x1d71b4u: goto label_1d71b4;
        case 0x1d71b8u: goto label_1d71b8;
        case 0x1d71bcu: goto label_1d71bc;
        case 0x1d71c0u: goto label_1d71c0;
        case 0x1d71c4u: goto label_1d71c4;
        case 0x1d71c8u: goto label_1d71c8;
        case 0x1d71ccu: goto label_1d71cc;
        case 0x1d71d0u: goto label_1d71d0;
        case 0x1d71d4u: goto label_1d71d4;
        case 0x1d71d8u: goto label_1d71d8;
        case 0x1d71dcu: goto label_1d71dc;
        case 0x1d71e0u: goto label_1d71e0;
        case 0x1d71e4u: goto label_1d71e4;
        case 0x1d71e8u: goto label_1d71e8;
        case 0x1d71ecu: goto label_1d71ec;
        case 0x1d71f0u: goto label_1d71f0;
        case 0x1d71f4u: goto label_1d71f4;
        case 0x1d71f8u: goto label_1d71f8;
        case 0x1d71fcu: goto label_1d71fc;
        case 0x1d7200u: goto label_1d7200;
        case 0x1d7204u: goto label_1d7204;
        case 0x1d7208u: goto label_1d7208;
        case 0x1d720cu: goto label_1d720c;
        case 0x1d7210u: goto label_1d7210;
        case 0x1d7214u: goto label_1d7214;
        case 0x1d7218u: goto label_1d7218;
        case 0x1d721cu: goto label_1d721c;
        case 0x1d7220u: goto label_1d7220;
        case 0x1d7224u: goto label_1d7224;
        case 0x1d7228u: goto label_1d7228;
        case 0x1d722cu: goto label_1d722c;
        case 0x1d7230u: goto label_1d7230;
        case 0x1d7234u: goto label_1d7234;
        case 0x1d7238u: goto label_1d7238;
        case 0x1d723cu: goto label_1d723c;
        case 0x1d7240u: goto label_1d7240;
        case 0x1d7244u: goto label_1d7244;
        case 0x1d7248u: goto label_1d7248;
        case 0x1d724cu: goto label_1d724c;
        default: break;
    }

    ctx->pc = 0x1d7060u;

label_1d7060:
    // 0x1d7060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d7064:
    // 0x1d7064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d7068:
    // 0x1d7068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d706c:
    // 0x1d706c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d706cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7070:
    // 0x1d7070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7074:
    // 0x1d7074: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_1d7078:
    if (ctx->pc == 0x1D7078u) {
        ctx->pc = 0x1D7078u;
            // 0x1d7078: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D707Cu;
        goto label_1d707c;
    }
    ctx->pc = 0x1D7074u;
    {
        const bool branch_taken_0x1d7074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7074u;
            // 0x1d7078: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7074) {
            ctx->pc = 0x1D70B8u;
            goto label_1d70b8;
        }
    }
    ctx->pc = 0x1D707Cu;
label_1d707c:
    // 0x1d707c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_1d7080:
    if (ctx->pc == 0x1D7080u) {
        ctx->pc = 0x1D7080u;
            // 0x1d7080: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1D7084u;
        goto label_1d7084;
    }
    ctx->pc = 0x1D707Cu;
    {
        const bool branch_taken_0x1d707c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d707c) {
            ctx->pc = 0x1D7080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D707Cu;
            // 0x1d7080: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D70A4u;
            goto label_1d70a4;
        }
    }
    ctx->pc = 0x1D7084u;
label_1d7084:
    // 0x1d7084: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1d7088:
    if (ctx->pc == 0x1D7088u) {
        ctx->pc = 0x1D708Cu;
        goto label_1d708c;
    }
    ctx->pc = 0x1D7084u;
    {
        const bool branch_taken_0x1d7084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7084) {
            ctx->pc = 0x1D70A0u;
            goto label_1d70a0;
        }
    }
    ctx->pc = 0x1D708Cu;
label_1d708c:
    // 0x1d708c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1d708cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d7090:
    // 0x1d7090: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d7094:
    if (ctx->pc == 0x1D7094u) {
        ctx->pc = 0x1D7098u;
        goto label_1d7098;
    }
    ctx->pc = 0x1D7090u;
    {
        const bool branch_taken_0x1d7090 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7090) {
            ctx->pc = 0x1D70A0u;
            goto label_1d70a0;
        }
    }
    ctx->pc = 0x1D7098u;
label_1d7098:
    // 0x1d7098: 0xc057fc8  jal         func_15FF20
label_1d709c:
    if (ctx->pc == 0x1D709Cu) {
        ctx->pc = 0x1D70A0u;
        goto label_1d70a0;
    }
    ctx->pc = 0x1D7098u;
    SET_GPR_U32(ctx, 31, 0x1D70A0u);
    ctx->pc = 0x15FF20u;
    if (runtime->hasFunction(0x15FF20u)) {
        auto targetFn = runtime->lookupFunction(0x15FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70A0u; }
        if (ctx->pc != 0x1D70A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FF20_0x15ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70A0u; }
        if (ctx->pc != 0x1D70A0u) { return; }
    }
    ctx->pc = 0x1D70A0u;
label_1d70a0:
    // 0x1d70a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1d70a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1d70a4:
    // 0x1d70a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d70a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d70a8:
    // 0x1d70a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_1d70ac:
    if (ctx->pc == 0x1D70ACu) {
        ctx->pc = 0x1D70ACu;
            // 0x1d70ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D70B0u;
        goto label_1d70b0;
    }
    ctx->pc = 0x1D70A8u;
    {
        const bool branch_taken_0x1d70a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d70a8) {
            ctx->pc = 0x1D70ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70A8u;
            // 0x1d70ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D70BCu;
            goto label_1d70bc;
        }
    }
    ctx->pc = 0x1D70B0u;
label_1d70b0:
    // 0x1d70b0: 0xc0400a8  jal         func_1002A0
label_1d70b4:
    if (ctx->pc == 0x1D70B4u) {
        ctx->pc = 0x1D70B4u;
            // 0x1d70b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D70B8u;
        goto label_1d70b8;
    }
    ctx->pc = 0x1D70B0u;
    SET_GPR_U32(ctx, 31, 0x1D70B8u);
    ctx->pc = 0x1D70B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70B0u;
            // 0x1d70b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70B8u; }
        if (ctx->pc != 0x1D70B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70B8u; }
        if (ctx->pc != 0x1D70B8u) { return; }
    }
    ctx->pc = 0x1D70B8u;
label_1d70b8:
    // 0x1d70b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d70b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d70bc:
    // 0x1d70bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d70bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d70c0:
    // 0x1d70c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d70c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d70c4:
    // 0x1d70c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d70c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d70c8:
    // 0x1d70c8: 0x3e00008  jr          $ra
label_1d70cc:
    if (ctx->pc == 0x1D70CCu) {
        ctx->pc = 0x1D70CCu;
            // 0x1d70cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D70D0u;
        goto label_1d70d0;
    }
    ctx->pc = 0x1D70C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D70CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70C8u;
            // 0x1d70cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D70D0u;
label_1d70d0:
    // 0x1d70d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d70d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d70d4:
    // 0x1d70d4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1d70d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1d70d8:
    // 0x1d70d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d70d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d70dc:
    // 0x1d70dc: 0x24a5cdb0  addiu       $a1, $a1, -0x3250
    ctx->pc = 0x1d70dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
label_1d70e0:
    // 0x1d70e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d70e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d70e4:
    // 0x1d70e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d70e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d70e8:
    // 0x1d70e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d70e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d70ec:
    // 0x1d70ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d70ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d70f0:
    // 0x1d70f0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d70f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d70f4:
    // 0x1d70f4: 0xc075728  jal         func_1D5CA0
label_1d70f8:
    if (ctx->pc == 0x1D70F8u) {
        ctx->pc = 0x1D70F8u;
            // 0x1d70f8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1D70FCu;
        goto label_1d70fc;
    }
    ctx->pc = 0x1D70F4u;
    SET_GPR_U32(ctx, 31, 0x1D70FCu);
    ctx->pc = 0x1D70F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70F4u;
            // 0x1d70f8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70FCu; }
        if (ctx->pc != 0x1D70FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D70FCu; }
        if (ctx->pc != 0x1D70FCu) { return; }
    }
    ctx->pc = 0x1D70FCu;
label_1d70fc:
    // 0x1d70fc: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
label_1d7100:
    if (ctx->pc == 0x1D7100u) {
        ctx->pc = 0x1D7100u;
            // 0x1d7100: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1D7104u;
        goto label_1d7104;
    }
    ctx->pc = 0x1D70FCu;
    {
        const bool branch_taken_0x1d70fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d70fc) {
            ctx->pc = 0x1D7100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D70FCu;
            // 0x1d7100: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7228u;
            goto label_1d7228;
        }
    }
    ctx->pc = 0x1D7104u;
label_1d7104:
    // 0x1d7104: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d7104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1d7108:
    // 0x1d7108: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x1d7108u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d710c:
    // 0x1d710c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1d710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1d7110:
    // 0x1d7110: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x1d7110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_1d7114:
    // 0x1d7114: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x1d7114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_1d7118:
    // 0x1d7118: 0xc6340dbc  lwc1        $f20, 0xDBC($s1)
    ctx->pc = 0x1d7118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d711c:
    // 0x1d711c: 0xc4550018  lwc1        $f21, 0x18($v0)
    ctx->pc = 0x1d711cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d7120:
    // 0x1d7120: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1d7120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1d7124:
    // 0x1d7124: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d7124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1d7128:
    // 0x1d7128: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d712c:
    // 0x1d712c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d7130:
    // 0x1d7130: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x1d7130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d7134:
    // 0x1d7134: 0x320f809  jalr        $t9
label_1d7138:
    if (ctx->pc == 0x1D7138u) {
        ctx->pc = 0x1D7138u;
            // 0x1d7138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D713Cu;
        goto label_1d713c;
    }
    ctx->pc = 0x1D7134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D713Cu);
        ctx->pc = 0x1D7138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7134u;
            // 0x1d7138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D713Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D713Cu; }
            if (ctx->pc != 0x1D713Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D713Cu;
label_1d713c:
    // 0x1d713c: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x1d713cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d7140:
    // 0x1d7140: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x1d7140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7144:
    // 0x1d7144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7148:
    // 0x1d7148: 0x0  nop
    ctx->pc = 0x1d7148u;
    // NOP
label_1d714c:
    // 0x1d714c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d714cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d7150:
    // 0x1d7150: 0x4602a01c  madd.s      $f0, $f20, $f2
    ctx->pc = 0x1d7150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_1d7154:
    // 0x1d7154: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1d7154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_1d7158:
    // 0x1d7158: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x1d7158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_1d715c:
    // 0x1d715c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1d715cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1d7160:
    // 0x1d7160: 0x320f809  jalr        $t9
label_1d7164:
    if (ctx->pc == 0x1D7164u) {
        ctx->pc = 0x1D7164u;
            // 0x1d7164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D7168u;
        goto label_1d7168;
    }
    ctx->pc = 0x1D7160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D7168u);
        ctx->pc = 0x1D7164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7160u;
            // 0x1d7164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D7168u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D7168u; }
            if (ctx->pc != 0x1D7168u) { return; }
        }
        }
    }
    ctx->pc = 0x1D7168u;
label_1d7168:
    // 0x1d7168: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1d7168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1d716c:
    // 0x1d716c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d716cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d7170:
    // 0x1d7170: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1d7170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1d7174:
    // 0x1d7174: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1d7174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d7178:
    // 0x1d7178: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x1d7178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_1d717c:
    // 0x1d717c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1d717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_1d7180:
    // 0x1d7180: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x1d7180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7184:
    // 0x1d7184: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d7184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d7188:
    // 0x1d7188: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1d7188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d718c:
    // 0x1d718c: 0x0  nop
    ctx->pc = 0x1d718cu;
    // NOP
label_1d7190:
    // 0x1d7190: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1d7190u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d7194:
    // 0x1d7194: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d7194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7198:
    // 0x1d7198: 0x0  nop
    ctx->pc = 0x1d7198u;
    // NOP
label_1d719c:
    // 0x1d719c: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x1d719cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1d71a0:
    // 0x1d71a0: 0xc0477a8  jal         func_11DEA0
label_1d71a4:
    if (ctx->pc == 0x1D71A4u) {
        ctx->pc = 0x1D71A4u;
            // 0x1d71a4: 0x4600251d  msub.s      $f20, $f4, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
        ctx->pc = 0x1D71A8u;
        goto label_1d71a8;
    }
    ctx->pc = 0x1D71A0u;
    SET_GPR_U32(ctx, 31, 0x1D71A8u);
    ctx->pc = 0x1D71A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71A0u;
            // 0x1d71a4: 0x4600251d  msub.s      $f20, $f4, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71A8u; }
        if (ctx->pc != 0x1D71A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71A8u; }
        if (ctx->pc != 0x1D71A8u) { return; }
    }
    ctx->pc = 0x1D71A8u;
label_1d71a8:
    // 0x1d71a8: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x1d71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_1d71ac:
    // 0x1d71ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d71acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d71b0:
    // 0x1d71b0: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x1d71b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_1d71b4:
    // 0x1d71b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d71b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d71b8:
    // 0x1d71b8: 0x0  nop
    ctx->pc = 0x1d71b8u;
    // NOP
label_1d71bc:
    // 0x1d71bc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1d71bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1d71c0:
    // 0x1d71c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d71c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d71c4:
    // 0x1d71c4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d71c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1d71c8:
    // 0x1d71c8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1d71c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1d71cc:
    // 0x1d71cc: 0xc6200dc0  lwc1        $f0, 0xDC0($s1)
    ctx->pc = 0x1d71ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d71d0:
    // 0x1d71d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d71d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d71d4:
    // 0x1d71d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d71d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d71d8:
    // 0x1d71d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d71d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1d71dc:
    // 0x1d71dc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1d71dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1d71e0:
    // 0x1d71e0: 0xc04cab0  jal         func_132AC0
label_1d71e4:
    if (ctx->pc == 0x1D71E4u) {
        ctx->pc = 0x1D71E4u;
            // 0x1d71e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D71E8u;
        goto label_1d71e8;
    }
    ctx->pc = 0x1D71E0u;
    SET_GPR_U32(ctx, 31, 0x1D71E8u);
    ctx->pc = 0x1D71E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71E0u;
            // 0x1d71e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71E8u; }
        if (ctx->pc != 0x1D71E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D71E8u; }
        if (ctx->pc != 0x1D71E8u) { return; }
    }
    ctx->pc = 0x1D71E8u;
label_1d71e8:
    // 0x1d71e8: 0x8e240d6c  lw          $a0, 0xD6C($s1)
    ctx->pc = 0x1d71e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_1d71ec:
    // 0x1d71ec: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x1d71ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1d71f0:
    // 0x1d71f0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1d71f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1d71f4:
    // 0x1d71f4: 0x320f809  jalr        $t9
label_1d71f8:
    if (ctx->pc == 0x1D71F8u) {
        ctx->pc = 0x1D71F8u;
            // 0x1d71f8: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x1D71FCu;
        goto label_1d71fc;
    }
    ctx->pc = 0x1D71F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D71FCu);
        ctx->pc = 0x1D71F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D71F4u;
            // 0x1d71f8: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D71FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D71FCu; }
            if (ctx->pc != 0x1D71FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D71FCu;
label_1d71fc:
    // 0x1d71fc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1d71fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_1d7200:
    // 0x1d7200: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1d7200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d7204:
    // 0x1d7204: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1d7204u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1d7208:
    // 0x1d7208: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d7208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1d720c:
    // 0x1d720c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d7210:
    // 0x1d7210: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d7210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d7214:
    // 0x1d7214: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d7214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d7218:
    // 0x1d7218: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d721c:
    // 0x1d721c: 0xc04c72c  jal         func_131CB0
label_1d7220:
    if (ctx->pc == 0x1D7220u) {
        ctx->pc = 0x1D7220u;
            // 0x1d7220: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D7224u;
        goto label_1d7224;
    }
    ctx->pc = 0x1D721Cu;
    SET_GPR_U32(ctx, 31, 0x1D7224u);
    ctx->pc = 0x1D7220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D721Cu;
            // 0x1d7220: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7224u; }
        if (ctx->pc != 0x1D7224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7224u; }
        if (ctx->pc != 0x1D7224u) { return; }
    }
    ctx->pc = 0x1D7224u;
label_1d7224:
    // 0x1d7224: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d7224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d7228:
    // 0x1d7228: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d7228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d722c:
    // 0x1d722c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d722cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7230:
    // 0x1d7230: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d7230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d7234:
    // 0x1d7234: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d7234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7238:
    // 0x1d7238: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d723c:
    // 0x1d723c: 0x3e00008  jr          $ra
label_1d7240:
    if (ctx->pc == 0x1D7240u) {
        ctx->pc = 0x1D7240u;
            // 0x1d7240: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D7244u;
        goto label_1d7244;
    }
    ctx->pc = 0x1D723Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D723Cu;
            // 0x1d7240: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7244u;
label_1d7244:
    // 0x1d7244: 0x0  nop
    ctx->pc = 0x1d7244u;
    // NOP
label_1d7248:
    // 0x1d7248: 0x0  nop
    ctx->pc = 0x1d7248u;
    // NOP
label_1d724c:
    // 0x1d724c: 0x0  nop
    ctx->pc = 0x1d724cu;
    // NOP
}
