#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225350
// Address: 0x225350 - 0x225460
void sub_00225350_0x225350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225350_0x225350");
#endif

    switch (ctx->pc) {
        case 0x225350u: goto label_225350;
        case 0x225354u: goto label_225354;
        case 0x225358u: goto label_225358;
        case 0x22535cu: goto label_22535c;
        case 0x225360u: goto label_225360;
        case 0x225364u: goto label_225364;
        case 0x225368u: goto label_225368;
        case 0x22536cu: goto label_22536c;
        case 0x225370u: goto label_225370;
        case 0x225374u: goto label_225374;
        case 0x225378u: goto label_225378;
        case 0x22537cu: goto label_22537c;
        case 0x225380u: goto label_225380;
        case 0x225384u: goto label_225384;
        case 0x225388u: goto label_225388;
        case 0x22538cu: goto label_22538c;
        case 0x225390u: goto label_225390;
        case 0x225394u: goto label_225394;
        case 0x225398u: goto label_225398;
        case 0x22539cu: goto label_22539c;
        case 0x2253a0u: goto label_2253a0;
        case 0x2253a4u: goto label_2253a4;
        case 0x2253a8u: goto label_2253a8;
        case 0x2253acu: goto label_2253ac;
        case 0x2253b0u: goto label_2253b0;
        case 0x2253b4u: goto label_2253b4;
        case 0x2253b8u: goto label_2253b8;
        case 0x2253bcu: goto label_2253bc;
        case 0x2253c0u: goto label_2253c0;
        case 0x2253c4u: goto label_2253c4;
        case 0x2253c8u: goto label_2253c8;
        case 0x2253ccu: goto label_2253cc;
        case 0x2253d0u: goto label_2253d0;
        case 0x2253d4u: goto label_2253d4;
        case 0x2253d8u: goto label_2253d8;
        case 0x2253dcu: goto label_2253dc;
        case 0x2253e0u: goto label_2253e0;
        case 0x2253e4u: goto label_2253e4;
        case 0x2253e8u: goto label_2253e8;
        case 0x2253ecu: goto label_2253ec;
        case 0x2253f0u: goto label_2253f0;
        case 0x2253f4u: goto label_2253f4;
        case 0x2253f8u: goto label_2253f8;
        case 0x2253fcu: goto label_2253fc;
        case 0x225400u: goto label_225400;
        case 0x225404u: goto label_225404;
        case 0x225408u: goto label_225408;
        case 0x22540cu: goto label_22540c;
        case 0x225410u: goto label_225410;
        case 0x225414u: goto label_225414;
        case 0x225418u: goto label_225418;
        case 0x22541cu: goto label_22541c;
        case 0x225420u: goto label_225420;
        case 0x225424u: goto label_225424;
        case 0x225428u: goto label_225428;
        case 0x22542cu: goto label_22542c;
        case 0x225430u: goto label_225430;
        case 0x225434u: goto label_225434;
        case 0x225438u: goto label_225438;
        case 0x22543cu: goto label_22543c;
        case 0x225440u: goto label_225440;
        case 0x225444u: goto label_225444;
        case 0x225448u: goto label_225448;
        case 0x22544cu: goto label_22544c;
        case 0x225450u: goto label_225450;
        case 0x225454u: goto label_225454;
        case 0x225458u: goto label_225458;
        case 0x22545cu: goto label_22545c;
        default: break;
    }

    ctx->pc = 0x225350u;

label_225350:
    // 0x225350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_225354:
    // 0x225354: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x225354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_225358:
    // 0x225358: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x225358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22535c:
    // 0x22535c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_225360:
    // 0x225360: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x225360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225364:
    // 0x225364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_225368:
    // 0x225368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22536c:
    // 0x22536c: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x22536cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_225370:
    // 0x225370: 0x948301d4  lhu         $v1, 0x1D4($a0)
    ctx->pc = 0x225370u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 468)));
label_225374:
    // 0x225374: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x225374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_225378:
    // 0x225378: 0x640000f  bltz        $s2, . + 4 + (0xF << 2)
label_22537c:
    if (ctx->pc == 0x22537Cu) {
        ctx->pc = 0x22537Cu;
            // 0x22537c: 0x249001d0  addiu       $s0, $a0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
        ctx->pc = 0x225380u;
        goto label_225380;
    }
    ctx->pc = 0x225378u;
    {
        const bool branch_taken_0x225378 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22537Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225378u;
            // 0x22537c: 0x249001d0  addiu       $s0, $a0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225378) {
            ctx->pc = 0x2253B8u;
            goto label_2253b8;
        }
    }
    ctx->pc = 0x225380u;
label_225380:
    // 0x225380: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x225380u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_225384:
    // 0x225384: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x225384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225388:
    // 0x225388: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x225388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22538c:
    // 0x22538c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22538cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_225390:
    // 0x225390: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_225394:
    if (ctx->pc == 0x225394u) {
        ctx->pc = 0x225398u;
        goto label_225398;
    }
    ctx->pc = 0x225390u;
    {
        const bool branch_taken_0x225390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x225390) {
            ctx->pc = 0x2253A8u;
            goto label_2253a8;
        }
    }
    ctx->pc = 0x225398u;
label_225398:
    // 0x225398: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x225398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22539c:
    // 0x22539c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x22539cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2253a0:
    // 0x2253a0: 0x320f809  jalr        $t9
