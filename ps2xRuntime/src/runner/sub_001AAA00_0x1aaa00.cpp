#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AAA00
// Address: 0x1aaa00 - 0x1aaaa0
void sub_001AAA00_0x1aaa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAA00_0x1aaa00");
#endif

    switch (ctx->pc) {
        case 0x1aaa44u: goto label_1aaa44;
        case 0x1aaa60u: goto label_1aaa60;
        case 0x1aaa80u: goto label_1aaa80;
        default: break;
    }

    ctx->pc = 0x1aaa00u;

    // 0x1aaa00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aaa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aaa04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aaa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1aaa08: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1aaa08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1aaa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1aaa10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1aaa10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa14: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1aaa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1aaa18: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x1aaa18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1aaa1c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1aaa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1aaa20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1aaa20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa24: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1aaa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1aaa28: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1aaa28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1aaa2c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1aaa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1aaa30: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x1aaa30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aaa34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aaa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa38: 0x8e060160  lw          $a2, 0x160($s0)
    ctx->pc = 0x1aaa38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1aaa3c: 0xc064224  jal         func_190890
    ctx->pc = 0x1AAA3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAA44u);
    ctx->pc = 0x1AAA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA3Cu;
            // 0x1aaa40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA44u; }
        if (ctx->pc != 0x1AAA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190890_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA44u; }
        if (ctx->pc != 0x1AAA44u) { return; }
    }
    ctx->pc = 0x1AAA44u;
label_1aaa44:
    // 0x1aaa44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aaa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa48: 0x8e060164  lw          $a2, 0x164($s0)
    ctx->pc = 0x1aaa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1aaa4c: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x1aaa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x1aaa50: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1aaa50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa54: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1aaa54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1aaa58: 0xc064224  jal         func_190890
    ctx->pc = 0x1AAA58u;
    SET_GPR_U32(ctx, 31, 0x1AAA60u);
    ctx->pc = 0x1AAA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA58u;
            // 0x1aaa5c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    if (runtime->hasFunction(0x190890u)) {
        auto targetFn = runtime->lookupFunction(0x190890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA60u; }
        if (ctx->pc != 0x1AAA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190890_0x190890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA60u; }
        if (ctx->pc != 0x1AAA60u) { return; }
    }
    ctx->pc = 0x1AAA60u;
label_1aaa60:
    // 0x1aaa60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aaa60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa64: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1aaa64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1aaa68: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAA68u;
    {
        const bool branch_taken_0x1aaa68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA68u;
            // 0x1aaa6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa68) {
            ctx->pc = 0x1AAA78u;
            goto label_1aaa78;
        }
    }
    ctx->pc = 0x1AAA70u;
    // 0x1aaa70: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAA70u;
    {
        const bool branch_taken_0x1aaa70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA70u;
            // 0x1aaa74: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa70) {
            ctx->pc = 0x1AAA84u;
            goto label_1aaa84;
        }
    }
    ctx->pc = 0x1AAA78u;
label_1aaa78:
    // 0x1aaa78: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1AAA78u;
    SET_GPR_U32(ctx, 31, 0x1AAA80u);
    ctx->pc = 0x1AAA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA78u;
            // 0x1aaa7c: 0x34a50d0d  ori         $a1, $a1, 0xD0D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3341);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA80u; }
        if (ctx->pc != 0x1AAA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA80u; }
        if (ctx->pc != 0x1AAA80u) { return; }
    }
    ctx->pc = 0x1AAA80u;
label_1aaa80:
    // 0x1aaa80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aaa80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aaa84:
    // 0x1aaa84: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1aaa84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aaa88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aaa88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aaa8c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1aaa8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aaa90: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1aaa90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aaa94: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1aaa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1aaa98: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA98u;
            // 0x1aaa9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAAA0u;
}
