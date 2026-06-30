#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8A80
// Address: 0x2d8a80 - 0x2d8da0
void sub_002D8A80_0x2d8a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8A80_0x2d8a80");
#endif

    switch (ctx->pc) {
        case 0x2d8ab8u: goto label_2d8ab8;
        case 0x2d8b20u: goto label_2d8b20;
        case 0x2d8b94u: goto label_2d8b94;
        case 0x2d8ba4u: goto label_2d8ba4;
        case 0x2d8bb0u: goto label_2d8bb0;
        case 0x2d8bc4u: goto label_2d8bc4;
        case 0x2d8be0u: goto label_2d8be0;
        case 0x2d8c78u: goto label_2d8c78;
        case 0x2d8c88u: goto label_2d8c88;
        case 0x2d8c9cu: goto label_2d8c9c;
        case 0x2d8ce4u: goto label_2d8ce4;
        case 0x2d8cf0u: goto label_2d8cf0;
        case 0x2d8d60u: goto label_2d8d60;
        case 0x2d8d78u: goto label_2d8d78;
        default: break;
    }

    ctx->pc = 0x2d8a80u;

    // 0x2d8a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d8a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d8a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d8a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a90: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D8A90u;
    {
        const bool branch_taken_0x2d8a90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8a90) {
            ctx->pc = 0x2D8A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8A90u;
            // 0x2d8a94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8ABCu;
            goto label_2d8abc;
        }
    }
    ctx->pc = 0x2D8A98u;
    // 0x2d8a98: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2d8a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d8a9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d8a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2d8aa0: 0x24632df0  addiu       $v1, $v1, 0x2DF0
    ctx->pc = 0x2d8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11760));
    // 0x2d8aa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d8aa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d8aa8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8AA8u;
    {
        const bool branch_taken_0x2d8aa8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D8AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8AA8u;
            // 0x2d8aac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8aa8) {
            ctx->pc = 0x2D8AB8u;
            goto label_2d8ab8;
        }
    }
    ctx->pc = 0x2D8AB0u;
    // 0x2d8ab0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D8AB0u;
    SET_GPR_U32(ctx, 31, 0x2D8AB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8AB8u; }
        if (ctx->pc != 0x2D8AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8AB8u; }
        if (ctx->pc != 0x2D8AB8u) { return; }
    }
    ctx->pc = 0x2D8AB8u;
label_2d8ab8:
    // 0x2d8ab8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d8ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8abc:
    // 0x2d8abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8AC4u;
            // 0x2d8ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8ACCu;
    // 0x2d8acc: 0x0  nop
    ctx->pc = 0x2d8accu;
    // NOP
    // 0x2d8ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d8ad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d8ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d8ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ae0: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D8AE0u;
    {
        const bool branch_taken_0x2d8ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ae0) {
            ctx->pc = 0x2D8AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8AE0u;
            // 0x2d8ae4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8B24u;
            goto label_2d8b24;
        }
    }
    ctx->pc = 0x2D8AE8u;
    // 0x2d8ae8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2d8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2d8aec: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2d8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2d8af0: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x2d8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
    // 0x2d8af4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8AF4u;
    {
        const bool branch_taken_0x2d8af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8AF4u;
            // 0x2d8af8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8af4) {
            ctx->pc = 0x2D8B08u;
            goto label_2d8b08;
        }
    }
    ctx->pc = 0x2D8AFCu;
    // 0x2d8afc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d8afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2d8b00: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x2d8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x2d8b04: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2d8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2d8b08:
    // 0x2d8b08: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2d8b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d8b0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d8b0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d8b10: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8B10u;
    {
        const bool branch_taken_0x2d8b10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d8b10) {
            ctx->pc = 0x2D8B20u;
            goto label_2d8b20;
        }
    }
    ctx->pc = 0x2D8B18u;
    // 0x2d8b18: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D8B18u;
    SET_GPR_U32(ctx, 31, 0x2D8B20u);
    ctx->pc = 0x2D8B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B18u;
            // 0x2d8b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8B20u; }
        if (ctx->pc != 0x2D8B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8B20u; }
        if (ctx->pc != 0x2D8B20u) { return; }
    }
    ctx->pc = 0x2D8B20u;
