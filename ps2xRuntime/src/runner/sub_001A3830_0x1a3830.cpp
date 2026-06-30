#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3830
// Address: 0x1a3830 - 0x1a3a68
void sub_001A3830_0x1a3830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3830_0x1a3830");
#endif

    switch (ctx->pc) {
        case 0x1a3890u: goto label_1a3890;
        case 0x1a3894u: goto label_1a3894;
        case 0x1a38c0u: goto label_1a38c0;
        case 0x1a3910u: goto label_1a3910;
        case 0x1a398cu: goto label_1a398c;
        case 0x1a39b0u: goto label_1a39b0;
        case 0x1a39d4u: goto label_1a39d4;
        case 0x1a3a08u: goto label_1a3a08;
        default: break;
    }

    ctx->pc = 0x1a3830u;

    // 0x1a3830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a3830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a3834: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a3834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1a3838: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a3838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a383c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a383cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a3840: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1a3840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3844: 0x26230024  addiu       $v1, $s1, 0x24
    ctx->pc = 0x1a3844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1a3848: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a3848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a384c: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x1a384cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a3850: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a3850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a3854: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1a3854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1a3858: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1a3858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a385c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1a385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1a3860: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a3860u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3864: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1a3864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1a3868: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1a3868u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a386c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a386cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a3870: 0x2869021  addu        $s2, $s4, $a2
    ctx->pc = 0x1a3870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x1a3874: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1a3874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1a3878: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a3878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a387c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A387Cu;
    {
        const bool branch_taken_0x1a387c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A387Cu;
            // 0x1a3880: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a387c) {
            ctx->pc = 0x1A38F0u;
            goto label_1a38f0;
        }
    }
    ctx->pc = 0x1A3884u;
    // 0x1a3884: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1a3884u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3888: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a3888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a388c: 0x0  nop
    ctx->pc = 0x1a388cu;
    // NOP
label_1a3890:
    // 0x1a3890: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1a3890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3894:
    // 0x1a3894: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1a3894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1a3898: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A3898u;
    {
        const bool branch_taken_0x1a3898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3898) {
            ctx->pc = 0x1A38D8u;
            goto label_1a38d8;
        }
    }
    ctx->pc = 0x1A38A0u;
    // 0x1a38a0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a38a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a38a4: 0x443fffb  bgezl       $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A38A4u;
    {
        const bool branch_taken_0x1a38a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a38a4) {
            ctx->pc = 0x1A38A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38A4u;
            // 0x1a38a8: 0x26100012  addiu       $s0, $s0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3894u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3894;
        }
    }
    ctx->pc = 0x1A38ACu;
    // 0x1a38ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a38acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38b0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1a38b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1a38b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a38b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38b8: 0xc05d686  jal         func_175A18
    ctx->pc = 0x1A38B8u;
    SET_GPR_U32(ctx, 31, 0x1A38C0u);
    ctx->pc = 0x1A38BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38B8u;
            // 0x1a38bc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A18u;
    if (runtime->hasFunction(0x175A18u)) {
        auto targetFn = runtime->lookupFunction(0x175A18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38C0u; }
        if (ctx->pc != 0x1A38C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A18_0x175a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38C0u; }
        if (ctx->pc != 0x1A38C0u) { return; }
    }
    ctx->pc = 0x1A38C0u;
label_1a38c0:
    // 0x1a38c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A38C0u;
    {
        const bool branch_taken_0x1a38c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38C0u;
            // 0x1a38c4: 0x2b0102b  sltu        $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38c0) {
            ctx->pc = 0x1A38D8u;
            goto label_1a38d8;
        }
    }
    ctx->pc = 0x1A38C8u;
    // 0x1a38c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A38C8u;
    {
        const bool branch_taken_0x1a38c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a38c8) {
            ctx->pc = 0x1A38D8u;
            goto label_1a38d8;
        }
    }
    ctx->pc = 0x1A38D0u;
    // 0x1a38d0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1a38d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38d4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x1a38d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a38d8:
    // 0x1a38d8: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A38D8u;
    {
        const bool branch_taken_0x1a38d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38D8u;
            // 0x1a38dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38d8) {
            ctx->pc = 0x1A391Cu;
            goto label_1a391c;
        }
    }
    ctx->pc = 0x1A38E0u;
    // 0x1a38e0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1a38e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1a38e4: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x1a38e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1a38e8: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1A38E8u;
    {
        const bool branch_taken_0x1a38e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a38e8) {
            ctx->pc = 0x1A38ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38E8u;
            // 0x1a38ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3890;
        }
    }
    ctx->pc = 0x1A38F0u;
