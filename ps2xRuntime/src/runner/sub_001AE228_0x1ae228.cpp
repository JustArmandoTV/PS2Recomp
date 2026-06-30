#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE228
// Address: 0x1ae228 - 0x1ae3a0
void sub_001AE228_0x1ae228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE228_0x1ae228");
#endif

    switch (ctx->pc) {
        case 0x1ae228u: goto label_1ae228;
        case 0x1ae22cu: goto label_1ae22c;
        case 0x1ae230u: goto label_1ae230;
        case 0x1ae234u: goto label_1ae234;
        case 0x1ae238u: goto label_1ae238;
        case 0x1ae23cu: goto label_1ae23c;
        case 0x1ae240u: goto label_1ae240;
        case 0x1ae244u: goto label_1ae244;
        case 0x1ae248u: goto label_1ae248;
        case 0x1ae24cu: goto label_1ae24c;
        case 0x1ae250u: goto label_1ae250;
        case 0x1ae254u: goto label_1ae254;
        case 0x1ae258u: goto label_1ae258;
        case 0x1ae25cu: goto label_1ae25c;
        case 0x1ae260u: goto label_1ae260;
        case 0x1ae264u: goto label_1ae264;
        case 0x1ae268u: goto label_1ae268;
        case 0x1ae26cu: goto label_1ae26c;
        case 0x1ae270u: goto label_1ae270;
        case 0x1ae274u: goto label_1ae274;
        case 0x1ae278u: goto label_1ae278;
        case 0x1ae27cu: goto label_1ae27c;
        case 0x1ae280u: goto label_1ae280;
        case 0x1ae284u: goto label_1ae284;
        case 0x1ae288u: goto label_1ae288;
        case 0x1ae28cu: goto label_1ae28c;
        case 0x1ae290u: goto label_1ae290;
        case 0x1ae294u: goto label_1ae294;
        case 0x1ae298u: goto label_1ae298;
        case 0x1ae29cu: goto label_1ae29c;
        case 0x1ae2a0u: goto label_1ae2a0;
        case 0x1ae2a4u: goto label_1ae2a4;
        case 0x1ae2a8u: goto label_1ae2a8;
        case 0x1ae2acu: goto label_1ae2ac;
        case 0x1ae2b0u: goto label_1ae2b0;
        case 0x1ae2b4u: goto label_1ae2b4;
        case 0x1ae2b8u: goto label_1ae2b8;
        case 0x1ae2bcu: goto label_1ae2bc;
        case 0x1ae2c0u: goto label_1ae2c0;
        case 0x1ae2c4u: goto label_1ae2c4;
        case 0x1ae2c8u: goto label_1ae2c8;
        case 0x1ae2ccu: goto label_1ae2cc;
        case 0x1ae2d0u: goto label_1ae2d0;
        case 0x1ae2d4u: goto label_1ae2d4;
        case 0x1ae2d8u: goto label_1ae2d8;
        case 0x1ae2dcu: goto label_1ae2dc;
        case 0x1ae2e0u: goto label_1ae2e0;
        case 0x1ae2e4u: goto label_1ae2e4;
        case 0x1ae2e8u: goto label_1ae2e8;
        case 0x1ae2ecu: goto label_1ae2ec;
        case 0x1ae2f0u: goto label_1ae2f0;
        case 0x1ae2f4u: goto label_1ae2f4;
        case 0x1ae2f8u: goto label_1ae2f8;
        case 0x1ae2fcu: goto label_1ae2fc;
        case 0x1ae300u: goto label_1ae300;
        case 0x1ae304u: goto label_1ae304;
        case 0x1ae308u: goto label_1ae308;
        case 0x1ae30cu: goto label_1ae30c;
        case 0x1ae310u: goto label_1ae310;
        case 0x1ae314u: goto label_1ae314;
        case 0x1ae318u: goto label_1ae318;
        case 0x1ae31cu: goto label_1ae31c;
        case 0x1ae320u: goto label_1ae320;
        case 0x1ae324u: goto label_1ae324;
        case 0x1ae328u: goto label_1ae328;
        case 0x1ae32cu: goto label_1ae32c;
        case 0x1ae330u: goto label_1ae330;
        case 0x1ae334u: goto label_1ae334;
        case 0x1ae338u: goto label_1ae338;
        case 0x1ae33cu: goto label_1ae33c;
        case 0x1ae340u: goto label_1ae340;
        case 0x1ae344u: goto label_1ae344;
        case 0x1ae348u: goto label_1ae348;
        case 0x1ae34cu: goto label_1ae34c;
        case 0x1ae350u: goto label_1ae350;
        case 0x1ae354u: goto label_1ae354;
        case 0x1ae358u: goto label_1ae358;
        case 0x1ae35cu: goto label_1ae35c;
        case 0x1ae360u: goto label_1ae360;
        case 0x1ae364u: goto label_1ae364;
        case 0x1ae368u: goto label_1ae368;
        case 0x1ae36cu: goto label_1ae36c;
        case 0x1ae370u: goto label_1ae370;
        case 0x1ae374u: goto label_1ae374;
        case 0x1ae378u: goto label_1ae378;
        case 0x1ae37cu: goto label_1ae37c;
        case 0x1ae380u: goto label_1ae380;
        case 0x1ae384u: goto label_1ae384;
        case 0x1ae388u: goto label_1ae388;
        case 0x1ae38cu: goto label_1ae38c;
        case 0x1ae390u: goto label_1ae390;
        case 0x1ae394u: goto label_1ae394;
        case 0x1ae398u: goto label_1ae398;
        case 0x1ae39cu: goto label_1ae39c;
        default: break;
    }

    ctx->pc = 0x1ae228u;

