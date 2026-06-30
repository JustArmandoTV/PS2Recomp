#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CAFF0
// Address: 0x2caff0 - 0x2cb080
void sub_002CAFF0_0x2caff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAFF0_0x2caff0");
#endif

    switch (ctx->pc) {
        case 0x2cb020u: goto label_2cb020;
        case 0x2cb034u: goto label_2cb034;
        case 0x2cb044u: goto label_2cb044;
        case 0x2cb05cu: goto label_2cb05c;
        default: break;
    }

    ctx->pc = 0x2caff0u;

    // 0x2caff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2caff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2caff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2caff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2caff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2caff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2caffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2caffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb004: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CB004u;
    {
        const bool branch_taken_0x2cb004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB004u;
            // 0x2cb008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb004) {
            ctx->pc = 0x2CB05Cu;
            goto label_2cb05c;
        }
    }
    ctx->pc = 0x2CB00Cu;
    // 0x2cb00c: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x2cb00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2cb010: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB010u;
    {
        const bool branch_taken_0x2cb010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb010) {
            ctx->pc = 0x2CB014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB010u;
            // 0x2cb014: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB024u;
            goto label_2cb024;
        }
    }
    ctx->pc = 0x2CB018u;
    // 0x2cb018: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2CB018u;
    SET_GPR_U32(ctx, 31, 0x2CB020u);
    ctx->pc = 0x2CB01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB018u;
            // 0x2cb01c: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB020u; }
        if (ctx->pc != 0x2CB020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB020u; }
        if (ctx->pc != 0x2CB020u) { return; }
    }
    ctx->pc = 0x2CB020u;
label_2cb020:
    // 0x2cb020: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2cb020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2cb024:
    // 0x2cb024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB024u;
    {
        const bool branch_taken_0x2cb024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb024) {
            ctx->pc = 0x2CB034u;
            goto label_2cb034;
        }
    }
    ctx->pc = 0x2CB02Cu;
    // 0x2cb02c: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2CB02Cu;
    SET_GPR_U32(ctx, 31, 0x2CB034u);
    ctx->pc = 0x2CB030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB02Cu;
            // 0x2cb030: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB034u; }
        if (ctx->pc != 0x2CB034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB034u; }
        if (ctx->pc != 0x2CB034u) { return; }
    }
    ctx->pc = 0x2CB034u;
label_2cb034:
    // 0x2cb034: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB034u;
    {
        const bool branch_taken_0x2cb034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb034) {
            ctx->pc = 0x2CB038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB034u;
            // 0x2cb038: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB048u;
            goto label_2cb048;
        }
    }
    ctx->pc = 0x2CB03Cu;
    // 0x2cb03c: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2CB03Cu;
    SET_GPR_U32(ctx, 31, 0x2CB044u);
    ctx->pc = 0x2CB040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB03Cu;
            // 0x2cb040: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB044u; }
        if (ctx->pc != 0x2CB044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB044u; }
        if (ctx->pc != 0x2CB044u) { return; }
    }
    ctx->pc = 0x2CB044u;
label_2cb044:
    // 0x2cb044: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cb044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cb048:
    // 0x2cb048: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb048u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cb04c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB04Cu;
    {
        const bool branch_taken_0x2cb04c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cb04c) {
            ctx->pc = 0x2CB050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB04Cu;
            // 0x2cb050: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB060u;
            goto label_2cb060;
        }
    }
    ctx->pc = 0x2CB054u;
    // 0x2cb054: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CB054u;
    SET_GPR_U32(ctx, 31, 0x2CB05Cu);
    ctx->pc = 0x2CB058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB054u;
            // 0x2cb058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB05Cu; }
        if (ctx->pc != 0x2CB05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB05Cu; }
        if (ctx->pc != 0x2CB05Cu) { return; }
    }
    ctx->pc = 0x2CB05Cu;
label_2cb05c:
    // 0x2cb05c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cb05cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cb060:
    // 0x2cb060: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb06c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB06Cu;
            // 0x2cb070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB074u;
    // 0x2cb074: 0x0  nop
    ctx->pc = 0x2cb074u;
    // NOP
    // 0x2cb078: 0x0  nop
    ctx->pc = 0x2cb078u;
    // NOP
    // 0x2cb07c: 0x0  nop
    ctx->pc = 0x2cb07cu;
    // NOP
}
