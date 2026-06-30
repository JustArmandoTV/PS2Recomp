#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2A50
// Address: 0x1e2a50 - 0x1e2b20
void sub_001E2A50_0x1e2a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2A50_0x1e2a50");
#endif

    switch (ctx->pc) {
        case 0x1e2a70u: goto label_1e2a70;
        case 0x1e2b00u: goto label_1e2b00;
        default: break;
    }

    ctx->pc = 0x1e2a50u;

    // 0x1e2a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2a54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e2a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2a5c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e2a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e2a60: 0x8c42e420  lw          $v0, -0x1BE0($v0)
    ctx->pc = 0x1e2a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960160)));
    // 0x1e2a64: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1e2a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e2a68: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x1E2A68u;
    SET_GPR_U32(ctx, 31, 0x1E2A70u);
    ctx->pc = 0x1E2A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A68u;
            // 0x1e2a6c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A70u; }
        if (ctx->pc != 0x1E2A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2A70u; }
        if (ctx->pc != 0x1E2A70u) { return; }
    }
    ctx->pc = 0x1E2A70u;
label_1e2a70:
    // 0x1e2a70: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1E2A70u;
    {
        const bool branch_taken_0x1e2a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2a70) {
            ctx->pc = 0x1E2A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2A70u;
            // 0x1e2a74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2AACu;
            goto label_1e2aac;
        }
    }
    ctx->pc = 0x1E2A78u;
    // 0x1e2a78: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1e2a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1e2a7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1e2a80: 0x2484d450  addiu       $a0, $a0, -0x2BB0
    ctx->pc = 0x1e2a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956112));
    // 0x1e2a84: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1e2a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1e2a88: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1e2a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1e2a8c: 0xac62e3e0  sw          $v0, -0x1C20($v1)
    ctx->pc = 0x1e2a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960096), GPR_U32(ctx, 2));
    // 0x1e2a90: 0x2484d440  addiu       $a0, $a0, -0x2BC0
    ctx->pc = 0x1e2a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956096));
    // 0x1e2a94: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1e2a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1e2a98: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e2a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e2a9c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e2a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e2aa0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e2aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1e2aa4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1e2aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1e2aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2aac:
    // 0x1e2aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AACu;
            // 0x1e2ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2AB4u;
    // 0x1e2ab4: 0x0  nop
    ctx->pc = 0x1e2ab4u;
    // NOP
    // 0x1e2ab8: 0x0  nop
    ctx->pc = 0x1e2ab8u;
    // NOP
    // 0x1e2abc: 0x0  nop
    ctx->pc = 0x1e2abcu;
    // NOP
    // 0x1e2ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ad0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1E2AD0u;
    {
        const bool branch_taken_0x1e2ad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ad0) {
            ctx->pc = 0x1E2AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AD0u;
            // 0x1e2ad4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2B04u;
            goto label_1e2b04;
        }
    }
    ctx->pc = 0x1E2AD8u;
    // 0x1e2ad8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e2adc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1e2adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e2ae0: 0x2442d450  addiu       $v0, $v0, -0x2BB0
    ctx->pc = 0x1e2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956112));
    // 0x1e2ae4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e2ae4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1e2ae8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e2aec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e2af0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2AF0u;
    {
        const bool branch_taken_0x1e2af0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1E2AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AF0u;
            // 0x1e2af4: 0xac40e3e0  sw          $zero, -0x1C20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2af0) {
            ctx->pc = 0x1E2B00u;
            goto label_1e2b00;
        }
    }
    ctx->pc = 0x1E2AF8u;
    // 0x1e2af8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1E2AF8u;
    SET_GPR_U32(ctx, 31, 0x1E2B00u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B00u; }
        if (ctx->pc != 0x1E2B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B00u; }
        if (ctx->pc != 0x1E2B00u) { return; }
    }
    ctx->pc = 0x1E2B00u;
label_1e2b00:
    // 0x1e2b00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b04:
    // 0x1e2b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2B0Cu;
            // 0x1e2b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2B14u;
    // 0x1e2b14: 0x0  nop
    ctx->pc = 0x1e2b14u;
    // NOP
    // 0x1e2b18: 0x0  nop
    ctx->pc = 0x1e2b18u;
    // NOP
    // 0x1e2b1c: 0x0  nop
    ctx->pc = 0x1e2b1cu;
    // NOP
}
