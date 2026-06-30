#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4A10
// Address: 0x1f4a10 - 0x1f4b00
void sub_001F4A10_0x1f4a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4A10_0x1f4a10");
#endif

    switch (ctx->pc) {
        case 0x1f4a9cu: goto label_1f4a9c;
        default: break;
    }

    ctx->pc = 0x1f4a10u;

    // 0x1f4a10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f4a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A14u;
            // 0x1f4a18: 0x2442e498  addiu       $v0, $v0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4A1Cu;
    // 0x1f4a1c: 0x0  nop
    ctx->pc = 0x1f4a1cu;
    // NOP
    // 0x1f4a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4a24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f4a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f4a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a30: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F4A30u;
    {
        const bool branch_taken_0x1f4a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4a30) {
            ctx->pc = 0x1F4A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A30u;
            // 0x1f4a34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F4AA0u;
            goto label_1f4aa0;
        }
    }
    ctx->pc = 0x1F4A38u;
    // 0x1f4a38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f4a3c: 0x2442dc10  addiu       $v0, $v0, -0x23F0
    ctx->pc = 0x1f4a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x1f4a40: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F4A40u;
    {
        const bool branch_taken_0x1f4a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A40u;
            // 0x1f4a44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a40) {
            ctx->pc = 0x1F4A74u;
            goto label_1f4a74;
        }
    }
    ctx->pc = 0x1F4A48u;
    // 0x1f4a48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f4a4c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x1f4a50: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F4A50u;
    {
        const bool branch_taken_0x1f4a50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A50u;
            // 0x1f4a54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a50) {
            ctx->pc = 0x1F4A74u;
            goto label_1f4a74;
        }
    }
    ctx->pc = 0x1F4A58u;
    // 0x1f4a58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f4a5c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1f4a60: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4A60u;
    {
        const bool branch_taken_0x1f4a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A60u;
            // 0x1f4a64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a60) {
            ctx->pc = 0x1F4A74u;
            goto label_1f4a74;
        }
    }
    ctx->pc = 0x1F4A68u;
    // 0x1f4a68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f4a6c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1f4a70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f4a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f4a74:
    // 0x1f4a74: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1f4a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1f4a78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f4a78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f4a7c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4A7Cu;
    {
        const bool branch_taken_0x1f4a7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f4a7c) {
            ctx->pc = 0x1F4A9Cu;
            goto label_1f4a9c;
        }
    }
    ctx->pc = 0x1F4A84u;
    // 0x1f4a84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1f4a88: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1f4a88u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f4a8c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f4a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1f4a90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4a94: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1F4A94u;
    SET_GPR_U32(ctx, 31, 0x1F4A9Cu);
    ctx->pc = 0x1F4A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4A94u;
            // 0x1f4a98: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A9Cu; }
        if (ctx->pc != 0x1F4A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4A9Cu; }
        if (ctx->pc != 0x1F4A9Cu) { return; }
    }
    ctx->pc = 0x1F4A9Cu;
label_1f4a9c:
    // 0x1f4a9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f4a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4aa0:
    // 0x1f4aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f4aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4AA8u;
            // 0x1f4aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4AB0u;
    // 0x1f4ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4AB8u;
    // 0x1f4ab8: 0x0  nop
    ctx->pc = 0x1f4ab8u;
    // NOP
    // 0x1f4abc: 0x0  nop
    ctx->pc = 0x1f4abcu;
    // NOP
    // 0x1f4ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4AC8u;
    // 0x1f4ac8: 0x0  nop
    ctx->pc = 0x1f4ac8u;
    // NOP
    // 0x1f4acc: 0x0  nop
    ctx->pc = 0x1f4accu;
    // NOP
    // 0x1f4ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4AD8u;
    // 0x1f4ad8: 0x0  nop
    ctx->pc = 0x1f4ad8u;
    // NOP
    // 0x1f4adc: 0x0  nop
    ctx->pc = 0x1f4adcu;
    // NOP
    // 0x1f4ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4AE8u;
    // 0x1f4ae8: 0x0  nop
    ctx->pc = 0x1f4ae8u;
    // NOP
    // 0x1f4aec: 0x0  nop
    ctx->pc = 0x1f4aecu;
    // NOP
    // 0x1f4af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4AF8u;
    // 0x1f4af8: 0x0  nop
    ctx->pc = 0x1f4af8u;
    // NOP
    // 0x1f4afc: 0x0  nop
    ctx->pc = 0x1f4afcu;
    // NOP
}
