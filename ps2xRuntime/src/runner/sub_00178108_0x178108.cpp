#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178108
// Address: 0x178108 - 0x178218
void sub_00178108_0x178108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178108_0x178108");
#endif

    switch (ctx->pc) {
        case 0x178138u: goto label_178138;
        case 0x178158u: goto label_178158;
        case 0x178168u: goto label_178168;
        case 0x1781d4u: goto label_1781d4;
        case 0x1781f4u: goto label_1781f4;
        default: break;
    }

    ctx->pc = 0x178108u;

    // 0x178108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17810c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17810cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178110: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x178110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17811c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17811cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178120: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178124: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x178124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178128: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178128u;
    {
        const bool branch_taken_0x178128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17812Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178128u;
            // 0x17812c: 0x3c13006d  lui         $s3, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178128) {
            ctx->pc = 0x178140u;
            goto label_178140;
        }
    }
    ctx->pc = 0x178130u;
    // 0x178130: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x178130u;
    {
        const bool branch_taken_0x178130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178130u;
            // 0x178134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178130) {
            ctx->pc = 0x178184u;
            goto label_178184;
        }
    }
    ctx->pc = 0x178138u;
label_178138:
    // 0x178138: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x178138u;
    {
        const bool branch_taken_0x178138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17813Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178138u;
            // 0x17813c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178138) {
            ctx->pc = 0x178184u;
            goto label_178184;
        }
    }
    ctx->pc = 0x178140u;
label_178140:
    // 0x178140: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x178140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x178144: 0x8e63d190  lw          $v1, -0x2E70($s3)
    ctx->pc = 0x178144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294955408)));
    // 0x178148: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x178148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17814c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17814Cu;
    {
        const bool branch_taken_0x17814c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x178150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17814Cu;
            // 0x178150: 0x8c50d18c  lw          $s0, -0x2E74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17814c) {
            ctx->pc = 0x178180u;
            goto label_178180;
        }
    }
    ctx->pc = 0x178154u;
    // 0x178154: 0x0  nop
    ctx->pc = 0x178154u;
    // NOP
label_178158:
    // 0x178158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17815c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17815cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178160: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x178160u;
    SET_GPR_U32(ctx, 31, 0x178168u);
    ctx->pc = 0x178164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178160u;
            // 0x178164: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178168u; }
        if (ctx->pc != 0x178168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178168u; }
        if (ctx->pc != 0x178168u) { return; }
    }
    ctx->pc = 0x178168u;
label_178168:
    // 0x178168: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x178168u;
    {
        const bool branch_taken_0x178168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17816Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178168u;
            // 0x17816c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178168) {
            ctx->pc = 0x178138u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178138;
        }
    }
    ctx->pc = 0x178170u;
    // 0x178170: 0x8e62d190  lw          $v0, -0x2E70($s3)
    ctx->pc = 0x178170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294955408)));
    // 0x178174: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x178174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x178178: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x178178u;
    {
        const bool branch_taken_0x178178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17817Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178178u;
            // 0x17817c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178178) {
            ctx->pc = 0x178158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178158;
        }
    }
    ctx->pc = 0x178180u;
label_178180:
    // 0x178180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178184:
    // 0x178184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17818c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17818cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178190: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178198: 0x3e00008  jr          $ra
    ctx->pc = 0x178198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17819Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178198u;
            // 0x17819c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1781A0u;
    // 0x1781a0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1781a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1781a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1781a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1781a8: 0x8c43d18c  lw          $v1, -0x2E74($v0)
    ctx->pc = 0x1781a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955404)));
    // 0x1781ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1781acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1781b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1781b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1781b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1781b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1781b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1781bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1781bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1781c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1781c4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1781C4u;
    {
        const bool branch_taken_0x1781c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1781C4u;
            // 0x1781c8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781c4) {
            ctx->pc = 0x1781FCu;
            goto label_1781fc;
        }
    }
    ctx->pc = 0x1781CCu;
    // 0x1781cc: 0xc05e02e  jal         func_1780B8
    ctx->pc = 0x1781CCu;
    SET_GPR_U32(ctx, 31, 0x1781D4u);
    ctx->pc = 0x1780B8u;
    if (runtime->hasFunction(0x1780B8u)) {
        auto targetFn = runtime->lookupFunction(0x1780B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781D4u; }
        if (ctx->pc != 0x1781D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001780B8_0x1780b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781D4u; }
        if (ctx->pc != 0x1781D4u) { return; }
    }
    ctx->pc = 0x1781D4u;
label_1781d4:
    // 0x1781d4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1781d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1781d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1781d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781dc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1781dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1781e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1781e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781e4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1781E4u;
    {
        const bool branch_taken_0x1781e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1781E4u;
            // 0x1781e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781e4) {
            ctx->pc = 0x1781FCu;
            goto label_1781fc;
        }
    }
    ctx->pc = 0x1781ECu;
    // 0x1781ec: 0xc04b156  jal         func_12C558
    ctx->pc = 0x1781ECu;
    SET_GPR_U32(ctx, 31, 0x1781F4u);
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781F4u; }
        if (ctx->pc != 0x1781F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1781F4u; }
        if (ctx->pc != 0x1781F4u) { return; }
    }
    ctx->pc = 0x1781F4u;
label_1781f4:
    // 0x1781f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1781f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781f8: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x1781f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_1781fc:
    // 0x1781fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1781fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178200: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178204: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178208: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x178208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17820c: 0x3e00008  jr          $ra
    ctx->pc = 0x17820Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17820Cu;
            // 0x178210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178214u;
    // 0x178214: 0x0  nop
    ctx->pc = 0x178214u;
    // NOP
}
