#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD5F0
// Address: 0x2ad5f0 - 0x2ad6a0
void sub_002AD5F0_0x2ad5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD5F0_0x2ad5f0");
#endif

    switch (ctx->pc) {
        case 0x2ad624u: goto label_2ad624;
        case 0x2ad630u: goto label_2ad630;
        case 0x2ad638u: goto label_2ad638;
        case 0x2ad658u: goto label_2ad658;
        case 0x2ad684u: goto label_2ad684;
        default: break;
    }

    ctx->pc = 0x2ad5f0u;

    // 0x2ad5f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ad5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ad5f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ad5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ad5f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ad5fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ad600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad604: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2AD604u;
    {
        const bool branch_taken_0x2ad604 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD604u;
            // 0x2ad608: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad604) {
            ctx->pc = 0x2AD684u;
            goto label_2ad684;
        }
    }
    ctx->pc = 0x2AD60Cu;
    // 0x2ad60c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ad60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ad610: 0x2442fda0  addiu       $v0, $v0, -0x260
    ctx->pc = 0x2ad610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966688));
    // 0x2ad614: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ad614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2ad618: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2ad618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ad61c: 0xc0430f4  jal         func_10C3D0
    ctx->pc = 0x2AD61Cu;
    SET_GPR_U32(ctx, 31, 0x2AD624u);
    ctx->pc = 0x2AD620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD61Cu;
            // 0x2ad620: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3D0u;
    if (runtime->hasFunction(0x10C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD624u; }
        if (ctx->pc != 0x2AD624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3D0_0x10c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD624u; }
        if (ctx->pc != 0x2AD624u) { return; }
    }
    ctx->pc = 0x2AD624u;
label_2ad624:
    // 0x2ad624: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2ad624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2ad628: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AD628u;
    {
        const bool branch_taken_0x2ad628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad628) {
            ctx->pc = 0x2AD650u;
            goto label_2ad650;
        }
    }
    ctx->pc = 0x2AD630u;
label_2ad630:
    // 0x2ad630: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x2AD630u;
    SET_GPR_U32(ctx, 31, 0x2AD638u);
    ctx->pc = 0x2AD634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD630u;
            // 0x2ad634: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD638u; }
        if (ctx->pc != 0x2AD638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD638u; }
        if (ctx->pc != 0x2AD638u) { return; }
    }
    ctx->pc = 0x2AD638u;
label_2ad638:
    // 0x2ad638: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2ad638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2ad63c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ad63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ad640: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2ad640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2ad644: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AD644u;
    {
        const bool branch_taken_0x2ad644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad644) {
            ctx->pc = 0x2AD630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad630;
        }
    }
    ctx->pc = 0x2AD64Cu;
    // 0x2ad64c: 0x0  nop
    ctx->pc = 0x2ad64cu;
    // NOP
label_2ad650:
    // 0x2ad650: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x2AD650u;
    SET_GPR_U32(ctx, 31, 0x2AD658u);
    ctx->pc = 0x2AD654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD650u;
            // 0x2ad654: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD658u; }
        if (ctx->pc != 0x2AD658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD658u; }
        if (ctx->pc != 0x2AD658u) { return; }
    }
    ctx->pc = 0x2AD658u;
label_2ad658:
    // 0x2ad658: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD658u;
    {
        const bool branch_taken_0x2ad658 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad658) {
            ctx->pc = 0x2AD65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD658u;
            // 0x2ad65c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD670u;
            goto label_2ad670;
        }
    }
    ctx->pc = 0x2AD660u;
    // 0x2ad660: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ad660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ad664: 0x2442caa0  addiu       $v0, $v0, -0x3560
    ctx->pc = 0x2ad664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953632));
    // 0x2ad668: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ad668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2ad66c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ad66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ad670:
    // 0x2ad670: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ad670u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ad674: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD674u;
    {
        const bool branch_taken_0x2ad674 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ad674) {
            ctx->pc = 0x2AD678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD674u;
            // 0x2ad678: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD688u;
            goto label_2ad688;
        }
    }
    ctx->pc = 0x2AD67Cu;
    // 0x2ad67c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2AD67Cu;
    SET_GPR_U32(ctx, 31, 0x2AD684u);
    ctx->pc = 0x2AD680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD67Cu;
            // 0x2ad680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD684u; }
        if (ctx->pc != 0x2AD684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD684u; }
        if (ctx->pc != 0x2AD684u) { return; }
    }
    ctx->pc = 0x2AD684u;
label_2ad684:
    // 0x2ad684: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ad684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ad688:
    // 0x2ad688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ad688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad68c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad690: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad694: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD694u;
            // 0x2ad698: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD69Cu;
    // 0x2ad69c: 0x0  nop
    ctx->pc = 0x2ad69cu;
    // NOP
}
