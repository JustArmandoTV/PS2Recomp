#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015FC70
// Address: 0x15fc70 - 0x15fd90
void sub_0015FC70_0x15fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FC70_0x15fc70");
#endif

    switch (ctx->pc) {
        case 0x15fcc8u: goto label_15fcc8;
        case 0x15fce0u: goto label_15fce0;
        default: break;
    }

    ctx->pc = 0x15fc70u;

    // 0x15fc70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15fc74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15fc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15fc78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15fc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15fc7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15fc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15fc80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15fc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc84: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x15FC84u;
    {
        const bool branch_taken_0x15fc84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC84u;
            // 0x15fc88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc84) {
            ctx->pc = 0x15FCE0u;
            goto label_15fce0;
        }
    }
    ctx->pc = 0x15FC8Cu;
    // 0x15fc8c: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x15FC8Cu;
    {
        const bool branch_taken_0x15fc8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fc8c) {
            ctx->pc = 0x15FC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC8Cu;
            // 0x15fc90: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FCCCu;
            goto label_15fccc;
        }
    }
    ctx->pc = 0x15FC94u;
    // 0x15fc94: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x15FC94u;
    {
        const bool branch_taken_0x15fc94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fc94) {
            ctx->pc = 0x15FCC8u;
            goto label_15fcc8;
        }
    }
    ctx->pc = 0x15FC9Cu;
    // 0x15fc9c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x15FC9Cu;
    {
        const bool branch_taken_0x15fc9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fc9c) {
            ctx->pc = 0x15FCC8u;
            goto label_15fcc8;
        }
    }
    ctx->pc = 0x15FCA4u;
    // 0x15fca4: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x15fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x15fca8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x15fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x15fcac: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x15fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x15fcb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15fcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fcb4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15fcb8: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x15fcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x15fcbc: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x15fcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x15fcc0: 0xc05827c  jal         func_1609F0
    ctx->pc = 0x15FCC0u;
    SET_GPR_U32(ctx, 31, 0x15FCC8u);
    ctx->pc = 0x15FCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FCC0u;
            // 0x15fcc4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FCC8u; }
        if (ctx->pc != 0x15FCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FCC8u; }
        if (ctx->pc != 0x15FCC8u) { return; }
    }
    ctx->pc = 0x15FCC8u;
label_15fcc8:
    // 0x15fcc8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15fcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_15fccc:
    // 0x15fccc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15fcccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15fcd0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FCD0u;
    {
        const bool branch_taken_0x15fcd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15fcd0) {
            ctx->pc = 0x15FCD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FCD0u;
            // 0x15fcd4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FCE4u;
            goto label_15fce4;
        }
    }
    ctx->pc = 0x15FCD8u;
    // 0x15fcd8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x15FCD8u;
    SET_GPR_U32(ctx, 31, 0x15FCE0u);
    ctx->pc = 0x15FCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FCD8u;
            // 0x15fcdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FCE0u; }
        if (ctx->pc != 0x15FCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FCE0u; }
        if (ctx->pc != 0x15FCE0u) { return; }
    }
    ctx->pc = 0x15FCE0u;
label_15fce0:
    // 0x15fce0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15fce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15fce4:
    // 0x15fce4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15fce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15fce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fcec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x15FCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FCF0u;
            // 0x15fcf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FCF8u;
    // 0x15fcf8: 0x0  nop
    ctx->pc = 0x15fcf8u;
    // NOP
    // 0x15fcfc: 0x0  nop
    ctx->pc = 0x15fcfcu;
    // NOP
    // 0x15fd00: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FD08u;
    // 0x15fd08: 0x0  nop
    ctx->pc = 0x15fd08u;
    // NOP
    // 0x15fd0c: 0x0  nop
    ctx->pc = 0x15fd0cu;
    // NOP
    // 0x15fd10: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD10u;
            // 0x15fd14: 0xa0850010  sb          $a1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FD18u;
    // 0x15fd18: 0x0  nop
    ctx->pc = 0x15fd18u;
    // NOP
    // 0x15fd1c: 0x0  nop
    ctx->pc = 0x15fd1cu;
    // NOP
    // 0x15fd20: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x15fd20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15fd24: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15fd24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15fd28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15fd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD2Cu;
            // 0x15fd30: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FD34u;
    // 0x15fd34: 0x0  nop
    ctx->pc = 0x15fd34u;
    // NOP
    // 0x15fd38: 0x0  nop
    ctx->pc = 0x15fd38u;
    // NOP
    // 0x15fd3c: 0x0  nop
    ctx->pc = 0x15fd3cu;
    // NOP
    // 0x15fd40: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x15fd40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15fd44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15fd48: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD48u;
            // 0x15fd4c: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FD50u;
    // 0x15fd50: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15fd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15fd54: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x15fd54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15fd58: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x15fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15fd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD5Cu;
            // 0x15fd60: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FD64u;
    // 0x15fd64: 0x0  nop
    ctx->pc = 0x15fd64u;
    // NOP
    // 0x15fd68: 0x0  nop
    ctx->pc = 0x15fd68u;
    // NOP
    // 0x15fd6c: 0x0  nop
    ctx->pc = 0x15fd6cu;
    // NOP
    // 0x15fd70: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x15fd70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15fd74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15fd78: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD78u;
            // 0x15fd7c: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FD80u;
    // 0x15fd80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15fd84: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FD84u;
            // 0x15fd88: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FD8Cu;
    // 0x15fd8c: 0x0  nop
    ctx->pc = 0x15fd8cu;
    // NOP
}
