#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8560
// Address: 0x2d8560 - 0x2d86c0
void sub_002D8560_0x2d8560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8560_0x2d8560");
#endif

    switch (ctx->pc) {
        case 0x2d8560u: goto label_2d8560;
        case 0x2d8564u: goto label_2d8564;
        case 0x2d8568u: goto label_2d8568;
        case 0x2d856cu: goto label_2d856c;
        case 0x2d8570u: goto label_2d8570;
        case 0x2d8574u: goto label_2d8574;
        case 0x2d8578u: goto label_2d8578;
        case 0x2d857cu: goto label_2d857c;
        case 0x2d8580u: goto label_2d8580;
        case 0x2d8584u: goto label_2d8584;
        case 0x2d8588u: goto label_2d8588;
        case 0x2d858cu: goto label_2d858c;
        case 0x2d8590u: goto label_2d8590;
        case 0x2d8594u: goto label_2d8594;
        case 0x2d8598u: goto label_2d8598;
        case 0x2d859cu: goto label_2d859c;
        case 0x2d85a0u: goto label_2d85a0;
        case 0x2d85a4u: goto label_2d85a4;
        case 0x2d85a8u: goto label_2d85a8;
        case 0x2d85acu: goto label_2d85ac;
        case 0x2d85b0u: goto label_2d85b0;
        case 0x2d85b4u: goto label_2d85b4;
        case 0x2d85b8u: goto label_2d85b8;
        case 0x2d85bcu: goto label_2d85bc;
        case 0x2d85c0u: goto label_2d85c0;
        case 0x2d85c4u: goto label_2d85c4;
        case 0x2d85c8u: goto label_2d85c8;
        case 0x2d85ccu: goto label_2d85cc;
        case 0x2d85d0u: goto label_2d85d0;
        case 0x2d85d4u: goto label_2d85d4;
        case 0x2d85d8u: goto label_2d85d8;
        case 0x2d85dcu: goto label_2d85dc;
        case 0x2d85e0u: goto label_2d85e0;
        case 0x2d85e4u: goto label_2d85e4;
        case 0x2d85e8u: goto label_2d85e8;
        case 0x2d85ecu: goto label_2d85ec;
        case 0x2d85f0u: goto label_2d85f0;
        case 0x2d85f4u: goto label_2d85f4;
        case 0x2d85f8u: goto label_2d85f8;
        case 0x2d85fcu: goto label_2d85fc;
        case 0x2d8600u: goto label_2d8600;
        case 0x2d8604u: goto label_2d8604;
        case 0x2d8608u: goto label_2d8608;
        case 0x2d860cu: goto label_2d860c;
        case 0x2d8610u: goto label_2d8610;
        case 0x2d8614u: goto label_2d8614;
        case 0x2d8618u: goto label_2d8618;
        case 0x2d861cu: goto label_2d861c;
        case 0x2d8620u: goto label_2d8620;
        case 0x2d8624u: goto label_2d8624;
        case 0x2d8628u: goto label_2d8628;
        case 0x2d862cu: goto label_2d862c;
        case 0x2d8630u: goto label_2d8630;
        case 0x2d8634u: goto label_2d8634;
        case 0x2d8638u: goto label_2d8638;
        case 0x2d863cu: goto label_2d863c;
        case 0x2d8640u: goto label_2d8640;
        case 0x2d8644u: goto label_2d8644;
        case 0x2d8648u: goto label_2d8648;
        case 0x2d864cu: goto label_2d864c;
        case 0x2d8650u: goto label_2d8650;
        case 0x2d8654u: goto label_2d8654;
        case 0x2d8658u: goto label_2d8658;
        case 0x2d865cu: goto label_2d865c;
        case 0x2d8660u: goto label_2d8660;
        case 0x2d8664u: goto label_2d8664;
        case 0x2d8668u: goto label_2d8668;
        case 0x2d866cu: goto label_2d866c;
        case 0x2d8670u: goto label_2d8670;
        case 0x2d8674u: goto label_2d8674;
        case 0x2d8678u: goto label_2d8678;
        case 0x2d867cu: goto label_2d867c;
        case 0x2d8680u: goto label_2d8680;
        case 0x2d8684u: goto label_2d8684;
        case 0x2d8688u: goto label_2d8688;
        case 0x2d868cu: goto label_2d868c;
        case 0x2d8690u: goto label_2d8690;
        case 0x2d8694u: goto label_2d8694;
        case 0x2d8698u: goto label_2d8698;
        case 0x2d869cu: goto label_2d869c;
        case 0x2d86a0u: goto label_2d86a0;
        case 0x2d86a4u: goto label_2d86a4;
        case 0x2d86a8u: goto label_2d86a8;
        case 0x2d86acu: goto label_2d86ac;
        case 0x2d86b0u: goto label_2d86b0;
        case 0x2d86b4u: goto label_2d86b4;
        case 0x2d86b8u: goto label_2d86b8;
        case 0x2d86bcu: goto label_2d86bc;
        default: break;
    }

    ctx->pc = 0x2d8560u;