label_1a38f0:
    // 0x1a38f0: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x1A38F0u;
    {
        const bool branch_taken_0x1a38f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38F0u;
            // 0x1a38f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38f0) {
            ctx->pc = 0x1A391Cu;
            goto label_1a391c;
        }
    }
    ctx->pc = 0x1A38F8u;
    // 0x1a38f8: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A38F8u;
    {
        const bool branch_taken_0x1a38f8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a38f8) {
            ctx->pc = 0x1A38FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38F8u;
            // 0x1a38fc: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3918u;
            goto label_1a3918;
        }
    }
    ctx->pc = 0x1A3900u;
    // 0x1a3900: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a3900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a3904: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a3904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3908: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A3908u;
    SET_GPR_U32(ctx, 31, 0x1A3910u);
    ctx->pc = 0x1A390Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3908u;
            // 0x1a390c: 0x34a50c0a  ori         $a1, $a1, 0xC0A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3082);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3910u; }
        if (ctx->pc != 0x1A3910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3910u; }
        if (ctx->pc != 0x1A3910u) { return; }
    }
    ctx->pc = 0x1A3910u;
label_1a3910:
    // 0x1a3910: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3910u;
    {
        const bool branch_taken_0x1a3910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3910u;
            // 0x1a3914: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3910) {
            ctx->pc = 0x1A391Cu;
            goto label_1a391c;
        }
    }
    ctx->pc = 0x1A3918u;
label_1a3918:
    // 0x1a3918: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a3918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a391c:
    // 0x1a391c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a391cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3920: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a3920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3924: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3928: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a3928u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a392c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a392cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3930: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1a3930u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a3934: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1a3934u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3938: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1a3938u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a393c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1a393cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3940: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1a3940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a3944: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3944u;
            // 0x1a3948: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A394Cu;
    // 0x1a394c: 0x0  nop
    ctx->pc = 0x1a394cu;
    // NOP
    // 0x1a3950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a3950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a3954: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1a3954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1a3958: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a3958u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a395c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a3960: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a3960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3964: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a3964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a3968: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a3968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a396c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a396cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a3970: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a3970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3974: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a3974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a3978: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a3978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1a397c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a397cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a3980: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1a3980u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1a3984: 0xc06a108  jal         func_1A8420
    ctx->pc = 0x1A3984u;
    SET_GPR_U32(ctx, 31, 0x1A398Cu);
    ctx->pc = 0x1A3988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3984u;
            // 0x1a3988: 0x8e542074  lw          $s4, 0x2074($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8308)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8420u;
    if (runtime->hasFunction(0x1A8420u)) {
        auto targetFn = runtime->lookupFunction(0x1A8420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A398Cu; }
        if (ctx->pc != 0x1A398Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8420_0x1a8420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A398Cu; }
        if (ctx->pc != 0x1A398Cu) { return; }
    }
    ctx->pc = 0x1A398Cu;
label_1a398c:
    // 0x1a398c: 0x2842006c  slti        $v0, $v0, 0x6C
    ctx->pc = 0x1a398cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x1a3990: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3990u;
    {
        const bool branch_taken_0x1a3990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3990u;
            // 0x1a3994: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3990) {
            ctx->pc = 0x1A39A8u;
            goto label_1a39a8;
        }
    }
    ctx->pc = 0x1A3998u;
    // 0x1a3998: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a3998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a399c: 0x24423770  addiu       $v0, $v0, 0x3770
    ctx->pc = 0x1a399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14192));
    // 0x1a39a0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1A39A0u;
    {
        const bool branch_taken_0x1a39a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A39A0u;
            // 0x1a39a4: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39a0) {
            ctx->pc = 0x1A3A40u;
            goto label_1a3a40;
        }
    }
    ctx->pc = 0x1A39A8u;
