#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002251C0
// Address: 0x2251c0 - 0x2252b0
void sub_002251C0_0x2251c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002251C0_0x2251c0");
#endif

    switch (ctx->pc) {
        case 0x2251c0u: goto label_2251c0;
        case 0x2251c4u: goto label_2251c4;
        case 0x2251c8u: goto label_2251c8;
        case 0x2251ccu: goto label_2251cc;
        case 0x2251d0u: goto label_2251d0;
        case 0x2251d4u: goto label_2251d4;
        case 0x2251d8u: goto label_2251d8;
        case 0x2251dcu: goto label_2251dc;
        case 0x2251e0u: goto label_2251e0;
        case 0x2251e4u: goto label_2251e4;
        case 0x2251e8u: goto label_2251e8;
        case 0x2251ecu: goto label_2251ec;
        case 0x2251f0u: goto label_2251f0;
        case 0x2251f4u: goto label_2251f4;
        case 0x2251f8u: goto label_2251f8;
        case 0x2251fcu: goto label_2251fc;
        case 0x225200u: goto label_225200;
        case 0x225204u: goto label_225204;
        case 0x225208u: goto label_225208;
        case 0x22520cu: goto label_22520c;
        case 0x225210u: goto label_225210;
        case 0x225214u: goto label_225214;
        case 0x225218u: goto label_225218;
        case 0x22521cu: goto label_22521c;
        case 0x225220u: goto label_225220;
        case 0x225224u: goto label_225224;
        case 0x225228u: goto label_225228;
        case 0x22522cu: goto label_22522c;
        case 0x225230u: goto label_225230;
        case 0x225234u: goto label_225234;
        case 0x225238u: goto label_225238;
        case 0x22523cu: goto label_22523c;
        case 0x225240u: goto label_225240;
        case 0x225244u: goto label_225244;
        case 0x225248u: goto label_225248;
        case 0x22524cu: goto label_22524c;
        case 0x225250u: goto label_225250;
        case 0x225254u: goto label_225254;
        case 0x225258u: goto label_225258;
        case 0x22525cu: goto label_22525c;
        case 0x225260u: goto label_225260;
        case 0x225264u: goto label_225264;
        case 0x225268u: goto label_225268;
        case 0x22526cu: goto label_22526c;
        case 0x225270u: goto label_225270;
        case 0x225274u: goto label_225274;
        case 0x225278u: goto label_225278;
        case 0x22527cu: goto label_22527c;
        case 0x225280u: goto label_225280;
        case 0x225284u: goto label_225284;
        case 0x225288u: goto label_225288;
        case 0x22528cu: goto label_22528c;
        case 0x225290u: goto label_225290;
        case 0x225294u: goto label_225294;
        case 0x225298u: goto label_225298;
        case 0x22529cu: goto label_22529c;
        case 0x2252a0u: goto label_2252a0;
        case 0x2252a4u: goto label_2252a4;
        case 0x2252a8u: goto label_2252a8;
        case 0x2252acu: goto label_2252ac;
        default: break;
    }

    ctx->pc = 0x2251c0u;

label_2251c0:
    // 0x2251c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2251c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2251c4:
    // 0x2251c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2251c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2251c8:
    // 0x2251c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2251c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2251cc:
    // 0x2251cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2251ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2251d0:
    // 0x2251d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2251d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2251d4:
    // 0x2251d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2251d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2251d8:
    // 0x2251d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2251d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2251dc:
    // 0x2251dc: 0x948301e4  lhu         $v1, 0x1E4($a0)
    ctx->pc = 0x2251dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 484)));
label_2251e0:
    // 0x2251e0: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x2251e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2251e4:
    // 0x2251e4: 0x6200010  bltz        $s1, . + 4 + (0x10 << 2)
label_2251e8:
    if (ctx->pc == 0x2251E8u) {
        ctx->pc = 0x2251E8u;
            // 0x2251e8: 0x267201e0  addiu       $s2, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->pc = 0x2251ECu;
        goto label_2251ec;
    }
    ctx->pc = 0x2251E4u;
    {
        const bool branch_taken_0x2251e4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2251E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2251E4u;
            // 0x2251e8: 0x267201e0  addiu       $s2, $s3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2251e4) {
            ctx->pc = 0x225228u;
            goto label_225228;
        }
    }
    ctx->pc = 0x2251ECu;
label_2251ec:
    // 0x2251ec: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2251ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2251f0:
    // 0x2251f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2251f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2251f4:
    // 0x2251f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2251f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2251f8:
    // 0x2251f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2251f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2251fc:
    // 0x2251fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_225200:
    if (ctx->pc == 0x225200u) {
        ctx->pc = 0x225204u;
        goto label_225204;
    }
    ctx->pc = 0x2251FCu;
    {
        const bool branch_taken_0x2251fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2251fc) {
            ctx->pc = 0x225218u;
            goto label_225218;
        }
    }
    ctx->pc = 0x225204u;
