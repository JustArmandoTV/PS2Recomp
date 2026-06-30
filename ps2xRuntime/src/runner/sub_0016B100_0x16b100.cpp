#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B100
// Address: 0x16b100 - 0x16b190
void sub_0016B100_0x16b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B100_0x16b100");
#endif

    switch (ctx->pc) {
        case 0x16b13cu: goto label_16b13c;
        case 0x16b15cu: goto label_16b15c;
        case 0x16b164u: goto label_16b164;
        default: break;
    }

    ctx->pc = 0x16b100u;

    // 0x16b100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16b104: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16b104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16b108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b10c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16b10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16b110: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16b110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b114: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16b118: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16b118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b11c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16b11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16b120: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16b120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b124: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x16b124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x16b128: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x16b128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b12c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x16b12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x16b130: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16b130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16b134: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16B134u;
    SET_GPR_U32(ctx, 31, 0x16B13Cu);
    ctx->pc = 0x16B138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B134u;
            // 0x16b138: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B13Cu; }
        if (ctx->pc != 0x16B13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B13Cu; }
        if (ctx->pc != 0x16B13Cu) { return; }
    }
    ctx->pc = 0x16B13Cu;
label_16b13c:
    // 0x16b13c: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x16b13cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b144: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16b144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b148: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16b148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b14c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16b14cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b150: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x16b150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b154: 0xc05ac64  jal         func_16B190
    ctx->pc = 0x16B154u;
    SET_GPR_U32(ctx, 31, 0x16B15Cu);
    ctx->pc = 0x16B158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B154u;
            // 0x16b158: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B190u;
    if (runtime->hasFunction(0x16B190u)) {
        auto targetFn = runtime->lookupFunction(0x16B190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B15Cu; }
        if (ctx->pc != 0x16B15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B190_0x16b190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B15Cu; }
        if (ctx->pc != 0x16B15Cu) { return; }
    }
    ctx->pc = 0x16B15Cu;
label_16b15c:
    // 0x16b15c: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16B15Cu;
    SET_GPR_U32(ctx, 31, 0x16B164u);
    ctx->pc = 0x16B160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B15Cu;
            // 0x16b160: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B164u; }
        if (ctx->pc != 0x16B164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B164u; }
        if (ctx->pc != 0x16B164u) { return; }
    }
    ctx->pc = 0x16B164u;
label_16b164:
    // 0x16b164: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16b164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b168: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b16c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16b16cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b170: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16b170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b174: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16b174u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16b178: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x16b178u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b17c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x16b17cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16b180: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16b180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b184: 0x3e00008  jr          $ra
    ctx->pc = 0x16B184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B184u;
            // 0x16b188: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B18Cu;
    // 0x16b18c: 0x0  nop
    ctx->pc = 0x16b18cu;
    // NOP
}