label_1ae228:
    // 0x1ae228: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ae228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ae22c:
    // 0x1ae22c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ae22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ae230:
    // 0x1ae230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae234:
    // 0x1ae234: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ae234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1ae238:
    // 0x1ae238: 0x26110d88  addiu       $s1, $s0, 0xD88
    ctx->pc = 0x1ae238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
label_1ae23c:
    // 0x1ae23c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ae23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1ae240:
    // 0x1ae240: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae244:
    // 0x1ae244: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1ae244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1ae248:
    // 0x1ae248: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ae248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae24c:
    // 0x1ae24c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ae24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1ae250:
    // 0x1ae250: 0x26030ea0  addiu       $v1, $s0, 0xEA0
    ctx->pc = 0x1ae250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3744));
label_1ae254:
    // 0x1ae254: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1ae254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1ae258:
    // 0x1ae258: 0x26060e48  addiu       $a2, $s0, 0xE48
    ctx->pc = 0x1ae258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3656));
label_1ae25c:
    // 0x1ae25c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ae25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ae260:
    // 0x1ae260: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ae260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ae264:
    // 0x1ae264: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ae268:
    if (ctx->pc == 0x1AE268u) {
        ctx->pc = 0x1AE268u;
            // 0x1ae268: 0x8e152030  lw          $s5, 0x2030($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
        ctx->pc = 0x1AE26Cu;
        goto label_1ae26c;
    }
    ctx->pc = 0x1AE264u;
    {
        const bool branch_taken_0x1ae264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE264u;
            // 0x1ae268: 0x8e152030  lw          $s5, 0x2030($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae264) {
            ctx->pc = 0x1AE280u;
            goto label_1ae280;
        }
    }
    ctx->pc = 0x1AE26Cu;
label_1ae26c:
    // 0x1ae26c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1ae26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1ae270:
    // 0x1ae270: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x1ae270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_1ae274:
    // 0x1ae274: 0x8e240164  lw          $a0, 0x164($s1)
    ctx->pc = 0x1ae274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_1ae278:
    // 0x1ae278: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ae278u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ae27c:
    // 0x1ae27c: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x1ae27cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ae280:
    // 0x1ae280: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1ae280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1ae284:
    // 0x1ae284: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ae288:
    if (ctx->pc == 0x1AE288u) {
        ctx->pc = 0x1AE288u;
            // 0x1ae288: 0x8cd30028  lw          $s3, 0x28($a2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->pc = 0x1AE28Cu;
        goto label_1ae28c;
    }
    ctx->pc = 0x1AE284u;
    {
        const bool branch_taken_0x1ae284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE284u;
            // 0x1ae288: 0x8cd30028  lw          $s3, 0x28($a2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae284) {
            ctx->pc = 0x1AE2A8u;
            goto label_1ae2a8;
        }
    }
    ctx->pc = 0x1AE28Cu;