label_2d8560:
    // 0x2d8560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d8560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2d8564:
    // 0x2d8564: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d8564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2d8568:
    // 0x2d8568: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d8568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2d856c:
    // 0x2d856c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2d8570:
    // 0x2d8570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d8570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d8574:
    // 0x2d8574: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d8574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8578:
    // 0x2d8578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d857c:
    // 0x2d857c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d857cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d8580:
    // 0x2d8580: 0x12600043  beqz        $s3, . + 4 + (0x43 << 2)
label_2d8584:
    if (ctx->pc == 0x2D8584u) {
        ctx->pc = 0x2D8584u;
            // 0x2d8584: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2D8588u;
        goto label_2d8588;
    }
    ctx->pc = 0x2D8580u;
    {
        const bool branch_taken_0x2d8580 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8580u;
            // 0x2d8584: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8580) {
            ctx->pc = 0x2D8690u;
            goto label_2d8690;
        }
    }
    ctx->pc = 0x2D8588u;
label_2d8588:
    // 0x2d8588: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d8588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2d858c:
    // 0x2d858c: 0x8e710040  lw          $s1, 0x40($s3)
    ctx->pc = 0x2d858cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2d8590:
    // 0x2d8590: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x2d8590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_2d8594:
    // 0x2d8594: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2d8594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_2d8598:
    // 0x2d8598: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d8598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2d859c:
    // 0x2d859c: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x2d859cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2d85a0:
    // 0x2d85a0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d85a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d85a4:
    // 0x2d85a4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2d85a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d85a8:
    // 0x2d85a8: 0xc08c614  jal         func_231850
label_2d85ac:
    if (ctx->pc == 0x2D85ACu) {
        ctx->pc = 0x2D85ACu;
            // 0x2d85ac: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->pc = 0x2D85B0u;
        goto label_2d85b0;
    }
    ctx->pc = 0x2D85A8u;
    SET_GPR_U32(ctx, 31, 0x2D85B0u);
    ctx->pc = 0x2D85ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D85A8u;
            // 0x2d85ac: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231850u;
    if (runtime->hasFunction(0x231850u)) {
        auto targetFn = runtime->lookupFunction(0x231850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85B0u; }
        if (ctx->pc != 0x2D85B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231850_0x231850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85B0u; }
        if (ctx->pc != 0x2D85B0u) { return; }
    }
    ctx->pc = 0x2D85B0u;
label_2d85b0:
    // 0x2d85b0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2d85b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2d85b4:
    // 0x2d85b4: 0x1634fffa  bne         $s1, $s4, . + 4 + (-0x6 << 2)
label_2d85b8:
    if (ctx->pc == 0x2D85B8u) {
        ctx->pc = 0x2D85BCu;
        goto label_2d85bc;
    }
    ctx->pc = 0x2D85B4u;
    {
        const bool branch_taken_0x2d85b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d85b4) {
            ctx->pc = 0x2D85A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d85a0;
        }
    }
    ctx->pc = 0x2D85BCu;
