#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185610
// Address: 0x185610 - 0x185738
void sub_00185610_0x185610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185610_0x185610");
#endif

    switch (ctx->pc) {
        case 0x185648u: goto label_185648;
        case 0x1856d8u: goto label_1856d8;
        case 0x18570cu: goto label_18570c;
        case 0x185718u: goto label_185718;
        case 0x185720u: goto label_185720;
        default: break;
    }

    ctx->pc = 0x185610u;

    // 0x185610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x185614: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x185614u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x185618: 0x24e20780  addiu       $v0, $a3, 0x780
    ctx->pc = 0x185618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1920));
    // 0x18561c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x185620: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x185620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x185624: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x185624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185628: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x185628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18562c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x18562cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185630: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x185630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185634: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x185634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185638: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x185638u;
    {
        const bool branch_taken_0x185638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18563Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185638u;
            // 0x18563c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185638) {
            ctx->pc = 0x18566Cu;
            goto label_18566c;
        }
    }
    ctx->pc = 0x185640u;
    // 0x185640: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x185640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x185644: 0x0  nop
    ctx->pc = 0x185644u;
    // NOP
label_185648:
    // 0x185648: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x185648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x18564c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18564Cu;
    {
        const bool branch_taken_0x18564c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18564Cu;
            // 0x185650: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18564c) {
            ctx->pc = 0x18566Cu;
            goto label_18566c;
        }
    }
    ctx->pc = 0x185654u;
    // 0x185654: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x185654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x185658: 0x0  nop
    ctx->pc = 0x185658u;
    // NOP
    // 0x18565c: 0x0  nop
    ctx->pc = 0x18565cu;
    // NOP
    // 0x185660: 0x0  nop
    ctx->pc = 0x185660u;
    // NOP
    // 0x185664: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x185664u;
    {
        const bool branch_taken_0x185664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185664) {
            ctx->pc = 0x185668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x185664u;
            // 0x185668: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_185648;
        }
    }
    ctx->pc = 0x18566Cu;
label_18566c:
    // 0x18566c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x18566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x185670: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x185670u;
    {
        const bool branch_taken_0x185670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x185674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185670u;
            // 0x185674: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185670) {
            ctx->pc = 0x1856D8u;
            goto label_1856d8;
        }
    }
    ctx->pc = 0x185678u;
    // 0x185678: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x185678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18567c: 0x24e40780  addiu       $a0, $a3, 0x780
    ctx->pc = 0x18567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1920));
    // 0x185680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185684: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x185684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x185688: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x185688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18568c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x18568cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x185690: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x185690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x185694: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x185694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x185698: 0x24630748  addiu       $v1, $v1, 0x748
    ctx->pc = 0x185698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1864));
    // 0x18569c: 0x24a57ab8  addiu       $a1, $a1, 0x7AB8
    ctx->pc = 0x18569cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31416));
    // 0x1856a0: 0x24c65450  addiu       $a2, $a2, 0x5450
    ctx->pc = 0x1856a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21584));
    // 0x1856a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1856a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1856a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1856a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1856ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1856acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1856b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1856b4: 0xae0a001c  sw          $t2, 0x1C($s0)
    ctx->pc = 0x1856b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 10));
    // 0x1856b8: 0xae090020  sw          $t1, 0x20($s0)
    ctx->pc = 0x1856b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 9));
    // 0x1856bc: 0xae080024  sw          $t0, 0x24($s0)
    ctx->pc = 0x1856bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
    // 0x1856c0: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1856c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x1856c4: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x1856c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x1856c8: 0xae10003c  sw          $s0, 0x3C($s0)
    ctx->pc = 0x1856c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 16));
    // 0x1856cc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1856ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1856d0: 0xc06167a  jal         func_1859E8
    ctx->pc = 0x1856D0u;
    SET_GPR_U32(ctx, 31, 0x1856D8u);
    ctx->pc = 0x1856D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1856D0u;
            // 0x1856d4: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1859E8u;
    if (runtime->hasFunction(0x1859E8u)) {
        auto targetFn = runtime->lookupFunction(0x1859E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856D8u; }
        if (ctx->pc != 0x1856D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001859E8_0x1859e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1856D8u; }
        if (ctx->pc != 0x1856D8u) { return; }
    }
    ctx->pc = 0x1856D8u;
label_1856d8:
    // 0x1856d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1856d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1856dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1856e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1856e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1856e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1856E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1856E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1856E4u;
            // 0x1856e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1856ECu;
    // 0x1856ec: 0x0  nop
    ctx->pc = 0x1856ecu;
    // NOP
    // 0x1856f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1856f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1856f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1856f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1856f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1856f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1856fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x185700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185704: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x185704u;
    SET_GPR_U32(ctx, 31, 0x18570Cu);
    ctx->pc = 0x185708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185704u;
            // 0x185708: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18570Cu; }
        if (ctx->pc != 0x18570Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18570Cu; }
        if (ctx->pc != 0x18570Cu) { return; }
    }
    ctx->pc = 0x18570Cu;
label_18570c:
    // 0x18570c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18570cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185710: 0xc0615ce  jal         func_185738
    ctx->pc = 0x185710u;
    SET_GPR_U32(ctx, 31, 0x185718u);
    ctx->pc = 0x185714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185710u;
            // 0x185714: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185738u;
    if (runtime->hasFunction(0x185738u)) {
        auto targetFn = runtime->lookupFunction(0x185738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185718u; }
        if (ctx->pc != 0x185718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185738_0x185738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185718u; }
        if (ctx->pc != 0x185718u) { return; }
    }
    ctx->pc = 0x185718u;
label_185718:
    // 0x185718: 0xc061282  jal         func_184A08
    ctx->pc = 0x185718u;
    SET_GPR_U32(ctx, 31, 0x185720u);
    ctx->pc = 0x18571Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185718u;
            // 0x18571c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185720u; }
        if (ctx->pc != 0x185720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185720u; }
        if (ctx->pc != 0x185720u) { return; }
    }
    ctx->pc = 0x185720u;
label_185720:
    // 0x185720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x185724: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x185724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18572c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18572cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185730: 0x3e00008  jr          $ra
    ctx->pc = 0x185730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185730u;
            // 0x185734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185738u;
}
