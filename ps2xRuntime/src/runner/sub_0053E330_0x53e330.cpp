#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053E330
// Address: 0x53e330 - 0x53e3c0
void sub_0053E330_0x53e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053E330_0x53e330");
#endif

    switch (ctx->pc) {
        case 0x53e34cu: goto label_53e34c;
        case 0x53e35cu: goto label_53e35c;
        default: break;
    }

    ctx->pc = 0x53e330u;

    // 0x53e330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x53e334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53e334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x53e338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x53e33c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53e340: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x53e340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e344: 0xc14f938  jal         func_53E4E0
    ctx->pc = 0x53E344u;
    SET_GPR_U32(ctx, 31, 0x53E34Cu);
    ctx->pc = 0x53E348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E344u;
            // 0x53e348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E4E0u;
    if (runtime->hasFunction(0x53E4E0u)) {
        auto targetFn = runtime->lookupFunction(0x53E4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E34Cu; }
        if (ctx->pc != 0x53E34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053E4E0_0x53e4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E34Cu; }
        if (ctx->pc != 0x53E34Cu) { return; }
    }
    ctx->pc = 0x53E34Cu;
label_53e34c:
    // 0x53e34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53e34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e350: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x53e350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53e354: 0xc14f938  jal         func_53E4E0
    ctx->pc = 0x53E354u;
    SET_GPR_U32(ctx, 31, 0x53E35Cu);
    ctx->pc = 0x53E358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E354u;
            // 0x53e358: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E4E0u;
    if (runtime->hasFunction(0x53E4E0u)) {
        auto targetFn = runtime->lookupFunction(0x53E4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E35Cu; }
        if (ctx->pc != 0x53E35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053E4E0_0x53e4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E35Cu; }
        if (ctx->pc != 0x53E35Cu) { return; }
    }
    ctx->pc = 0x53E35Cu;
label_53e35c:
    // 0x53e35c: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x53E35Cu;
    {
        const bool branch_taken_0x53e35c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53e35c) {
            ctx->pc = 0x53E360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E35Cu;
            // 0x53e360: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E3A8u;
            goto label_53e3a8;
        }
    }
    ctx->pc = 0x53E364u;
    // 0x53e364: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x53E364u;
    {
        const bool branch_taken_0x53e364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53e364) {
            ctx->pc = 0x53E368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E364u;
            // 0x53e368: 0xae110054  sw          $s1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E378u;
            goto label_53e378;
        }
    }
    ctx->pc = 0x53E36Cu;
    // 0x53e36c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x53E36Cu;
    {
        const bool branch_taken_0x53e36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53e36c) {
            ctx->pc = 0x53E3A4u;
            goto label_53e3a4;
        }
    }
    ctx->pc = 0x53E374u;
    // 0x53e374: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x53e374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
label_53e378:
    // 0x53e378: 0x8e230d6c  lw          $v1, 0xD6C($s1)
    ctx->pc = 0x53e378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
    // 0x53e37c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x53e37cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x53e380: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x53e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x53e384: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x53e384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x53e388: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x53E388u;
    {
        const bool branch_taken_0x53e388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53e388) {
            ctx->pc = 0x53E38Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E388u;
            // 0x53e38c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E3A0u;
            goto label_53e3a0;
        }
    }
    ctx->pc = 0x53E390u;
    // 0x53e390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53e390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x53e394: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x53E394u;
    {
        const bool branch_taken_0x53e394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E394u;
            // 0x53e398: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e394) {
            ctx->pc = 0x53E3A4u;
            goto label_53e3a4;
        }
    }
    ctx->pc = 0x53E39Cu;
    // 0x53e39c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x53e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_53e3a0:
    // 0x53e3a0: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x53e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_53e3a4:
    // 0x53e3a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53e3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53e3a8:
    // 0x53e3a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53e3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53e3ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53e3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53e3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x53E3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53E3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E3B0u;
            // 0x53e3b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53E3B8u;
    // 0x53e3b8: 0x0  nop
    ctx->pc = 0x53e3b8u;
    // NOP
    // 0x53e3bc: 0x0  nop
    ctx->pc = 0x53e3bcu;
    // NOP
}