label_1ae28c:
    // 0x1ae28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae290:
    // 0x1ae290: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ae290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ae294:
    // 0x1ae294: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ae294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ae298:
    // 0x1ae298: 0x40f809  jalr        $v0
label_1ae29c:
    if (ctx->pc == 0x1AE29Cu) {
        ctx->pc = 0x1AE29Cu;
            // 0x1ae29c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2A0u;
        goto label_1ae2a0;
    }
    ctx->pc = 0x1AE298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AE2A0u);
        ctx->pc = 0x1AE29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE298u;
            // 0x1ae29c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AE2A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2A0u; }
            if (ctx->pc != 0x1AE2A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1AE2A0u;
label_1ae2a0:
    // 0x1ae2a0: 0x10000037  b           . + 4 + (0x37 << 2)
label_1ae2a4:
    if (ctx->pc == 0x1AE2A4u) {
        ctx->pc = 0x1AE2A4u;
            // 0x1ae2a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1AE2A8u;
        goto label_1ae2a8;
    }
    ctx->pc = 0x1AE2A0u;
    {
        const bool branch_taken_0x1ae2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2A0u;
            // 0x1ae2a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2a0) {
            ctx->pc = 0x1AE380u;
            goto label_1ae380;
        }
    }
    ctx->pc = 0x1AE2A8u;
label_1ae2a8:
    // 0x1ae2a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae2ac:
    // 0x1ae2ac: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
label_1ae2b0:
    if (ctx->pc == 0x1AE2B0u) {
        ctx->pc = 0x1AE2B0u;
            // 0x1ae2b0: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x1AE2B4u;
        goto label_1ae2b4;
    }
    ctx->pc = 0x1AE2ACu;
    {
        const bool branch_taken_0x1ae2ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ae2ac) {
            ctx->pc = 0x1AE2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2ACu;
            // 0x1ae2b0: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE2C4u;
            goto label_1ae2c4;
        }
    }
    ctx->pc = 0x1AE2B4u;
label_1ae2b4:
    // 0x1ae2b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae2b8:
    // 0x1ae2b8: 0xc06d9fe  jal         func_1B67F8
label_1ae2bc:
    if (ctx->pc == 0x1AE2BCu) {
        ctx->pc = 0x1AE2BCu;
            // 0x1ae2bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2C0u;
        goto label_1ae2c0;
    }
    ctx->pc = 0x1AE2B8u;
    SET_GPR_U32(ctx, 31, 0x1AE2C0u);
    ctx->pc = 0x1AE2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2B8u;
            // 0x1ae2bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    if (runtime->hasFunction(0x1B67F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B67F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2C0u; }
        if (ctx->pc != 0x1AE2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B67F8_0x1b67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2C0u; }
        if (ctx->pc != 0x1AE2C0u) { return; }
    }
    ctx->pc = 0x1AE2C0u;
label_1ae2c0:
    // 0x1ae2c0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1ae2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1ae2c4:
    // 0x1ae2c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ae2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ae2c8:
    // 0x1ae2c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ae2cc:
    if (ctx->pc == 0x1AE2CCu) {
        ctx->pc = 0x1AE2CCu;
            // 0x1ae2cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2D0u;
        goto label_1ae2d0;
    }
    ctx->pc = 0x1AE2C8u;
    {
        const bool branch_taken_0x1ae2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2C8u;
            // 0x1ae2cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2c8) {
            ctx->pc = 0x1AE2DCu;
            goto label_1ae2dc;
        }
    }
    ctx->pc = 0x1AE2D0u;
label_1ae2d0:
    // 0x1ae2d0: 0xc06da26  jal         func_1B6898
label_1ae2d4:
    if (ctx->pc == 0x1AE2D4u) {
        ctx->pc = 0x1AE2D4u;
            // 0x1ae2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2D8u;
        goto label_1ae2d8;
    }
    ctx->pc = 0x1AE2D0u;
    SET_GPR_U32(ctx, 31, 0x1AE2D8u);
    ctx->pc = 0x1AE2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2D0u;
            // 0x1ae2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6898u;
    if (runtime->hasFunction(0x1B6898u)) {
        auto targetFn = runtime->lookupFunction(0x1B6898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2D8u; }
        if (ctx->pc != 0x1AE2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6898_0x1b6898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2D8u; }
        if (ctx->pc != 0x1AE2D8u) { return; }
    }
    ctx->pc = 0x1AE2D8u;
