#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BB240
// Address: 0x4bb240 - 0x4bb330
void sub_004BB240_0x4bb240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BB240_0x4bb240");
#endif

    switch (ctx->pc) {
        case 0x4bb240u: goto label_4bb240;
        case 0x4bb244u: goto label_4bb244;
        case 0x4bb248u: goto label_4bb248;
        case 0x4bb24cu: goto label_4bb24c;
        case 0x4bb250u: goto label_4bb250;
        case 0x4bb254u: goto label_4bb254;
        case 0x4bb258u: goto label_4bb258;
        case 0x4bb25cu: goto label_4bb25c;
        case 0x4bb260u: goto label_4bb260;
        case 0x4bb264u: goto label_4bb264;
        case 0x4bb268u: goto label_4bb268;
        case 0x4bb26cu: goto label_4bb26c;
        case 0x4bb270u: goto label_4bb270;
        case 0x4bb274u: goto label_4bb274;
        case 0x4bb278u: goto label_4bb278;
        case 0x4bb27cu: goto label_4bb27c;
        case 0x4bb280u: goto label_4bb280;
        case 0x4bb284u: goto label_4bb284;
        case 0x4bb288u: goto label_4bb288;
        case 0x4bb28cu: goto label_4bb28c;
        case 0x4bb290u: goto label_4bb290;
        case 0x4bb294u: goto label_4bb294;
        case 0x4bb298u: goto label_4bb298;
        case 0x4bb29cu: goto label_4bb29c;
        case 0x4bb2a0u: goto label_4bb2a0;
        case 0x4bb2a4u: goto label_4bb2a4;
        case 0x4bb2a8u: goto label_4bb2a8;
        case 0x4bb2acu: goto label_4bb2ac;
        case 0x4bb2b0u: goto label_4bb2b0;
        case 0x4bb2b4u: goto label_4bb2b4;
        case 0x4bb2b8u: goto label_4bb2b8;
        case 0x4bb2bcu: goto label_4bb2bc;
        case 0x4bb2c0u: goto label_4bb2c0;
        case 0x4bb2c4u: goto label_4bb2c4;
        case 0x4bb2c8u: goto label_4bb2c8;
        case 0x4bb2ccu: goto label_4bb2cc;
        case 0x4bb2d0u: goto label_4bb2d0;
        case 0x4bb2d4u: goto label_4bb2d4;
        case 0x4bb2d8u: goto label_4bb2d8;
        case 0x4bb2dcu: goto label_4bb2dc;
        case 0x4bb2e0u: goto label_4bb2e0;
        case 0x4bb2e4u: goto label_4bb2e4;
        case 0x4bb2e8u: goto label_4bb2e8;
        case 0x4bb2ecu: goto label_4bb2ec;
        case 0x4bb2f0u: goto label_4bb2f0;
        case 0x4bb2f4u: goto label_4bb2f4;
        case 0x4bb2f8u: goto label_4bb2f8;
        case 0x4bb2fcu: goto label_4bb2fc;
        case 0x4bb300u: goto label_4bb300;
        case 0x4bb304u: goto label_4bb304;
        case 0x4bb308u: goto label_4bb308;
        case 0x4bb30cu: goto label_4bb30c;
        case 0x4bb310u: goto label_4bb310;
        case 0x4bb314u: goto label_4bb314;
        case 0x4bb318u: goto label_4bb318;
        case 0x4bb31cu: goto label_4bb31c;
        case 0x4bb320u: goto label_4bb320;
        case 0x4bb324u: goto label_4bb324;
        case 0x4bb328u: goto label_4bb328;
        case 0x4bb32cu: goto label_4bb32c;
        default: break;
    }

    ctx->pc = 0x4bb240u;