label_2d85bc:
    // 0x2d85bc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d85c0:
    // 0x2d85c0: 0x8e660038  lw          $a2, 0x38($s3)
    ctx->pc = 0x2d85c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_2d85c4:
    // 0x2d85c4: 0xc08c614  jal         func_231850
label_2d85c8:
    if (ctx->pc == 0x2D85C8u) {
        ctx->pc = 0x2D85C8u;
            // 0x2d85c8: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->pc = 0x2D85CCu;
        goto label_2d85cc;
    }
    ctx->pc = 0x2D85C4u;
    SET_GPR_U32(ctx, 31, 0x2D85CCu);
    ctx->pc = 0x2D85C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D85C4u;
            // 0x2d85c8: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231850u;
    if (runtime->hasFunction(0x231850u)) {
        auto targetFn = runtime->lookupFunction(0x231850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85CCu; }
        if (ctx->pc != 0x2D85CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231850_0x231850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85CCu; }
        if (ctx->pc != 0x2D85CCu) { return; }
    }
    ctx->pc = 0x2D85CCu;
label_2d85cc:
    // 0x2d85cc: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2d85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2d85d0:
    // 0x2d85d0: 0x8e710020  lw          $s1, 0x20($s3)
    ctx->pc = 0x2d85d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2d85d4:
    // 0x2d85d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d85d8:
    // 0x2d85d8: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2d85d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2d85dc:
    // 0x2d85dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d85dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d85e0:
    // 0x2d85e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2d85e4:
    if (ctx->pc == 0x2D85E4u) {
        ctx->pc = 0x2D85E8u;
        goto label_2d85e8;
    }
    ctx->pc = 0x2D85E0u;
    {
        const bool branch_taken_0x2d85e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d85e0) {
            ctx->pc = 0x2D85F8u;
            goto label_2d85f8;
        }
    }
    ctx->pc = 0x2D85E8u;
label_2d85e8:
    // 0x2d85e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d85e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d85ec:
    // 0x2d85ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2d85ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2d85f0:
    // 0x2d85f0: 0x320f809  jalr        $t9
label_2d85f4:
    if (ctx->pc == 0x2D85F4u) {
        ctx->pc = 0x2D85F4u;
            // 0x2d85f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D85F8u;
        goto label_2d85f8;
    }
    ctx->pc = 0x2D85F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D85F8u);
        ctx->pc = 0x2D85F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D85F0u;
            // 0x2d85f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D85F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D85F8u; }
            if (ctx->pc != 0x2D85F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2D85F8u;
label_2d85f8:
    // 0x2d85f8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d85f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d85fc:
    // 0x2d85fc: 0x5630fff8  bnel        $s1, $s0, . + 4 + (-0x8 << 2)
label_2d8600:
    if (ctx->pc == 0x2D8600u) {
        ctx->pc = 0x2D8600u;
            // 0x2d8600: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2D8604u;
        goto label_2d8604;
    }
    ctx->pc = 0x2D85FCu;
    {
        const bool branch_taken_0x2d85fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d85fc) {
            ctx->pc = 0x2D8600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D85FCu;
            // 0x2d8600: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D85E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d85e0;
        }
    }
    ctx->pc = 0x2D8604u;
label_2d8604:
    // 0x2d8604: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x2d8604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_2d8608:
    // 0x2d8608: 0x8e71002c  lw          $s1, 0x2C($s3)
    ctx->pc = 0x2d8608u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_2d860c:
    // 0x2d860c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d860cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d8610:
    // 0x2d8610: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2d8610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2d8614:
    // 0x2d8614: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d8614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8618:
    // 0x2d8618: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2d861c:
    if (ctx->pc == 0x2D861Cu) {
        ctx->pc = 0x2D8620u;
        goto label_2d8620;
    }
    ctx->pc = 0x2D8618u;
    {
        const bool branch_taken_0x2d8618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8618) {
            ctx->pc = 0x2D8630u;
            goto label_2d8630;
        }
    }
    ctx->pc = 0x2D8620u;
