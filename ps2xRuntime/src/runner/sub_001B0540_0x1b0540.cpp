#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0540
// Address: 0x1b0540 - 0x1b0630
void sub_001B0540_0x1b0540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0540_0x1b0540");
#endif

    switch (ctx->pc) {
        case 0x1b055cu: goto label_1b055c;
        case 0x1b05a0u: goto label_1b05a0;
        case 0x1b05b8u: goto label_1b05b8;
        case 0x1b05d4u: goto label_1b05d4;
        case 0x1b05e8u: goto label_1b05e8;
        default: break;
    }

    ctx->pc = 0x1b0540u;

    // 0x1b0540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b0548: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b0548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b054c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b054cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0550: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b0554: 0xc06c1d4  jal         func_1B0750
    ctx->pc = 0x1B0554u;
    SET_GPR_U32(ctx, 31, 0x1B055Cu);
    ctx->pc = 0x1B0558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0554u;
            // 0x1b0558: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0750u;
    if (runtime->hasFunction(0x1B0750u)) {
        auto targetFn = runtime->lookupFunction(0x1B0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B055Cu; }
        if (ctx->pc != 0x1B055Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0750_0x1b0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B055Cu; }
        if (ctx->pc != 0x1B055Cu) { return; }
    }
    ctx->pc = 0x1B055Cu;
label_1b055c:
    // 0x1b055c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B055Cu;
    {
        const bool branch_taken_0x1b055c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b055c) {
            ctx->pc = 0x1B0560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B055Cu;
            // 0x1b0560: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0574u;
            goto label_1b0574;
        }
    }
    ctx->pc = 0x1B0564u;
    // 0x1b0564: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1b0564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1b0568: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0568u;
    {
        const bool branch_taken_0x1b0568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0568) {
            ctx->pc = 0x1B056Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0568u;
            // 0x1b056c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B0580u;
            goto label_1b0580;
        }
    }
    ctx->pc = 0x1B0570u;
    // 0x1b0570: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b0570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b0574:
    // 0x1b0574: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0574u;
    {
        const bool branch_taken_0x1b0574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0574u;
            // 0x1b0578: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0574) {
            ctx->pc = 0x1B058Cu;
            goto label_1b058c;
        }
    }
    ctx->pc = 0x1B057Cu;
    // 0x1b057c: 0x0  nop
    ctx->pc = 0x1b057cu;
    // NOP
label_1b0580:
    // 0x1b0580: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b0580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0584: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b0584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b0588: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1b0588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1b058c:
    // 0x1b058c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b058cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0598: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B059Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0598u;
            // 0x1b059c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B05A0u;
label_1b05a0:
    // 0x1b05a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b05a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b05a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b05a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b05a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b05a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b05ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b05acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b05b0: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B05B0u;
    SET_GPR_U32(ctx, 31, 0x1B05B8u);
    ctx->pc = 0x1B05B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05B0u;
            // 0x1b05b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05B8u; }
        if (ctx->pc != 0x1B05B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05B8u; }
        if (ctx->pc != 0x1B05B8u) { return; }
    }
    ctx->pc = 0x1B05B8u;
label_1b05b8:
    // 0x1b05b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b05b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b05bc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b05bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b05c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b05c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b05c4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B05C4u;
    {
        const bool branch_taken_0x1b05c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05C4u;
            // 0x1b05c8: 0x34a50187  ori         $a1, $a1, 0x187 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)391);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05c4) {
            ctx->pc = 0x1B05E0u;
            goto label_1b05e0;
        }
    }
    ctx->pc = 0x1B05CCu;
    // 0x1b05cc: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B05CCu;
    SET_GPR_U32(ctx, 31, 0x1B05D4u);
    ctx->pc = 0x1B05D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05CCu;
            // 0x1b05d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05D4u; }
        if (ctx->pc != 0x1B05D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05D4u; }
        if (ctx->pc != 0x1B05D4u) { return; }
    }
    ctx->pc = 0x1B05D4u;
label_1b05d4:
    // 0x1b05d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B05D4u;
    {
        const bool branch_taken_0x1b05d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05D4u;
            // 0x1b05d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05d4) {
            ctx->pc = 0x1B061Cu;
            goto label_1b061c;
        }
    }
    ctx->pc = 0x1B05DCu;
    // 0x1b05dc: 0x0  nop
    ctx->pc = 0x1b05dcu;
    // NOP
label_1b05e0:
    // 0x1b05e0: 0xc06c18c  jal         func_1B0630
    ctx->pc = 0x1B05E0u;
    SET_GPR_U32(ctx, 31, 0x1B05E8u);
    ctx->pc = 0x1B0630u;
    if (runtime->hasFunction(0x1B0630u)) {
        auto targetFn = runtime->lookupFunction(0x1B0630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05E8u; }
        if (ctx->pc != 0x1B05E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0630_0x1b0630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B05E8u; }
        if (ctx->pc != 0x1B05E8u) { return; }
    }
    ctx->pc = 0x1B05E8u;
label_1b05e8:
    // 0x1b05e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b05e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b05ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b05ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b05f0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1b05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1b05f4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B05F4u;
    {
        const bool branch_taken_0x1b05f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B05F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05F4u;
            // 0x1b05f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05f4) {
            ctx->pc = 0x1B061Cu;
            goto label_1b061c;
        }
    }
    ctx->pc = 0x1B05FCu;
    // 0x1b05fc: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x1b05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x1b0600: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1b0600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x1b0604: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b0604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b0608: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0608u;
    {
        const bool branch_taken_0x1b0608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B060Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0608u;
            // 0x1b060c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0608) {
            ctx->pc = 0x1B061Cu;
            goto label_1b061c;
        }
    }
    ctx->pc = 0x1B0610u;
    // 0x1b0610: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x1b0610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b0614: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1b0614u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b0618: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b0618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b061c:
    // 0x1b061c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b061cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b0624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0628: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B062Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0628u;
            // 0x1b062c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B0630u;
}