label_4bb240:
    // 0x4bb240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4bb240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4bb244:
    // 0x4bb244: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4bb244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4bb248:
    // 0x4bb248: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bb248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bb24c:
    // 0x4bb24c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bb24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bb250:
    // 0x4bb250: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4bb250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bb254:
    // 0x4bb254: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bb254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bb258:
    // 0x4bb258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bb258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bb25c:
    // 0x4bb25c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4bb25cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bb260:
    // 0x4bb260: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4bb260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4bb264:
    // 0x4bb264: 0x320f809  jalr        $t9
label_4bb268:
    if (ctx->pc == 0x4BB268u) {
        ctx->pc = 0x4BB268u;
            // 0x4bb268: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB26Cu;
        goto label_4bb26c;
    }
    ctx->pc = 0x4BB264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB26Cu);
        ctx->pc = 0x4BB268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB264u;
            // 0x4bb268: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB26Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB26Cu; }
            if (ctx->pc != 0x4BB26Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4BB26Cu;
label_4bb26c:
    // 0x4bb26c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4bb26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4bb270:
    // 0x4bb270: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4bb270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bb274:
    // 0x4bb274: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x4bb274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_4bb278:
    // 0x4bb278: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x4bb278u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4bb27c:
    // 0x4bb27c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4bb27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4bb280:
    // 0x4bb280: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4bb280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4bb284:
    // 0x4bb284: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x4bb284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_4bb288:
    // 0x4bb288: 0x8c830cec  lw          $v1, 0xCEC($a0)
    ctx->pc = 0x4bb288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3308)));
label_4bb28c:
    // 0x4bb28c: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_4bb290:
    if (ctx->pc == 0x4BB290u) {
        ctx->pc = 0x4BB290u;
            // 0x4bb290: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x4BB294u;
        goto label_4bb294;
    }
    ctx->pc = 0x4BB28Cu;
    {
        const bool branch_taken_0x4bb28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb28c) {
            ctx->pc = 0x4BB290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB28Cu;
            // 0x4bb290: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB30Cu;
            goto label_4bb30c;
        }
    }
    ctx->pc = 0x4BB294u;
label_4bb294:
    // 0x4bb294: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4bb294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4bb298:
    // 0x4bb298: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_4bb29c:
    if (ctx->pc == 0x4BB29Cu) {
        ctx->pc = 0x4BB29Cu;
            // 0x4bb29c: 0xac830cec  sw          $v1, 0xCEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3308), GPR_U32(ctx, 3));
        ctx->pc = 0x4BB2A0u;
        goto label_4bb2a0;
    }
    ctx->pc = 0x4BB298u;
    {
        const bool branch_taken_0x4bb298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BB29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB298u;
            // 0x4bb29c: 0xac830cec  sw          $v1, 0xCEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb298) {
            ctx->pc = 0x4BB308u;
            goto label_4bb308;
        }
    }
    ctx->pc = 0x4BB2A0u;
label_4bb2a0:
    // 0x4bb2a0: 0x8ca40d78  lw          $a0, 0xD78($a1)
    ctx->pc = 0x4bb2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3448)));
label_4bb2a4:
    // 0x4bb2a4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4bb2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4bb2a8:
    // 0x4bb2a8: 0x8e630968  lw          $v1, 0x968($s3)
    ctx->pc = 0x4bb2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
label_4bb2ac:
    // 0x4bb2ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_4bb2b0:
    if (ctx->pc == 0x4BB2B0u) {
        ctx->pc = 0x4BB2B0u;
            // 0x4bb2b0: 0x8c91003c  lw          $s1, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->pc = 0x4BB2B4u;
        goto label_4bb2b4;
    }
    ctx->pc = 0x4BB2ACu;
    {
        const bool branch_taken_0x4bb2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BB2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB2ACu;
            // 0x4bb2b0: 0x8c91003c  lw          $s1, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb2ac) {
            ctx->pc = 0x4BB2B8u;
            goto label_4bb2b8;
        }
    }
    ctx->pc = 0x4BB2B4u;