label_2d8620:
    // 0x2d8620: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d8620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8624:
    // 0x2d8624: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2d8624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2d8628:
    // 0x2d8628: 0x320f809  jalr        $t9
label_2d862c:
    if (ctx->pc == 0x2D862Cu) {
        ctx->pc = 0x2D862Cu;
            // 0x2d862c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D8630u;
        goto label_2d8630;
    }
    ctx->pc = 0x2D8628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8630u);
        ctx->pc = 0x2D862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8628u;
            // 0x2d862c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D8630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8630u; }
            if (ctx->pc != 0x2D8630u) { return; }
        }
        }
    }
    ctx->pc = 0x2D8630u;
label_2d8630:
    // 0x2d8630: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d8630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d8634:
    // 0x2d8634: 0x5630fff8  bnel        $s1, $s0, . + 4 + (-0x8 << 2)
label_2d8638:
    if (ctx->pc == 0x2D8638u) {
        ctx->pc = 0x2D8638u;
            // 0x2d8638: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2D863Cu;
        goto label_2d863c;
    }
    ctx->pc = 0x2D8634u;
    {
        const bool branch_taken_0x2d8634 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d8634) {
            ctx->pc = 0x2D8638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8634u;
            // 0x2d8638: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d8618;
        }
    }
    ctx->pc = 0x2D863Cu;
label_2d863c:
    // 0x2d863c: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x2d863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_2d8640:
    // 0x2d8640: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2d8644:
    if (ctx->pc == 0x2D8644u) {
        ctx->pc = 0x2D8644u;
            // 0x2d8644: 0x2664002c  addiu       $a0, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->pc = 0x2D8648u;
        goto label_2d8648;
    }
    ctx->pc = 0x2D8640u;
    {
        const bool branch_taken_0x2d8640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8640) {
            ctx->pc = 0x2D8644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8640u;
            // 0x2d8644: 0x2664002c  addiu       $a0, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8654u;
            goto label_2d8654;
        }
    }
    ctx->pc = 0x2D8648u;
label_2d8648:
    // 0x2d8648: 0xc0b61d8  jal         func_2D8760
label_2d864c:
    if (ctx->pc == 0x2D864Cu) {
        ctx->pc = 0x2D8650u;
        goto label_2d8650;
    }
    ctx->pc = 0x2D8648u;
    SET_GPR_U32(ctx, 31, 0x2D8650u);
    ctx->pc = 0x2D8760u;
    if (runtime->hasFunction(0x2D8760u)) {
        auto targetFn = runtime->lookupFunction(0x2D8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8650u; }
        if (ctx->pc != 0x2D8650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8760_0x2d8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8650u; }
        if (ctx->pc != 0x2D8650u) { return; }
    }
    ctx->pc = 0x2D8650u;
label_2d8650:
    // 0x2d8650: 0x2664002c  addiu       $a0, $s3, 0x2C
    ctx->pc = 0x2d8650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_2d8654:
    // 0x2d8654: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2d8658:
    if (ctx->pc == 0x2D8658u) {
        ctx->pc = 0x2D8658u;
            // 0x2d8658: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x2D865Cu;
        goto label_2d865c;
    }
    ctx->pc = 0x2D8654u;
    {
        const bool branch_taken_0x2d8654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8654) {
            ctx->pc = 0x2D8658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8654u;
            // 0x2d8658: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8668u;
            goto label_2d8668;
        }
    }
    ctx->pc = 0x2D865Cu;
label_2d865c:
    // 0x2d865c: 0xc0b61c4  jal         func_2D8710
label_2d8660:
    if (ctx->pc == 0x2D8660u) {
        ctx->pc = 0x2D8664u;
        goto label_2d8664;
    }
    ctx->pc = 0x2D865Cu;
    SET_GPR_U32(ctx, 31, 0x2D8664u);
    ctx->pc = 0x2D8710u;
    if (runtime->hasFunction(0x2D8710u)) {
        auto targetFn = runtime->lookupFunction(0x2D8710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8664u; }
        if (ctx->pc != 0x2D8664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8710_0x2d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8664u; }
        if (ctx->pc != 0x2D8664u) { return; }
    }
    ctx->pc = 0x2D8664u;
