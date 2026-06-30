#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002252B0
// Address: 0x2252b0 - 0x225350
void sub_002252B0_0x2252b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002252B0_0x2252b0");
#endif

    switch (ctx->pc) {
        case 0x2252b0u: goto label_2252b0;
        case 0x2252b4u: goto label_2252b4;
        case 0x2252b8u: goto label_2252b8;
        case 0x2252bcu: goto label_2252bc;
        case 0x2252c0u: goto label_2252c0;
        case 0x2252c4u: goto label_2252c4;
        case 0x2252c8u: goto label_2252c8;
        case 0x2252ccu: goto label_2252cc;
        case 0x2252d0u: goto label_2252d0;
        case 0x2252d4u: goto label_2252d4;
        case 0x2252d8u: goto label_2252d8;
        case 0x2252dcu: goto label_2252dc;
        case 0x2252e0u: goto label_2252e0;
        case 0x2252e4u: goto label_2252e4;
        case 0x2252e8u: goto label_2252e8;
        case 0x2252ecu: goto label_2252ec;
        case 0x2252f0u: goto label_2252f0;
        case 0x2252f4u: goto label_2252f4;
        case 0x2252f8u: goto label_2252f8;
        case 0x2252fcu: goto label_2252fc;
        case 0x225300u: goto label_225300;
        case 0x225304u: goto label_225304;
        case 0x225308u: goto label_225308;
        case 0x22530cu: goto label_22530c;
        case 0x225310u: goto label_225310;
        case 0x225314u: goto label_225314;
        case 0x225318u: goto label_225318;
        case 0x22531cu: goto label_22531c;
        case 0x225320u: goto label_225320;
        case 0x225324u: goto label_225324;
        case 0x225328u: goto label_225328;
        case 0x22532cu: goto label_22532c;
        case 0x225330u: goto label_225330;
        case 0x225334u: goto label_225334;
        case 0x225338u: goto label_225338;
        case 0x22533cu: goto label_22533c;
        case 0x225340u: goto label_225340;
        case 0x225344u: goto label_225344;
        case 0x225348u: goto label_225348;
        case 0x22534cu: goto label_22534c;
        default: break;
    }

    ctx->pc = 0x2252b0u;

label_2252b0:
    // 0x2252b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2252b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2252b4:
    // 0x2252b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2252b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2252b8:
    // 0x2252b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2252b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2252bc:
    // 0x2252bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2252bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2252c0:
    // 0x2252c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2252c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2252c4:
    // 0x2252c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2252c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2252c8:
    // 0x2252c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2252c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2252cc:
    // 0x2252cc: 0x948301e4  lhu         $v1, 0x1E4($a0)
    ctx->pc = 0x2252ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
label_2252d0:
    // 0x2252d0: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x2252d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2252d4:
    // 0x2252d4: 0x6200010  bltz        $s1, . + 4 + (0x10 << 2)
label_2252d8:
    if (ctx->pc == 0x2252D8u) {
        ctx->pc = 0x2252D8u;
            // 0x2252d8: 0x267201e0  addiu       $s2, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->pc = 0x2252DCu;
        goto label_2252dc;
    }
    ctx->pc = 0x2252D4u;
    {
        const bool branch_taken_0x2252d4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2252D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2252D4u;
            // 0x2252d8: 0x267201e0  addiu       $s2, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2252d4) {
            ctx->pc = 0x225318u;
            goto label_225318;
        }
    }
    ctx->pc = 0x2252DCu;
label_2252dc:
    // 0x2252dc: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2252dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2252e0:
    // 0x2252e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2252e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2252e4:
    // 0x2252e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2252e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2252e8:
    // 0x2252e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2252e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2252ec:
    // 0x2252ec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2252f0:
    if (ctx->pc == 0x2252F0u) {
        ctx->pc = 0x2252F4u;
        goto label_2252f4;
    }
    ctx->pc = 0x2252ECu;
    {
        const bool branch_taken_0x2252ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2252ec) {
            ctx->pc = 0x225308u;
            goto label_225308;
        }
    }
    ctx->pc = 0x2252F4u;
label_2252f4:
    // 0x2252f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2252f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2252f8:
    // 0x2252f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2252f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2252fc:
    // 0x2252fc: 0x320f809  jalr        $t9
label_225300:
    if (ctx->pc == 0x225300u) {
        ctx->pc = 0x225300u;
            // 0x225300: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225304u;
        goto label_225304;
    }
    ctx->pc = 0x2252FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x225304u);
        ctx->pc = 0x225300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2252FCu;
            // 0x225300: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x225304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x225304u; }
            if (ctx->pc != 0x225304u) { return; }
        }
        }
    }
    ctx->pc = 0x225304u;
label_225304:
    // 0x225304: 0x0  nop
    ctx->pc = 0x225304u;
    // NOP
label_225308:
    // 0x225308: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x225308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22530c:
    // 0x22530c: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
label_225310:
    if (ctx->pc == 0x225310u) {
        ctx->pc = 0x225310u;
            // 0x225310: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x225314u;
        goto label_225314;
    }
    ctx->pc = 0x22530Cu;
    {
        const bool branch_taken_0x22530c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x225310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22530Cu;
            // 0x225310: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22530c) {
            ctx->pc = 0x2252E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2252e0;
        }
    }
    ctx->pc = 0x225314u;
label_225314:
    // 0x225314: 0x0  nop
    ctx->pc = 0x225314u;
    // NOP
label_225318:
    // 0x225318: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x225318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22531c:
    // 0x22531c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22531cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_225320:
    // 0x225320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225324:
    // 0x225324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225328:
    // 0x225328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22532c:
    // 0x22532c: 0x3e00008  jr          $ra
label_225330:
    if (ctx->pc == 0x225330u) {
        ctx->pc = 0x225330u;
            // 0x225330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x225334u;
        goto label_225334;
    }
    ctx->pc = 0x22532Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22532Cu;
            // 0x225330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225334u;
label_225334:
    // 0x225334: 0x0  nop
    ctx->pc = 0x225334u;
    // NOP
label_225338:
    // 0x225338: 0x0  nop
    ctx->pc = 0x225338u;
    // NOP
label_22533c:
    // 0x22533c: 0x0  nop
    ctx->pc = 0x22533cu;
    // NOP
label_225340:
    // 0x225340: 0x3e00008  jr          $ra
label_225344:
    if (ctx->pc == 0x225344u) {
        ctx->pc = 0x225348u;
        goto label_225348;
    }
    ctx->pc = 0x225340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225348u;
label_225348:
    // 0x225348: 0x0  nop
    ctx->pc = 0x225348u;
    // NOP
label_22534c:
    // 0x22534c: 0x0  nop
    ctx->pc = 0x22534cu;
    // NOP
}
