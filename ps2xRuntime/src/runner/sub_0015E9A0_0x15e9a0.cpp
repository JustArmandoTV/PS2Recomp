#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E9A0
// Address: 0x15e9a0 - 0x15ea70
void sub_0015E9A0_0x15e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E9A0_0x15e9a0");
#endif

    switch (ctx->pc) {
        case 0x15e9f4u: goto label_15e9f4;
        case 0x15ea38u: goto label_15ea38;
        case 0x15ea50u: goto label_15ea50;
        default: break;
    }

    ctx->pc = 0x15e9a0u;

    // 0x15e9a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15e9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15e9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15e9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e9b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15e9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e9b4: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x15E9B4u;
    {
        const bool branch_taken_0x15e9b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E9B4u;
            // 0x15e9b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9b4) {
            ctx->pc = 0x15EA50u;
            goto label_15ea50;
        }
    }
    ctx->pc = 0x15E9BCu;
    // 0x15e9bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x15e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x15e9c0: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x15e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x15e9c4: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x15e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x15e9c8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x15E9C8u;
    {
        const bool branch_taken_0x15e9c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E9C8u;
            // 0x15e9cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9c8) {
            ctx->pc = 0x15E9F4u;
            goto label_15e9f4;
        }
    }
    ctx->pc = 0x15E9D0u;
    // 0x15e9d0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E9D0u;
    {
        const bool branch_taken_0x15e9d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9d0) {
            ctx->pc = 0x15E9D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E9D0u;
            // 0x15e9d4: 0x2625001c  addiu       $a1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E9F8u;
            goto label_15e9f8;
        }
    }
    ctx->pc = 0x15E9D8u;
    // 0x15e9d8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E9D8u;
    {
        const bool branch_taken_0x15e9d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9d8) {
            ctx->pc = 0x15E9F4u;
            goto label_15e9f4;
        }
    }
    ctx->pc = 0x15E9E0u;
    // 0x15e9e0: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x15e9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x15e9e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E9E4u;
    {
        const bool branch_taken_0x15e9e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9e4) {
            ctx->pc = 0x15E9F4u;
            goto label_15e9f4;
        }
    }
    ctx->pc = 0x15E9ECu;
    // 0x15e9ec: 0xc057fc8  jal         func_15FF20
    ctx->pc = 0x15E9ECu;
    SET_GPR_U32(ctx, 31, 0x15E9F4u);
    ctx->pc = 0x15FF20u;
    if (runtime->hasFunction(0x15FF20u)) {
        auto targetFn = runtime->lookupFunction(0x15FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E9F4u; }
        if (ctx->pc != 0x15E9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FF20_0x15ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E9F4u; }
        if (ctx->pc != 0x15E9F4u) { return; }
    }
    ctx->pc = 0x15E9F4u;
label_15e9f4:
    // 0x15e9f4: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x15e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_15e9f8:
    // 0x15e9f8: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x15E9F8u;
    {
        const bool branch_taken_0x15e9f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9f8) {
            ctx->pc = 0x15E9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E9F8u;
            // 0x15e9fc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15EA3Cu;
            goto label_15ea3c;
        }
    }
    ctx->pc = 0x15EA00u;
    // 0x15ea00: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x15EA00u;
    {
        const bool branch_taken_0x15ea00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea00) {
            ctx->pc = 0x15EA38u;
            goto label_15ea38;
        }
    }
    ctx->pc = 0x15EA08u;
    // 0x15ea08: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x15EA08u;
    {
        const bool branch_taken_0x15ea08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea08) {
            ctx->pc = 0x15EA38u;
            goto label_15ea38;
        }
    }
    ctx->pc = 0x15EA10u;
    // 0x15ea10: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15EA10u;
    {
        const bool branch_taken_0x15ea10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea10) {
            ctx->pc = 0x15EA38u;
            goto label_15ea38;
        }
    }
    ctx->pc = 0x15EA18u;
    // 0x15ea18: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x15ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x15ea1c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x15ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x15ea20: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x15ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x15ea24: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x15ea24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x15ea28: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x15ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x15ea2c: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x15ea2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x15ea30: 0xc05827c  jal         func_1609F0
    ctx->pc = 0x15EA30u;
    SET_GPR_U32(ctx, 31, 0x15EA38u);
    ctx->pc = 0x15EA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA30u;
            // 0x15ea34: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA38u; }
        if (ctx->pc != 0x15EA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA38u; }
        if (ctx->pc != 0x15EA38u) { return; }
    }
    ctx->pc = 0x15EA38u;
label_15ea38:
    // 0x15ea38: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15ea38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_15ea3c:
    // 0x15ea3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15ea3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15ea40: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EA40u;
    {
        const bool branch_taken_0x15ea40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15ea40) {
            ctx->pc = 0x15EA44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA40u;
            // 0x15ea44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15EA54u;
            goto label_15ea54;
        }
    }
    ctx->pc = 0x15EA48u;
    // 0x15ea48: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x15EA48u;
    SET_GPR_U32(ctx, 31, 0x15EA50u);
    ctx->pc = 0x15EA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA48u;
            // 0x15ea4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA50u; }
        if (ctx->pc != 0x15EA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA50u; }
        if (ctx->pc != 0x15EA50u) { return; }
    }
    ctx->pc = 0x15EA50u;
label_15ea50:
    // 0x15ea50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15ea50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ea54:
    // 0x15ea54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ea54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ea58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ea58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ea5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ea5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ea60: 0x3e00008  jr          $ra
    ctx->pc = 0x15EA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA60u;
            // 0x15ea64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EA68u;
    // 0x15ea68: 0x0  nop
    ctx->pc = 0x15ea68u;
    // NOP
    // 0x15ea6c: 0x0  nop
    ctx->pc = 0x15ea6cu;
    // NOP
}