label_2d8b20:
    // 0x2d8b20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d8b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8b24:
    // 0x2d8b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B2Cu;
            // 0x2d8b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8B34u;
    // 0x2d8b34: 0x0  nop
    ctx->pc = 0x2d8b34u;
    // NOP
    // 0x2d8b38: 0x0  nop
    ctx->pc = 0x2d8b38u;
    // NOP
    // 0x2d8b3c: 0x0  nop
    ctx->pc = 0x2d8b3cu;
    // NOP
    // 0x2d8b40: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8B48u;
    // 0x2d8b48: 0x0  nop
    ctx->pc = 0x2d8b48u;
    // NOP
    // 0x2d8b4c: 0x0  nop
    ctx->pc = 0x2d8b4cu;
    // NOP
    // 0x2d8b50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d8b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d8b54: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d8b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d8b58: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d8b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d8b5c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d8b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d8b60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d8b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d8b64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d8b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d8b68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d8b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d8b6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d8b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d8b70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d8b74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8b78: 0x84830066  lh          $v1, 0x66($a0)
    ctx->pc = 0x2d8b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x2d8b7c: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2D8B7Cu;
    {
        const bool branch_taken_0x2d8b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B7Cu;
            // 0x2d8b80: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b7c) {
            ctx->pc = 0x2D8CF4u;
            goto label_2d8cf4;
        }
    }
    ctx->pc = 0x2D8B84u;
    // 0x2d8b84: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x2d8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x2d8b88: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2d8b88u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8b8c: 0xc0b6530  jal         func_2D94C0
    ctx->pc = 0x2D8B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D8B94u);
    ctx->pc = 0x2D8B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B8Cu;
            // 0x2d8b90: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D94C0u;
    if (runtime->hasFunction(0x2D94C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D94C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8B94u; }
        if (ctx->pc != 0x2D8B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D94C0_0x2d94c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8B94u; }
        if (ctx->pc != 0x2D8B94u) { return; }
    }
    ctx->pc = 0x2D8B94u;
label_2d8b94:
    // 0x2d8b94: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2d8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2d8b98: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x2d8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x2d8b9c: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x2D8B9Cu;
    SET_GPR_U32(ctx, 31, 0x2D8BA4u);
    ctx->pc = 0x2D8BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8B9Cu;
            // 0x2d8ba0: 0x8c500130  lw          $s0, 0x130($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8BA4u; }
        if (ctx->pc != 0x2D8BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8BA4u; }
        if (ctx->pc != 0x2D8BA4u) { return; }
    }
    ctx->pc = 0x2D8BA4u;
label_2d8ba4:
    // 0x2d8ba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d8ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ba8: 0xc0576fc  jal         func_15DBF0
    ctx->pc = 0x2D8BA8u;
    SET_GPR_U32(ctx, 31, 0x2D8BB0u);
    ctx->pc = 0x2D8BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8BA8u;
            // 0x2d8bac: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBF0u;
    if (runtime->hasFunction(0x15DBF0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8BB0u; }
        if (ctx->pc != 0x2D8BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBF0_0x15dbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8BB0u; }
        if (ctx->pc != 0x2D8BB0u) { return; }
    }
    ctx->pc = 0x2D8BB0u;
label_2d8bb0:
    // 0x2d8bb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8bb4: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x2d8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x2d8bb8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d8bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d8bbc: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x2D8BBCu;
    SET_GPR_U32(ctx, 31, 0x2D8BC4u);
    ctx->pc = 0x2D8BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8BBCu;
            // 0x2d8bc0: 0x24760010  addiu       $s6, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8BC4u; }
        if (ctx->pc != 0x2D8BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8BC4u; }
        if (ctx->pc != 0x2D8BC4u) { return; }
    }
    ctx->pc = 0x2D8BC4u;
