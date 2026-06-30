#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00121238
// Address: 0x121238 - 0x121390
void sub_00121238_0x121238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121238_0x121238");
#endif

    switch (ctx->pc) {
        case 0x121288u: goto label_121288;
        case 0x1212acu: goto label_1212ac;
        case 0x1212e8u: goto label_1212e8;
        case 0x12130cu: goto label_12130c;
        case 0x12131cu: goto label_12131c;
        case 0x121334u: goto label_121334;
        default: break;
    }

    ctx->pc = 0x121238u;

    // 0x121238: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x121238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12123c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x12123cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x121240: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x121240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x121244: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x121244u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    // 0x121248: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x121248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x12124c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12124cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121250: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x121250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x121254: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x121254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x121258: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x121258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x12125c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12125cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x121260: 0x16800016  bnez        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x121260u;
    {
        const bool branch_taken_0x121260 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x121264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121260u;
            // 0x121264: 0x8e511690  lw          $s1, 0x1690($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121260) {
            ctx->pc = 0x1212BCu;
            goto label_1212bc;
        }
    }
    ctx->pc = 0x121268u;
    // 0x121268: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x121268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x12126c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x12126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x121270: 0xac620f00  sw          $v0, 0xF00($v1)
    ctx->pc = 0x121270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3840), GPR_U32(ctx, 2));
    // 0x121274: 0x24700f00  addiu       $s0, $v1, 0xF00
    ctx->pc = 0x121274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3840));
    // 0x121278: 0xae401690  sw          $zero, 0x1690($s2)
    ctx->pc = 0x121278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5776), GPR_U32(ctx, 0));
    // 0x12127c: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x12127cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x121280: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x121280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x121284: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x121284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_121288:
    // 0x121288: 0x26640cc0  addiu       $a0, $s3, 0xCC0
    ctx->pc = 0x121288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3264));
    // 0x12128c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12128cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121294: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x121294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121298: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x121298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12129c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x12129cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212a0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1212a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1212a4: 0xc04410c  jal         func_110430
    ctx->pc = 0x1212A4u;
    SET_GPR_U32(ctx, 31, 0x1212ACu);
    ctx->pc = 0x1212A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1212A4u;
            // 0x1212a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1212ACu; }
        if (ctx->pc != 0x1212ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1212ACu; }
        if (ctx->pc != 0x1212ACu) { return; }
    }
    ctx->pc = 0x1212ACu;
label_1212ac:
    // 0x1212ac: 0x442fff6  bltzl       $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1212ACu;
    {
        const bool branch_taken_0x1212ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1212ac) {
            ctx->pc = 0x1212B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1212ACu;
            // 0x1212b0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_121288;
        }
    }
    ctx->pc = 0x1212B4u;
    // 0x1212b4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1212B4u;
    {
        const bool branch_taken_0x1212b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1212B4u;
            // 0x1212b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212b4) {
            ctx->pc = 0x121338u;
            goto label_121338;
        }
    }
    ctx->pc = 0x1212BCu;
label_1212bc:
    // 0x1212bc: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1212BCu;
    {
        const bool branch_taken_0x1212bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1212C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1212BCu;
            // 0x1212c0: 0x3c15006c  lui         $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212bc) {
            ctx->pc = 0x121314u;
            goto label_121314;
        }
    }
    ctx->pc = 0x1212C4u;
    // 0x1212c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1212c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1212c8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1212c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1212cc: 0xac430f00  sw          $v1, 0xF00($v0)
    ctx->pc = 0x1212ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3840), GPR_U32(ctx, 3));
    // 0x1212d0: 0x24500f00  addiu       $s0, $v0, 0xF00
    ctx->pc = 0x1212d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3840));
    // 0x1212d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1212d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1212d8: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x1212d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x1212dc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1212dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1212e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1212e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1212e4: 0x0  nop
    ctx->pc = 0x1212e4u;
    // NOP