label_2d8664:
    // 0x2d8664: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2d8664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2d8668:
    // 0x2d8668: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2d866c:
    if (ctx->pc == 0x2D866Cu) {
        ctx->pc = 0x2D866Cu;
            // 0x2d866c: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x2D8670u;
        goto label_2d8670;
    }
    ctx->pc = 0x2D8668u;
    {
        const bool branch_taken_0x2d8668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8668) {
            ctx->pc = 0x2D866Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8668u;
            // 0x2d866c: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D867Cu;
            goto label_2d867c;
        }
    }
    ctx->pc = 0x2D8670u;
label_2d8670:
    // 0x2d8670: 0xc0b61b0  jal         func_2D86C0
label_2d8674:
    if (ctx->pc == 0x2D8674u) {
        ctx->pc = 0x2D8678u;
        goto label_2d8678;
    }
    ctx->pc = 0x2D8670u;
    SET_GPR_U32(ctx, 31, 0x2D8678u);
    ctx->pc = 0x2D86C0u;
    if (runtime->hasFunction(0x2D86C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8678u; }
        if (ctx->pc != 0x2D8678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D86C0_0x2d86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8678u; }
        if (ctx->pc != 0x2D8678u) { return; }
    }
    ctx->pc = 0x2D8678u;
label_2d8678:
    // 0x2d8678: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2d8678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_2d867c:
    // 0x2d867c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d867cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d8680:
    // 0x2d8680: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2d8684:
    if (ctx->pc == 0x2D8684u) {
        ctx->pc = 0x2D8684u;
            // 0x2d8684: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8688u;
        goto label_2d8688;
    }
    ctx->pc = 0x2D8680u;
    {
        const bool branch_taken_0x2d8680 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d8680) {
            ctx->pc = 0x2D8684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8680u;
            // 0x2d8684: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8694u;
            goto label_2d8694;
        }
    }
    ctx->pc = 0x2D8688u;
label_2d8688:
    // 0x2d8688: 0xc0400a8  jal         func_1002A0
label_2d868c:
    if (ctx->pc == 0x2D868Cu) {
        ctx->pc = 0x2D868Cu;
            // 0x2d868c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8690u;
        goto label_2d8690;
    }
    ctx->pc = 0x2D8688u;
    SET_GPR_U32(ctx, 31, 0x2D8690u);
    ctx->pc = 0x2D868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8688u;
            // 0x2d868c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8690u; }
        if (ctx->pc != 0x2D8690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8690u; }
        if (ctx->pc != 0x2D8690u) { return; }
    }
    ctx->pc = 0x2D8690u;
label_2d8690:
    // 0x2d8690: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2d8690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8694:
    // 0x2d8694: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d8694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d8698:
    // 0x2d8698: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d8698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d869c:
    // 0x2d869c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d869cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d86a0:
    // 0x2d86a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d86a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d86a4:
    // 0x2d86a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d86a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d86a8:
    // 0x2d86a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d86a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d86ac:
    // 0x2d86ac: 0x3e00008  jr          $ra
label_2d86b0:
    if (ctx->pc == 0x2D86B0u) {
        ctx->pc = 0x2D86B0u;
            // 0x2d86b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2D86B4u;
        goto label_2d86b4;
    }
    ctx->pc = 0x2D86ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D86B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D86ACu;
            // 0x2d86b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D86B4u;
label_2d86b4:
    // 0x2d86b4: 0x0  nop
    ctx->pc = 0x2d86b4u;
    // NOP
label_2d86b8:
    // 0x2d86b8: 0x0  nop
    ctx->pc = 0x2d86b8u;
    // NOP
label_2d86bc:
    // 0x2d86bc: 0x0  nop
    ctx->pc = 0x2d86bcu;
    // NOP
}
