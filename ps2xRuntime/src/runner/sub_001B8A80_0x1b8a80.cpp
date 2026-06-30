#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8A80
// Address: 0x1b8a80 - 0x1b8b20
void sub_001B8A80_0x1b8a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8A80_0x1b8a80");
#endif

    switch (ctx->pc) {
        case 0x1b8aa4u: goto label_1b8aa4;
        case 0x1b8ab4u: goto label_1b8ab4;
        case 0x1b8ad0u: goto label_1b8ad0;
        case 0x1b8ae0u: goto label_1b8ae0;
        default: break;
    }

    ctx->pc = 0x1b8a80u;

    // 0x1b8a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8a84: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b8a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8a8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b8a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b8a94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b8a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8a9c: 0xc06e328  jal         func_1B8CA0
    ctx->pc = 0x1B8A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B8AA4u);
    ctx->pc = 0x1B8AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8A9Cu;
            // 0x1b8aa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CA0u;
    if (runtime->hasFunction(0x1B8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AA4u; }
        if (ctx->pc != 0x1B8AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CA0_0x1b8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AA4u; }
        if (ctx->pc != 0x1B8AA4u) { return; }
    }
    ctx->pc = 0x1B8AA4u;
label_1b8aa4:
    // 0x1b8aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8aa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b8aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8aac: 0xc06e2f8  jal         func_1B8BE0
    ctx->pc = 0x1B8AACu;
    SET_GPR_U32(ctx, 31, 0x1B8AB4u);
    ctx->pc = 0x1B8AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AACu;
            // 0x1b8ab0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8BE0u;
    if (runtime->hasFunction(0x1B8BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AB4u; }
        if (ctx->pc != 0x1B8AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8BE0_0x1b8be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AB4u; }
        if (ctx->pc != 0x1B8AB4u) { return; }
    }
    ctx->pc = 0x1B8AB4u;
label_1b8ab4:
    // 0x1b8ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ab8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b8abc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8ac0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B8AC0u;
    {
        const bool branch_taken_0x1b8ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AC0u;
            // 0x1b8ac4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ac0) {
            ctx->pc = 0x1B8B00u;
            goto label_1b8b00;
        }
    }
    ctx->pc = 0x1B8AC8u;
    // 0x1b8ac8: 0xc06e328  jal         func_1B8CA0
    ctx->pc = 0x1B8AC8u;
    SET_GPR_U32(ctx, 31, 0x1B8AD0u);
    ctx->pc = 0x1B8CA0u;
    if (runtime->hasFunction(0x1B8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AD0u; }
        if (ctx->pc != 0x1B8AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CA0_0x1b8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AD0u; }
        if (ctx->pc != 0x1B8AD0u) { return; }
    }
    ctx->pc = 0x1B8AD0u;
label_1b8ad0:
    // 0x1b8ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ad4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b8ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8ad8: 0xc06e2f8  jal         func_1B8BE0
    ctx->pc = 0x1B8AD8u;
    SET_GPR_U32(ctx, 31, 0x1B8AE0u);
    ctx->pc = 0x1B8ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AD8u;
            // 0x1b8adc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8BE0u;
    if (runtime->hasFunction(0x1B8BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AE0u; }
        if (ctx->pc != 0x1B8AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8BE0_0x1b8be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8AE0u; }
        if (ctx->pc != 0x1B8AE0u) { return; }
    }
    ctx->pc = 0x1B8AE0u;
label_1b8ae0:
    // 0x1b8ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8ae8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b8ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8af0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1b8af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b8af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8af8: 0x806e328  j           func_1B8CA0
    ctx->pc = 0x1B8AF8u;
    ctx->pc = 0x1B8AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8AF8u;
            // 0x1b8afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CA0u;
    if (runtime->hasFunction(0x1B8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8CA0_0x1b8ca0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B8B00u;
label_1b8b00:
    // 0x1b8b00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8b08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8b10: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1b8b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b8b14: 0x806e328  j           func_1B8CA0
    ctx->pc = 0x1B8B14u;
    ctx->pc = 0x1B8B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B14u;
            // 0x1b8b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CA0u;
    if (runtime->hasFunction(0x1B8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8CA0_0x1b8ca0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B8B1Cu;
    // 0x1b8b1c: 0x0  nop
    ctx->pc = 0x1b8b1cu;
    // NOP
}