label_1ae2d8:
    // 0x1ae2d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ae2d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae2dc:
    // 0x1ae2dc: 0xc06e07c  jal         func_1B81F0
label_1ae2e0:
    if (ctx->pc == 0x1AE2E0u) {
        ctx->pc = 0x1AE2E0u;
            // 0x1ae2e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2E4u;
        goto label_1ae2e4;
    }
    ctx->pc = 0x1AE2DCu;
    SET_GPR_U32(ctx, 31, 0x1AE2E4u);
    ctx->pc = 0x1AE2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2DCu;
            // 0x1ae2e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B81F0u;
    if (runtime->hasFunction(0x1B81F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B81F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2E4u; }
        if (ctx->pc != 0x1AE2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B81F0_0x1b81f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2E4u; }
        if (ctx->pc != 0x1AE2E4u) { return; }
    }
    ctx->pc = 0x1AE2E4u;
label_1ae2e4:
    // 0x1ae2e4: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x1ae2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
label_1ae2e8:
    // 0x1ae2e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ae2ec:
    if (ctx->pc == 0x1AE2ECu) {
        ctx->pc = 0x1AE2ECu;
            // 0x1ae2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2F0u;
        goto label_1ae2f0;
    }
    ctx->pc = 0x1AE2E8u;
    {
        const bool branch_taken_0x1ae2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2E8u;
            // 0x1ae2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2e8) {
            ctx->pc = 0x1AE308u;
            goto label_1ae308;
        }
    }
    ctx->pc = 0x1AE2F0u;
label_1ae2f0:
    // 0x1ae2f0: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x1ae2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_1ae2f4:
    // 0x1ae2f4: 0x8e040aa4  lw          $a0, 0xAA4($s0)
    ctx->pc = 0x1ae2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2724)));
label_1ae2f8:
    // 0x1ae2f8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1ae2f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1ae2fc:
    // 0x1ae2fc: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_1ae300:
    if (ctx->pc == 0x1AE300u) {
        ctx->pc = 0x1AE300u;
            // 0x1ae300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE304u;
        goto label_1ae304;
    }
    ctx->pc = 0x1AE2FCu;
    {
        const bool branch_taken_0x1ae2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2FCu;
            // 0x1ae300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2fc) {
            ctx->pc = 0x1AE37Cu;
            goto label_1ae37c;
        }
    }
    ctx->pc = 0x1AE304u;
label_1ae304:
    // 0x1ae304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae308:
    // 0x1ae308: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ae308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ae30c:
    // 0x1ae30c: 0xc06dbb6  jal         func_1B6ED8
label_1ae310:
    if (ctx->pc == 0x1AE310u) {
        ctx->pc = 0x1AE310u;
            // 0x1ae310: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x1AE314u;
        goto label_1ae314;
    }
    ctx->pc = 0x1AE30Cu;
    SET_GPR_U32(ctx, 31, 0x1AE314u);
    ctx->pc = 0x1AE310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE30Cu;
            // 0x1ae310: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (runtime->hasFunction(0x1B6ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE314u; }
        if (ctx->pc != 0x1AE314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6ED8_0x1b6ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE314u; }
        if (ctx->pc != 0x1AE314u) { return; }
    }
    ctx->pc = 0x1AE314u;
label_1ae314:
    // 0x1ae314: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ae314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae318:
    // 0x1ae318: 0x4600018  bltz        $v1, . + 4 + (0x18 << 2)
label_1ae31c:
    if (ctx->pc == 0x1AE31Cu) {
        ctx->pc = 0x1AE31Cu;
            // 0x1ae31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE320u;
        goto label_1ae320;
    }
    ctx->pc = 0x1AE318u;
    {
        const bool branch_taken_0x1ae318 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1AE31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE318u;
            // 0x1ae31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae318) {
            ctx->pc = 0x1AE37Cu;
            goto label_1ae37c;
        }
    }
    ctx->pc = 0x1AE320u;
label_1ae320:
    // 0x1ae320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae324:
    // 0x1ae324: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ae324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ae328:
    // 0x1ae328: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1ae328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1ae32c:
    // 0x1ae32c: 0xc06b8e8  jal         func_1AE3A0