label_2d8bc4:
    // 0x2d8bc4: 0x8eb10054  lw          $s1, 0x54($s5)
    ctx->pc = 0x2d8bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x2d8bc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2d8bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2d8bcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d8bd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d8bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8bd4: 0x26970028  addiu       $s7, $s4, 0x28
    ctx->pc = 0x2d8bd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x2d8bd8: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x2d8bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
    // 0x2d8bdc: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x2d8bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_2d8be0:
    // 0x2d8be0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d8be4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2d8be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2d8be8: 0x8c46e3c0  lw          $a2, -0x1C40($v0)
    ctx->pc = 0x2d8be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x2d8bec: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2d8becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2d8bf0: 0x8c67e3d8  lw          $a3, -0x1C28($v1)
    ctx->pc = 0x2d8bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x2d8bf4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x2d8bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x2d8bf8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d8bfc: 0x8c44e360  lw          $a0, -0x1CA0($v0)
    ctx->pc = 0x2d8bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
    // 0x2d8c00: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x2d8c00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2d8c04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2d8c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2d8c08: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2d8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d8c0c: 0x879021  addu        $s2, $a0, $a3
    ctx->pc = 0x2d8c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d8c10: 0x8c66e3b0  lw          $a2, -0x1C50($v1)
    ctx->pc = 0x2d8c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x2d8c14: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2d8c18: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x2d8c18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x2d8c1c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2d8c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d8c20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2d8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2d8c24: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x2d8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
    // 0x2d8c28: 0x8caae3d8  lw          $t2, -0x1C28($a1)
    ctx->pc = 0x2d8c28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
    // 0x2d8c2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d8c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c30: 0x8c69e378  lw          $t1, -0x1C88($v1)
    ctx->pc = 0x2d8c30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x2d8c34: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x2d8c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
    // 0x2d8c38: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x2d8c38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2d8c3c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2d8c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2d8c40: 0x12a9821  addu        $s3, $t1, $t2
    ctx->pc = 0x2d8c40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2d8c44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2d8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2d8c48: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d8c4c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x2d8c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x2d8c50: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x2d8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x2d8c54: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x2d8c54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x2d8c58: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x2d8c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2d8c5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d8c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d8c60: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x2d8c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
    // 0x2d8c64: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2d8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2d8c68: 0xace2e3d8  sw          $v0, -0x1C28($a3)
    ctx->pc = 0x2d8c68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
    // 0x2d8c6c: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x2d8c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x2d8c70: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x2D8C70u;
    SET_GPR_U32(ctx, 31, 0x2D8C78u);
    ctx->pc = 0x2D8C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8C70u;
            // 0x2d8c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C78u; }
        if (ctx->pc != 0x2D8C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C78u; }
        if (ctx->pc != 0x2D8C78u) { return; }
    }
    ctx->pc = 0x2D8C78u;
label_2d8c78:
    // 0x2d8c78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d8c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c7c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d8c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c80: 0xc04cd60  jal         func_133580
    ctx->pc = 0x2D8C80u;
    SET_GPR_U32(ctx, 31, 0x2D8C88u);
    ctx->pc = 0x2D8C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8C80u;
            // 0x2d8c84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C88u; }
        if (ctx->pc != 0x2D8C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C88u; }
        if (ctx->pc != 0x2D8C88u) { return; }
    }
    ctx->pc = 0x2D8C88u;
label_2d8c88:
    // 0x2d8c88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d8c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c8c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d8c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d8c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c94: 0xc054fd4  jal         func_153F50
    ctx->pc = 0x2D8C94u;
    SET_GPR_U32(ctx, 31, 0x2D8C9Cu);
    ctx->pc = 0x2D8C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8C94u;
            // 0x2d8c98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C9Cu; }
        if (ctx->pc != 0x2D8C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C9Cu; }
        if (ctx->pc != 0x2D8C9Cu) { return; }
    }
    ctx->pc = 0x2D8C9Cu;
label_2d8c9c:
    // 0x2d8c9c: 0x86a20066  lh          $v0, 0x66($s5)
    ctx->pc = 0x2d8c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
    // 0x2d8ca0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d8ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d8ca4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d8ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d8ca8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2D8CA8u;
    {
        const bool branch_taken_0x2d8ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8CA8u;
            // 0x2d8cac: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ca8) {
            ctx->pc = 0x2D8BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d8be0;
        }
    }
    ctx->pc = 0x2D8CB0u;
    // 0x2d8cb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d8cb4: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x2d8cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x2d8cb8: 0x5920000b  blezl       $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D8CB8u;
    {
        const bool branch_taken_0x2d8cb8 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x2d8cb8) {
            ctx->pc = 0x2D8CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8CB8u;
            // 0x2d8cbc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8CE8u;
            goto label_2d8ce8;
        }
    }
    ctx->pc = 0x2D8CC0u;
    // 0x2d8cc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d8cc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d8cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8cc8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x2d8cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x2d8ccc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2d8cccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2d8cd0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2d8cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d8cd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d8cd8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x2d8cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x2d8cdc: 0xc055ea8  jal         func_157AA0
    ctx->pc = 0x2D8CDCu;
    SET_GPR_U32(ctx, 31, 0x2D8CE4u);
    ctx->pc = 0x2D8CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8CDCu;
            // 0x2d8ce0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CE4u; }
        if (ctx->pc != 0x2D8CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CE4u; }
        if (ctx->pc != 0x2D8CE4u) { return; }
    }
    ctx->pc = 0x2D8CE4u;