label_4bb2b4:
    // 0x4bb2b4: 0x8c910048  lw          $s1, 0x48($a0)
    ctx->pc = 0x4bb2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4bb2b8:
    // 0x4bb2b8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4bb2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4bb2bc:
    // 0x4bb2bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bb2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bb2c0:
    // 0x4bb2c0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4bb2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4bb2c4:
    // 0x4bb2c4: 0x320f809  jalr        $t9
label_4bb2c8:
    if (ctx->pc == 0x4BB2C8u) {
        ctx->pc = 0x4BB2C8u;
            // 0x4bb2c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB2CCu;
        goto label_4bb2cc;
    }
    ctx->pc = 0x4BB2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB2CCu);
        ctx->pc = 0x4BB2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB2C4u;
            // 0x4bb2c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB2CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB2CCu; }
            if (ctx->pc != 0x4BB2CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4BB2CCu;
label_4bb2cc:
    // 0x4bb2cc: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x4bb2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_4bb2d0:
    // 0x4bb2d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4bb2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4bb2d4:
    // 0x4bb2d4: 0x8c660cd8  lw          $a2, 0xCD8($v1)
    ctx->pc = 0x4bb2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3288)));
label_4bb2d8:
    // 0x4bb2d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4bb2d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bb2dc:
    // 0x4bb2dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4bb2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bb2e0:
    // 0x4bb2e0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4bb2e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bb2e4:
    // 0x4bb2e4: 0xc12eccc  jal         func_4BB330
label_4bb2e8:
    if (ctx->pc == 0x4BB2E8u) {
        ctx->pc = 0x4BB2E8u;
            // 0x4bb2e8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BB2ECu;
        goto label_4bb2ec;
    }
    ctx->pc = 0x4BB2E4u;
    SET_GPR_U32(ctx, 31, 0x4BB2ECu);
    ctx->pc = 0x4BB2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB2E4u;
            // 0x4bb2e8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BB330u;
    if (runtime->hasFunction(0x4BB330u)) {
        auto targetFn = runtime->lookupFunction(0x4BB330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB2ECu; }
        if (ctx->pc != 0x4BB2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BB330_0x4bb330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB2ECu; }
        if (ctx->pc != 0x4BB2ECu) { return; }
    }
    ctx->pc = 0x4BB2ECu;
label_4bb2ec:
    // 0x4bb2ec: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4bb2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4bb2f0:
    // 0x4bb2f0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x4bb2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_4bb2f4:
    // 0x4bb2f4: 0x8c63a9d8  lw          $v1, -0x5628($v1)
    ctx->pc = 0x4bb2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945240)));
label_4bb2f8:
    // 0x4bb2f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4bb2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bb2fc:
    // 0x4bb2fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4bb2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4bb300:
    // 0x4bb300: 0x8c6300e0  lw          $v1, 0xE0($v1)
    ctx->pc = 0x4bb300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
label_4bb304:
    // 0x4bb304: 0xac650050  sw          $a1, 0x50($v1)
    ctx->pc = 0x4bb304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 5));
label_4bb308:
    // 0x4bb308: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4bb308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4bb30c:
    // 0x4bb30c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bb30cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bb310:
    // 0x4bb310: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bb310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bb314:
    // 0x4bb314: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bb314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bb318:
    // 0x4bb318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bb318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bb31c:
    // 0x4bb31c: 0x3e00008  jr          $ra
label_4bb320:
    if (ctx->pc == 0x4BB320u) {
        ctx->pc = 0x4BB320u;
            // 0x4bb320: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BB324u;
        goto label_4bb324;
    }
    ctx->pc = 0x4BB31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BB320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB31Cu;
            // 0x4bb320: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BB324u;
label_4bb324:
    // 0x4bb324: 0x0  nop
    ctx->pc = 0x4bb324u;
    // NOP
label_4bb328:
    // 0x4bb328: 0x0  nop
    ctx->pc = 0x4bb328u;
    // NOP
label_4bb32c:
    // 0x4bb32c: 0x0  nop
    ctx->pc = 0x4bb32cu;
    // NOP
}