label_1ae330:
    if (ctx->pc == 0x1AE330u) {
        ctx->pc = 0x1AE330u;
            // 0x1ae330: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->pc = 0x1AE334u;
        goto label_1ae334;
    }
    ctx->pc = 0x1AE32Cu;
    SET_GPR_U32(ctx, 31, 0x1AE334u);
    ctx->pc = 0x1AE330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE32Cu;
            // 0x1ae330: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3A0u;
    if (runtime->hasFunction(0x1AE3A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE334u; }
        if (ctx->pc != 0x1AE334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE3A0_0x1ae3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE334u; }
        if (ctx->pc != 0x1AE334u) { return; }
    }
    ctx->pc = 0x1AE334u;
label_1ae334:
    // 0x1ae334: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ae334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ae338:
    // 0x1ae338: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1ae338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1ae33c:
    // 0x1ae33c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1ae33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1ae340:
    // 0x1ae340: 0x2663018  mult        $a2, $s3, $a2
    ctx->pc = 0x1ae340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1ae344:
    // 0x1ae344: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1ae348:
    if (ctx->pc == 0x1AE348u) {
        ctx->pc = 0x1AE348u;
            // 0x1ae348: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1AE34Cu;
        goto label_1ae34c;
    }
    ctx->pc = 0x1AE344u;
    {
        const bool branch_taken_0x1ae344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae344) {
            ctx->pc = 0x1AE348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE344u;
            // 0x1ae348: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE34Cu;
            goto label_1ae34c;
        }
    }
    ctx->pc = 0x1AE34Cu;
label_1ae34c:
    // 0x1ae34c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ae34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae350:
    // 0x1ae350: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1ae350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ae354:
    // 0x1ae354: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1ae354u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ae358:
    // 0x1ae358: 0x3012  mflo        $a2
    ctx->pc = 0x1ae358u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_1ae35c:
    // 0x1ae35c: 0xc062890  jal         func_18A240
label_1ae360:
    if (ctx->pc == 0x1AE360u) {
        ctx->pc = 0x1AE360u;
            // 0x1ae360: 0x2863023  subu        $a2, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->pc = 0x1AE364u;
        goto label_1ae364;
    }
    ctx->pc = 0x1AE35Cu;
    SET_GPR_U32(ctx, 31, 0x1AE364u);
    ctx->pc = 0x1AE360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE35Cu;
            // 0x1ae360: 0x2863023  subu        $a2, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE364u; }
        if (ctx->pc != 0x1AE364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE364u; }
        if (ctx->pc != 0x1AE364u) { return; }
    }
    ctx->pc = 0x1AE364u;
label_1ae364:
    // 0x1ae364: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ae368:
    if (ctx->pc == 0x1AE368u) {
        ctx->pc = 0x1AE368u;
            // 0x1ae368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE36Cu;
        goto label_1ae36c;
    }
    ctx->pc = 0x1AE364u;
    {
        const bool branch_taken_0x1ae364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE364u;
            // 0x1ae368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae364) {
            ctx->pc = 0x1AE37Cu;
            goto label_1ae37c;
        }
    }
    ctx->pc = 0x1AE36Cu;
label_1ae36c:
    // 0x1ae36c: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x1ae36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_1ae370:
    // 0x1ae370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae374:
    // 0x1ae374: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ae374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ae378:
    // 0x1ae378: 0xaea30084  sw          $v1, 0x84($s5)
    ctx->pc = 0x1ae378u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
label_1ae37c:
    // 0x1ae37c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae37cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae380:
    // 0x1ae380: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ae380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ae384:
    // 0x1ae384: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ae384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae388:
    // 0x1ae388: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ae388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ae38c:
    // 0x1ae38c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ae38cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ae390:
    // 0x1ae390: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1ae390u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1ae394:
    // 0x1ae394: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ae394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ae398:
    // 0x1ae398: 0x3e00008  jr          $ra
label_1ae39c:
    if (ctx->pc == 0x1AE39Cu) {
        ctx->pc = 0x1AE39Cu;
            // 0x1ae39c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1AE3A0u;
        goto label_fallthrough_0x1ae398;
    }
    ctx->pc = 0x1AE398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE398u;
            // 0x1ae39c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ae398:
    ctx->pc = 0x1AE3A0u;
}