label_1a39a8:
    // 0x1a39a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A39A8u;
    {
        const bool branch_taken_0x1a39a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A39A8u;
            // 0x1a39ac: 0x2673ffee  addiu       $s3, $s3, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39a8) {
            ctx->pc = 0x1A39B4u;
            goto label_1a39b4;
        }
    }
    ctx->pc = 0x1A39B0u;
label_1a39b0:
    // 0x1a39b0: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x1a39b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_1a39b4:
    // 0x1a39b4: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1a39b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1a39b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1A39B8u;
    {
        const bool branch_taken_0x1a39b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a39b8) {
            ctx->pc = 0x1A39BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A39B8u;
            // 0x1a39bc: 0xde4209c8  ld          $v0, 0x9C8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A39ECu;
            goto label_1a39ec;
        }
    }
    ctx->pc = 0x1A39C0u;
    // 0x1a39c0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1a39c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1a39c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a39c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a39c8: 0x24a5a930  addiu       $a1, $a1, -0x56D0
    ctx->pc = 0x1a39c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945072));
    // 0x1a39cc: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1A39CCu;
    SET_GPR_U32(ctx, 31, 0x1A39D4u);
    ctx->pc = 0x1A39D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A39CCu;
            // 0x1a39d0: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A39D4u; }
        if (ctx->pc != 0x1A39D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A39D4u; }
        if (ctx->pc != 0x1A39D4u) { return; }
    }
    ctx->pc = 0x1A39D4u;
label_1a39d4:
    // 0x1a39d4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A39D4u;
    {
        const bool branch_taken_0x1a39d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A39D4u;
            // 0x1a39d8: 0x26100012  addiu       $s0, $s0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39d4) {
            ctx->pc = 0x1A39B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a39b0;
        }
    }
    ctx->pc = 0x1A39DCu;
    // 0x1a39dc: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a39e0: 0x24423770  addiu       $v0, $v0, 0x3770
    ctx->pc = 0x1a39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14192));
    // 0x1a39e4: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x1a39e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x1a39e8: 0xde4209c8  ld          $v0, 0x9C8($s2)
    ctx->pc = 0x1a39e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
label_1a39ec:
    // 0x1a39ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a39ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a39f0: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x1a39f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x1a39f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a39f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a39f8: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x1a39f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1a39fc: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1a39fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a3a00: 0xc068e9a  jal         func_1A3A68
    ctx->pc = 0x1A3A00u;
    SET_GPR_U32(ctx, 31, 0x1A3A08u);
    ctx->pc = 0x1A3A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A00u;
            // 0x1a3a04: 0xfe4209c8  sd          $v0, 0x9C8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 2504), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3A68u;
    if (runtime->hasFunction(0x1A3A68u)) {
        auto targetFn = runtime->lookupFunction(0x1A3A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3A08u; }
        if (ctx->pc != 0x1A3A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3A68_0x1a3a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3A08u; }
        if (ctx->pc != 0x1A3A08u) { return; }
    }
    ctx->pc = 0x1A3A08u;
label_1a3a08:
    // 0x1a3a08: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A3A08u;
    {
        const bool branch_taken_0x1a3a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A08u;
            // 0x1a3a0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a08) {
            ctx->pc = 0x1A3A44u;
            goto label_1a3a44;
        }
    }
    ctx->pc = 0x1A3A10u;
    // 0x1a3a10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3a14: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a3a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3a1c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a3a20: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1a3a20u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a3a24: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A3A24u;
    {
        const bool branch_taken_0x1a3a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a24) {
            ctx->pc = 0x1A3A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A24u;
            // 0x1a3a28: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3A2Cu;
            goto label_1a3a2c;
        }
    }
    ctx->pc = 0x1A3A2Cu;
label_1a3a2c:
    // 0x1a3a2c: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x1a3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1a3a30: 0x2012  mflo        $a0
    ctx->pc = 0x1a3a30u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a3a34: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1a3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1a3a38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3a3c: 0xae830038  sw          $v1, 0x38($s4)
    ctx->pc = 0x1a3a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
label_1a3a40:
    // 0x1a3a40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a3a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3a44:
    // 0x1a3a44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a3a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3a48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3a4c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a3a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3a50: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a3a50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3a54: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1a3a54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a3a58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A5Cu;
            // 0x1a3a60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3A64u;
    // 0x1a3a64: 0x0  nop
    ctx->pc = 0x1a3a64u;
    // NOP
}