label_1212e8:
    // 0x1212e8: 0x26640cc0  addiu       $a0, $s3, 0xCC0
    ctx->pc = 0x1212e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3264));
    // 0x1212ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1212ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1212f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1212f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1212f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212f8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1212f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1212fc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1212fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121300: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x121300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x121304: 0xc04410c  jal         func_110430
    ctx->pc = 0x121304u;
    SET_GPR_U32(ctx, 31, 0x12130Cu);
    ctx->pc = 0x121308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121304u;
            // 0x121308: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12130Cu; }
        if (ctx->pc != 0x12130Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12130Cu; }
        if (ctx->pc != 0x12130Cu) { return; }
    }
    ctx->pc = 0x12130Cu;
label_12130c:
    // 0x12130c: 0x442fff6  bltzl       $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12130Cu;
    {
        const bool branch_taken_0x12130c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12130c) {
            ctx->pc = 0x121310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12130Cu;
            // 0x121310: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1212E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1212e8;
        }
    }
    ctx->pc = 0x121314u;
label_121314:
    // 0x121314: 0xc045968  jal         func_1165A0
    ctx->pc = 0x121314u;
    SET_GPR_U32(ctx, 31, 0x12131Cu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12131Cu; }
        if (ctx->pc != 0x12131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12131Cu; }
        if (ctx->pc != 0x12131Cu) { return; }
    }
    ctx->pc = 0x12131Cu;
label_12131c:
    // 0x12131c: 0xaebc0f80  sw          $gp, 0xF80($s5)
    ctx->pc = 0x12131cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3968), GPR_U32(ctx, 28));
    // 0x121320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121324: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x121324u;
    {
        const bool branch_taken_0x121324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x121328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121324u;
            // 0x121328: 0xae541690  sw          $s4, 0x1690($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5776), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121324) {
            ctx->pc = 0x121334u;
            goto label_121334;
        }
    }
    ctx->pc = 0x12132Cu;
    // 0x12132c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x12132Cu;
    SET_GPR_U32(ctx, 31, 0x121334u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121334u; }
        if (ctx->pc != 0x121334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121334u; }
        if (ctx->pc != 0x121334u) { return; }
    }
    ctx->pc = 0x121334u;
label_121334:
    // 0x121334: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x121334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121338:
    // 0x121338: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x121338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12133c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x12133cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x121340: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x121340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x121344: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x121344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x121348: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x121348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12134c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x12134cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121350: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x121350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121354: 0x3e00008  jr          $ra
    ctx->pc = 0x121354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121354u;
            // 0x121358: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12135Cu;
    // 0x12135c: 0x0  nop
    ctx->pc = 0x12135cu;
    // NOP
    // 0x121360: 0x3402c348  ori         $v0, $zero, 0xC348
    ctx->pc = 0x121360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49992);
    // 0x121364: 0x2483bedd  addiu       $v1, $a0, -0x4123
    ctx->pc = 0x121364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950621));
    // 0x121368: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x121368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12136c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12136Cu;
    {
        const bool branch_taken_0x12136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12136Cu;
            // 0x121370: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12136c) {
            ctx->pc = 0x121384u;
            goto label_121384;
        }
    }
    ctx->pc = 0x121374u;
    // 0x121374: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121374u;
    {
        const bool branch_taken_0x121374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x121378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121374u;
            // 0x121378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121374) {
            ctx->pc = 0x121388u;
            goto label_121388;
        }
    }
    ctx->pc = 0x12137Cu;
    // 0x12137c: 0x3e00008  jr          $ra
    ctx->pc = 0x12137Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12137Cu;
            // 0x121380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x121384u;
label_121384:
    // 0x121384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121388:
    // 0x121388: 0x3e00008  jr          $ra
    ctx->pc = 0x121388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12138Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121388u;
            // 0x12138c: 0xac641694  sw          $a0, 0x1694($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5780), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x121390u;
}