label_2253a4:
    if (ctx->pc == 0x2253A4u) {
        ctx->pc = 0x2253A4u;
            // 0x2253a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2253A8u;
        goto label_2253a8;
    }
    ctx->pc = 0x2253A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2253A8u);
        ctx->pc = 0x2253A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2253A0u;
            // 0x2253a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2253A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2253A8u; }
            if (ctx->pc != 0x2253A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2253A8u;
label_2253a8:
    // 0x2253a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2253a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2253ac:
    // 0x2253ac: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_2253b0:
    if (ctx->pc == 0x2253B0u) {
        ctx->pc = 0x2253B0u;
            // 0x2253b0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x2253B4u;
        goto label_2253b4;
    }
    ctx->pc = 0x2253ACu;
    {
        const bool branch_taken_0x2253ac = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2253B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2253ACu;
            // 0x2253b0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253ac) {
            ctx->pc = 0x225384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225384;
        }
    }
    ctx->pc = 0x2253B4u;
label_2253b4:
    // 0x2253b4: 0x0  nop
    ctx->pc = 0x2253b4u;
    // NOP
label_2253b8:
    // 0x2253b8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x2253b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2253bc:
    // 0x2253bc: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2253bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2253c0:
    // 0x2253c0: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_2253c4:
    if (ctx->pc == 0x2253C4u) {
        ctx->pc = 0x2253C8u;
        goto label_2253c8;
    }
    ctx->pc = 0x2253C0u;
    {
        const bool branch_taken_0x2253c0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2253c0) {
            ctx->pc = 0x225438u;
            goto label_225438;
        }
    }
    ctx->pc = 0x2253C8u;
label_2253c8:
    // 0x2253c8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2253c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2253cc:
    // 0x2253cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2253ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2253d0:
    // 0x2253d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2253d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2253d4:
    // 0x2253d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2253d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2253d8:
    // 0x2253d8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_2253dc:
    if (ctx->pc == 0x2253DCu) {
        ctx->pc = 0x2253E0u;
        goto label_2253e0;
    }
    ctx->pc = 0x2253D8u;
    {
        const bool branch_taken_0x2253d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2253d8) {
            ctx->pc = 0x225428u;
            goto label_225428;
        }
    }
    ctx->pc = 0x2253E0u;
label_2253e0:
    // 0x2253e0: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x2253e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2253e4:
    // 0x2253e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2253e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2253e8:
    // 0x2253e8: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x2253e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_2253ec:
    // 0x2253ec: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x2253ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2253f0:
    // 0x2253f0: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x2253f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2253f4:
    // 0x2253f4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_2253f8:
    if (ctx->pc == 0x2253F8u) {
        ctx->pc = 0x2253F8u;
            // 0x2253f8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2253FCu;
        goto label_2253fc;
    }
    ctx->pc = 0x2253F4u;
    {
        const bool branch_taken_0x2253f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2253F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2253F4u;
            // 0x2253f8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2253f4) {
            ctx->pc = 0x225428u;
            goto label_225428;
        }
    }
    ctx->pc = 0x2253FCu;
label_2253fc:
    // 0x2253fc: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x2253fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_225400:
    // 0x225400: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x225400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225404:
    // 0x225404: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x225404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_225408:
    // 0x225408: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x225408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22540c:
    // 0x22540c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22540cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_225410:
    // 0x225410: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x225410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_225414:
    // 0x225414: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x225414u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_225418:
    // 0x225418: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x225418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22541c:
    // 0x22541c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_225420:
    if (ctx->pc == 0x225420u) {
        ctx->pc = 0x225420u;
            // 0x225420: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x225424u;
        goto label_225424;
    }
    ctx->pc = 0x22541Cu;
    {
        const bool branch_taken_0x22541c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x225420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22541Cu;
            // 0x225420: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22541c) {
            ctx->pc = 0x225400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225400;
        }
    }
    ctx->pc = 0x225424u;
label_225424:
    // 0x225424: 0x0  nop
    ctx->pc = 0x225424u;
    // NOP
label_225428:
    // 0x225428: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x225428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_22542c:
    // 0x22542c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_225430:
    if (ctx->pc == 0x225430u) {
        ctx->pc = 0x225430u;
            // 0x225430: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x225434u;
        goto label_225434;
    }
    ctx->pc = 0x22542Cu;
    {
        const bool branch_taken_0x22542c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x225430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22542Cu;
            // 0x225430: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22542c) {
            ctx->pc = 0x2253CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2253cc;
        }
    }
    ctx->pc = 0x225434u;
label_225434:
    // 0x225434: 0x0  nop
    ctx->pc = 0x225434u;
    // NOP
label_225438:
    // 0x225438: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x225438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22543c:
    // 0x22543c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22543cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_225440:
    // 0x225440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225444:
    // 0x225444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225448:
    // 0x225448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22544c:
    // 0x22544c: 0x3e00008  jr          $ra
label_225450:
    if (ctx->pc == 0x225450u) {
        ctx->pc = 0x225450u;
            // 0x225450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x225454u;
        goto label_225454;
    }
    ctx->pc = 0x22544Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22544Cu;
            // 0x225450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225454u;
label_225454:
    // 0x225454: 0x0  nop
    ctx->pc = 0x225454u;
    // NOP
label_225458:
    // 0x225458: 0x0  nop
    ctx->pc = 0x225458u;
    // NOP
label_22545c:
    // 0x22545c: 0x0  nop
    ctx->pc = 0x22545cu;
    // NOP
}
