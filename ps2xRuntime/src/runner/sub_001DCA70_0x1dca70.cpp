#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCA70
// Address: 0x1dca70 - 0x1dcb20
void sub_001DCA70_0x1dca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCA70_0x1dca70");
#endif

    switch (ctx->pc) {
        case 0x1dcab8u: goto label_1dcab8;
        case 0x1dcb08u: goto label_1dcb08;
        default: break;
    }

    ctx->pc = 0x1dca70u;

    // 0x1dca70: 0x80c6278  j           func_3189E0
    ctx->pc = 0x1DCA70u;
    ctx->pc = 0x1DCA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA70u;
            // 0x1dca74: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003189E0_0x3189e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DCA78u;
    // 0x1dca78: 0x0  nop
    ctx->pc = 0x1dca78u;
    // NOP
    // 0x1dca7c: 0x0  nop
    ctx->pc = 0x1dca7cu;
    // NOP
    // 0x1dca80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dca84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dca88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dca8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dca8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca90: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1DCA90u;
    {
        const bool branch_taken_0x1dca90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dca90) {
            ctx->pc = 0x1DCA94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA90u;
            // 0x1dca94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCABCu;
            goto label_1dcabc;
        }
    }
    ctx->pc = 0x1DCA98u;
    // 0x1dca98: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1dca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1dca9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1dca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1dcaa0: 0x2463d360  addiu       $v1, $v1, -0x2CA0
    ctx->pc = 0x1dcaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955872));
    // 0x1dcaa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1dcaa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1dcaa8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCAA8u;
    {
        const bool branch_taken_0x1dcaa8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DCAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCAA8u;
            // 0x1dcaac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcaa8) {
            ctx->pc = 0x1DCAB8u;
            goto label_1dcab8;
        }
    }
    ctx->pc = 0x1DCAB0u;
    // 0x1dcab0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1DCAB0u;
    SET_GPR_U32(ctx, 31, 0x1DCAB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAB8u; }
        if (ctx->pc != 0x1DCAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAB8u; }
        if (ctx->pc != 0x1DCAB8u) { return; }
    }
    ctx->pc = 0x1DCAB8u;
label_1dcab8:
    // 0x1dcab8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dcab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dcabc:
    // 0x1dcabc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dcabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dcac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCAC4u;
            // 0x1dcac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCACCu;
    // 0x1dcacc: 0x0  nop
    ctx->pc = 0x1dcaccu;
    // NOP
    // 0x1dcad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dcad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dcad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dcad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dcadc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dcadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcae0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1DCAE0u;
    {
        const bool branch_taken_0x1dcae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcae0) {
            ctx->pc = 0x1DCAE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCAE0u;
            // 0x1dcae4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB0Cu;
            goto label_1dcb0c;
        }
    }
    ctx->pc = 0x1DCAE8u;
    // 0x1dcae8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1dcae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1dcaec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1dcaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1dcaf0: 0x2463d350  addiu       $v1, $v1, -0x2CB0
    ctx->pc = 0x1dcaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955856));
    // 0x1dcaf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1dcaf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1dcaf8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCAF8u;
    {
        const bool branch_taken_0x1dcaf8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DCAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCAF8u;
            // 0x1dcafc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcaf8) {
            ctx->pc = 0x1DCB08u;
            goto label_1dcb08;
        }
    }
    ctx->pc = 0x1DCB00u;
    // 0x1dcb00: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1DCB00u;
    SET_GPR_U32(ctx, 31, 0x1DCB08u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB08u; }
        if (ctx->pc != 0x1DCB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB08u; }
        if (ctx->pc != 0x1DCB08u) { return; }
    }
    ctx->pc = 0x1DCB08u;
label_1dcb08:
    // 0x1dcb08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dcb08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb0c:
    // 0x1dcb0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dcb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcb10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dcb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcb14: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB14u;
            // 0x1dcb18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCB1Cu;
    // 0x1dcb1c: 0x0  nop
    ctx->pc = 0x1dcb1cu;
    // NOP
}