label_225204:
    // 0x225204: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x225204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225208:
    // 0x225208: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x225208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_22520c:
    // 0x22520c: 0x320f809  jalr        $t9
label_225210:
    if (ctx->pc == 0x225210u) {
        ctx->pc = 0x225210u;
            // 0x225210: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225214u;
        goto label_225214;
    }
    ctx->pc = 0x22520Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x225214u);
        ctx->pc = 0x225210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22520Cu;
            // 0x225210: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x225214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x225214u; }
            if (ctx->pc != 0x225214u) { return; }
        }
        }
    }
    ctx->pc = 0x225214u;
label_225214:
    // 0x225214: 0x0  nop
    ctx->pc = 0x225214u;
    // NOP
label_225218:
    // 0x225218: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x225218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22521c:
    // 0x22521c: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
label_225220:
    if (ctx->pc == 0x225220u) {
        ctx->pc = 0x225220u;
            // 0x225220: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x225224u;
        goto label_225224;
    }
    ctx->pc = 0x22521Cu;
    {
        const bool branch_taken_0x22521c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x225220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22521Cu;
            // 0x225220: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22521c) {
            ctx->pc = 0x2251F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2251f0;
        }
    }
    ctx->pc = 0x225224u;
label_225224:
    // 0x225224: 0x0  nop
    ctx->pc = 0x225224u;
    // NOP
label_225228:
    // 0x225228: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x225228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22522c:
    // 0x22522c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22522cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_225230:
    // 0x225230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225234:
    // 0x225234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225238:
    // 0x225238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22523c:
    // 0x22523c: 0x3e00008  jr          $ra
label_225240:
    if (ctx->pc == 0x225240u) {
        ctx->pc = 0x225240u;
            // 0x225240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x225244u;
        goto label_225244;
    }
    ctx->pc = 0x22523Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22523Cu;
            // 0x225240: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225244u;
label_225244:
    // 0x225244: 0x0  nop
    ctx->pc = 0x225244u;
    // NOP
label_225248:
    // 0x225248: 0x0  nop
    ctx->pc = 0x225248u;
    // NOP
label_22524c:
    // 0x22524c: 0x0  nop
    ctx->pc = 0x22524cu;
    // NOP
label_225250:
    // 0x225250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_225254:
    // 0x225254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x225254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_225258:
    // 0x225258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22525c:
    // 0x22525c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_225260:
    // 0x225260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x225260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225264:
    // 0x225264: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x225264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_225268:
    // 0x225268: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_22526c:
    if (ctx->pc == 0x22526Cu) {
        ctx->pc = 0x22526Cu;
            // 0x22526c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225270u;
        goto label_225270;
    }
    ctx->pc = 0x225268u;
    {
        const bool branch_taken_0x225268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22526Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225268u;
            // 0x22526c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225268) {
            ctx->pc = 0x225294u;
            goto label_225294;
        }
    }
    ctx->pc = 0x225270u;
label_225270:
    // 0x225270: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x225270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225274:
    // 0x225274: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x225274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_225278:
    // 0x225278: 0x320f809  jalr        $t9
label_22527c:
    if (ctx->pc == 0x22527Cu) {
        ctx->pc = 0x225280u;
        goto label_225280;
    }
    ctx->pc = 0x225278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x225280u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x225280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x225280u; }
            if (ctx->pc != 0x225280u) { return; }
        }
        }
    }
    ctx->pc = 0x225280u;
label_225280:
    // 0x225280: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x225280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_225284:
    // 0x225284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x225284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225288:
    // 0x225288: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x225288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_22528c:
    // 0x22528c: 0x320f809  jalr        $t9
label_225290:
    if (ctx->pc == 0x225290u) {
        ctx->pc = 0x225290u;
            // 0x225290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225294u;
        goto label_225294;
    }
    ctx->pc = 0x22528Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x225294u);
        ctx->pc = 0x225290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22528Cu;
            // 0x225290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x225294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x225294u; }
            if (ctx->pc != 0x225294u) { return; }
        }
        }
    }
    ctx->pc = 0x225294u;
label_225294:
    // 0x225294: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x225294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225298:
    // 0x225298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22529c:
    // 0x22529c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22529cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2252a0:
    // 0x2252a0: 0x3e00008  jr          $ra
label_2252a4:
    if (ctx->pc == 0x2252A4u) {
        ctx->pc = 0x2252A4u;
            // 0x2252a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2252A8u;
        goto label_2252a8;
    }
    ctx->pc = 0x2252A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2252A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2252A0u;
            // 0x2252a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2252A8u;
label_2252a8:
    // 0x2252a8: 0x0  nop
    ctx->pc = 0x2252a8u;
    // NOP
label_2252ac:
    // 0x2252ac: 0x0  nop
    ctx->pc = 0x2252acu;
    // NOP
}
