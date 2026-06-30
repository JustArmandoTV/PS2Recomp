#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B55E8
// Address: 0x1b55e8 - 0x1b56f8
void sub_001B55E8_0x1b55e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B55E8_0x1b55e8");
#endif

    switch (ctx->pc) {
        case 0x1b5614u: goto label_1b5614;
        case 0x1b568cu: goto label_1b568c;
        case 0x1b56a4u: goto label_1b56a4;
        case 0x1b56b8u: goto label_1b56b8;
        case 0x1b56d8u: goto label_1b56d8;
        default: break;
    }

    ctx->pc = 0x1b55e8u;

label_1b55e8:
    // 0x1b55e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b55e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b55ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b55ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b55f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b55f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b55f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b55f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b55f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b55fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b5600: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b5600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5604: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B5604u;
    {
        const bool branch_taken_0x1b5604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5604u;
            // 0x1b5608: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5604) {
            ctx->pc = 0x1B5640u;
            goto label_1b5640;
        }
    }
    ctx->pc = 0x1B560Cu;
    // 0x1b560c: 0xc06d498  jal         func_1B5260
    ctx->pc = 0x1B560Cu;
    SET_GPR_U32(ctx, 31, 0x1B5614u);
    ctx->pc = 0x1B5260u;
    if (runtime->hasFunction(0x1B5260u)) {
        auto targetFn = runtime->lookupFunction(0x1B5260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5614u; }
        if (ctx->pc != 0x1B5614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5260_0x1b5260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5614u; }
        if (ctx->pc != 0x1B5614u) { return; }
    }
    ctx->pc = 0x1B5614u;
label_1b5614:
    // 0x1b5614: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b5614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5618: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B5618u;
    {
        const bool branch_taken_0x1b5618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5618) {
            ctx->pc = 0x1B561Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5618u;
            // 0x1b561c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5644u;
            goto label_1b5644;
        }
    }
    ctx->pc = 0x1B5620u;
    // 0x1b5620: 0x8e020dc0  lw          $v0, 0xDC0($s0)
    ctx->pc = 0x1b5620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3520)));
    // 0x1b5624: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5624u;
    {
        const bool branch_taken_0x1b5624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5624u;
            // 0x1b5628: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5624) {
            ctx->pc = 0x1B563Cu;
            goto label_1b563c;
        }
    }
    ctx->pc = 0x1B562Cu;
    // 0x1b562c: 0x8e020da8  lw          $v0, 0xDA8($s0)
    ctx->pc = 0x1b562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3496)));
    // 0x1b5630: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5630u;
    {
        const bool branch_taken_0x1b5630 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B5634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5630u;
            // 0x1b5634: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5630) {
            ctx->pc = 0x1B5644u;
            goto label_1b5644;
        }
    }
    ctx->pc = 0x1B5638u;
    // 0x1b5638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b563c:
    // 0x1b563c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b563cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1b5640:
    // 0x1b5640: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b5640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5644:
    // 0x1b5644: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b5644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5648: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b564c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B564Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B564Cu;
            // 0x1b5650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5654u;
    // 0x1b5654: 0x0  nop
    ctx->pc = 0x1b5654u;
    // NOP
    // 0x1b5658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b5658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b565c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b565cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5660: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b5660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b5664: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1b5664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5668: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b5668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b566c: 0x24503720  addiu       $s0, $v0, 0x3720
    ctx->pc = 0x1b566cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14112));
    // 0x1b5670: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b5670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b5674: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b5674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5678: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b5678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1b567c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b567cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5680: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b5680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b5684: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B5684u;
    SET_GPR_U32(ctx, 31, 0x1B568Cu);
    ctx->pc = 0x1B5688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5684u;
            // 0x1b5688: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B568Cu; }
        if (ctx->pc != 0x1B568Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B568Cu; }
        if (ctx->pc != 0x1B568Cu) { return; }
    }
    ctx->pc = 0x1B568Cu;
label_1b568c:
    // 0x1b568c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b568cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5690: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5690u;
    {
        const bool branch_taken_0x1b5690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5690u;
            // 0x1b5694: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5690) {
            ctx->pc = 0x1B56B0u;
            goto label_1b56b0;
        }
    }
    ctx->pc = 0x1B5698u;
    // 0x1b5698: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b5698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b569c: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B569Cu;
    SET_GPR_U32(ctx, 31, 0x1B56A4u);
    ctx->pc = 0x1B56A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B569Cu;
            // 0x1b56a0: 0x34a50156  ori         $a1, $a1, 0x156 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)342);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B56A4u; }
        if (ctx->pc != 0x1B56A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B56A4u; }
        if (ctx->pc != 0x1B56A4u) { return; }
    }
    ctx->pc = 0x1B56A4u;
label_1b56a4:
    // 0x1b56a4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B56A4u;
    {
        const bool branch_taken_0x1b56a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B56A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56A4u;
            // 0x1b56a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b56a4) {
            ctx->pc = 0x1B56E0u;
            goto label_1b56e0;
        }
    }
    ctx->pc = 0x1B56ACu;
    // 0x1b56ac: 0x0  nop
    ctx->pc = 0x1b56acu;
    // NOP
label_1b56b0:
    // 0x1b56b0: 0xc06d57a  jal         func_1B55E8
    ctx->pc = 0x1B56B0u;
    SET_GPR_U32(ctx, 31, 0x1B56B8u);
    ctx->pc = 0x1B56B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56B0u;
            // 0x1b56b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B55E8u;
    goto label_1b55e8;
    ctx->pc = 0x1B56B8u;
label_1b56b8:
    // 0x1b56b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b56b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b56c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b56c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b56c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B56C8u;
    {
        const bool branch_taken_0x1b56c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B56CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56C8u;
            // 0x1b56cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b56c8) {
            ctx->pc = 0x1B56DCu;
            goto label_1b56dc;
        }
    }
    ctx->pc = 0x1B56D0u;
    // 0x1b56d0: 0xc06d5be  jal         func_1B56F8
    ctx->pc = 0x1B56D0u;
    SET_GPR_U32(ctx, 31, 0x1B56D8u);
    ctx->pc = 0x1B56D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56D0u;
            // 0x1b56d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B56F8u;
    if (runtime->hasFunction(0x1B56F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B56F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B56D8u; }
        if (ctx->pc != 0x1B56D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B56F8_0x1b56f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B56D8u; }
        if (ctx->pc != 0x1B56D8u) { return; }
    }
    ctx->pc = 0x1B56D8u;
label_1b56d8:
    // 0x1b56d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b56d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b56dc:
    // 0x1b56dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b56dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b56e0:
    // 0x1b56e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b56e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b56e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b56e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b56e8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b56e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b56ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b56ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b56f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B56F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B56F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56F0u;
            // 0x1b56f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B56F8u;
}
