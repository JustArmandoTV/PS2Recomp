#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037B5C0
// Address: 0x37b5c0 - 0x37b680
void sub_0037B5C0_0x37b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B5C0_0x37b5c0");
#endif

    switch (ctx->pc) {
        case 0x37b600u: goto label_37b600;
        case 0x37b618u: goto label_37b618;
        default: break;
    }

    ctx->pc = 0x37b5c0u;

    // 0x37b5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b5c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37b5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b5d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37b5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b5d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x37B5D4u;
    {
        const bool branch_taken_0x37b5d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B5D4u;
            // 0x37b5d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b5d4) {
            ctx->pc = 0x37B618u;
            goto label_37b618;
        }
    }
    ctx->pc = 0x37B5DCu;
    // 0x37b5dc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x37B5DCu;
    {
        const bool branch_taken_0x37b5dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b5dc) {
            ctx->pc = 0x37B5E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37B5DCu;
            // 0x37b5e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37B604u;
            goto label_37b604;
        }
    }
    ctx->pc = 0x37B5E4u;
    // 0x37b5e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B5E4u;
    {
        const bool branch_taken_0x37b5e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b5e4) {
            ctx->pc = 0x37B600u;
            goto label_37b600;
        }
    }
    ctx->pc = 0x37B5ECu;
    // 0x37b5ec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x37b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37b5f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B5F0u;
    {
        const bool branch_taken_0x37b5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b5f0) {
            ctx->pc = 0x37B600u;
            goto label_37b600;
        }
    }
    ctx->pc = 0x37B5F8u;
    // 0x37b5f8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x37B5F8u;
    SET_GPR_U32(ctx, 31, 0x37B600u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B600u; }
        if (ctx->pc != 0x37B600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B600u; }
        if (ctx->pc != 0x37B600u) { return; }
    }
    ctx->pc = 0x37B600u;
label_37b600:
    // 0x37b600: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x37b600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_37b604:
    // 0x37b604: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37b604u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37b608: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37B608u;
    {
        const bool branch_taken_0x37b608 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x37b608) {
            ctx->pc = 0x37B60Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37B608u;
            // 0x37b60c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37B61Cu;
            goto label_37b61c;
        }
    }
    ctx->pc = 0x37B610u;
    // 0x37b610: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x37B610u;
    SET_GPR_U32(ctx, 31, 0x37B618u);
    ctx->pc = 0x37B614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37B610u;
            // 0x37b614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B618u; }
        if (ctx->pc != 0x37B618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B618u; }
        if (ctx->pc != 0x37B618u) { return; }
    }
    ctx->pc = 0x37B618u;
label_37b618:
    // 0x37b618: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x37b618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37b61c:
    // 0x37b61c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37b61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b628: 0x3e00008  jr          $ra
    ctx->pc = 0x37B628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B628u;
            // 0x37b62c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B630u;
    // 0x37b630: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37b634: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37b634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x37b638: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x37b638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x37b63c: 0x246374d0  addiu       $v1, $v1, 0x74D0
    ctx->pc = 0x37b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29904));
    // 0x37b640: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37b640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x37b644: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37b648: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x37b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x37b64c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x37b650: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37b654: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x37b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x37b658: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37b658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x37b65c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x37b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x37b660: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37b660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b664: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x37b664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x37b668: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x37b668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x37b66c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x37b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x37b670: 0x3e00008  jr          $ra
    ctx->pc = 0x37B670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B670u;
            // 0x37b674: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B678u;
    // 0x37b678: 0x0  nop
    ctx->pc = 0x37b678u;
    // NOP
    // 0x37b67c: 0x0  nop
    ctx->pc = 0x37b67cu;
    // NOP
}