label_2d8ce4:
    // 0x2d8ce4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d8ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d8ce8:
    // 0x2d8ce8: 0xc0b6518  jal         func_2D9460
    ctx->pc = 0x2D8CE8u;
    SET_GPR_U32(ctx, 31, 0x2D8CF0u);
    ctx->pc = 0x2D8CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8CE8u;
            // 0x2d8cec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9460u;
    if (runtime->hasFunction(0x2D9460u)) {
        auto targetFn = runtime->lookupFunction(0x2D9460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CF0u; }
        if (ctx->pc != 0x2D8CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9460_0x2d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8CF0u; }
        if (ctx->pc != 0x2D8CF0u) { return; }
    }
    ctx->pc = 0x2D8CF0u;
label_2d8cf0:
    // 0x2d8cf0: 0xa6a00066  sh          $zero, 0x66($s5)
    ctx->pc = 0x2d8cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 102), (uint16_t)GPR_U32(ctx, 0));
label_2d8cf4:
    // 0x2d8cf4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d8cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d8cf8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d8cf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d8cfc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d8cfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8d00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d8d00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8d04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d8d04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8d08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d8d08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8d0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d8d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8d18: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D18u;
            // 0x2d8d1c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8D20u;
    // 0x2d8d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d8d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d8d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d8d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d8d2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d8d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8d30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d8d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d34: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D8D34u;
    {
        const bool branch_taken_0x2d8d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D34u;
            // 0x2d8d38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d34) {
            ctx->pc = 0x2D8D78u;
            goto label_2d8d78;
        }
    }
    ctx->pc = 0x2D8D3Cu;
    // 0x2d8d3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2d8d40: 0x24422e20  addiu       $v0, $v0, 0x2E20
    ctx->pc = 0x2d8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11808));
    // 0x2d8d44: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8D44u;
    {
        const bool branch_taken_0x2d8d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D44u;
            // 0x2d8d48: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d44) {
            ctx->pc = 0x2D8D60u;
            goto label_2d8d60;
        }
    }
    ctx->pc = 0x2D8D4Cu;
    // 0x2d8d4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2d8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2d8d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d8d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8d54: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2d8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2d8d58: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x2D8D58u;
    SET_GPR_U32(ctx, 31, 0x2D8D60u);
    ctx->pc = 0x2D8D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D58u;
            // 0x2d8d5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D60u; }
        if (ctx->pc != 0x2D8D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D60u; }
        if (ctx->pc != 0x2D8D60u) { return; }
    }
    ctx->pc = 0x2D8D60u;
label_2d8d60:
    // 0x2d8d60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d8d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2d8d64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d8d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d8d68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8D68u;
    {
        const bool branch_taken_0x2d8d68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d8d68) {
            ctx->pc = 0x2D8D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D68u;
            // 0x2d8d6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8D7Cu;
            goto label_2d8d7c;
        }
    }
    ctx->pc = 0x2D8D70u;
    // 0x2d8d70: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D8D70u;
    SET_GPR_U32(ctx, 31, 0x2D8D78u);
    ctx->pc = 0x2D8D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D70u;
            // 0x2d8d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D78u; }
        if (ctx->pc != 0x2D8D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8D78u; }
        if (ctx->pc != 0x2D8D78u) { return; }
    }
    ctx->pc = 0x2D8D78u;
label_2d8d78:
    // 0x2d8d78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d8d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d8d7c:
    // 0x2d8d7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8d88: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D88u;
            // 0x2d8d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8D90u;
    // 0x2d8d90: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8D90u;
            // 0x2d8d94: 0xa4800066  sh          $zero, 0x66($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8D98u;
    // 0x2d8d98: 0x0  nop
    ctx->pc = 0x2d8d98u;
    // NOP
    // 0x2d8d9c: 0x0  nop
    ctx->pc = 0x2d8d9cu;
    // NOP
}
