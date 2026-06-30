#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B8DC0
// Address: 0x4b8dc0 - 0x4b8e80
void sub_004B8DC0_0x4b8dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8DC0_0x4b8dc0");
#endif

    switch (ctx->pc) {
        case 0x4b8e00u: goto label_4b8e00;
        case 0x4b8e14u: goto label_4b8e14;
        default: break;
    }

    ctx->pc = 0x4b8dc0u;

    // 0x4b8dc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b8dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b8dc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b8dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4b8dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b8dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b8dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b8dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b8dd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b8dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8dd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b8dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b8dd8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4b8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b8ddc: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x4b8ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4b8de0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b8de4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4b8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b8de8: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x4b8de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x4b8dec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4b8decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4b8df0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b8df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4b8df4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4B8DF4u;
    {
        const bool branch_taken_0x4b8df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8DF4u;
            // 0x4b8df8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8df4) {
            ctx->pc = 0x4B8E58u;
            goto label_4b8e58;
        }
    }
    ctx->pc = 0x4B8DFCu;
    // 0x4b8dfc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x4b8dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_4b8e00:
    // 0x4b8e00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b8e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8e04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b8e04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b8e08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4b8e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b8e0c: 0xc123944  jal         func_48E510
    ctx->pc = 0x4B8E0Cu;
    SET_GPR_U32(ctx, 31, 0x4B8E14u);
    ctx->pc = 0x4B8E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8E0Cu;
            // 0x4b8e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8E14u; }
        if (ctx->pc != 0x4B8E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B8E14u; }
        if (ctx->pc != 0x4B8E14u) { return; }
    }
    ctx->pc = 0x4B8E14u;
label_4b8e14:
    // 0x4b8e14: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x4b8e14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4b8e18: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4b8e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x4b8e1c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8E1Cu;
    {
        const bool branch_taken_0x4b8e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b8e1c) {
            ctx->pc = 0x4B8E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8E1Cu;
            // 0x4b8e20: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B8E2Cu;
            goto label_4b8e2c;
        }
    }
    ctx->pc = 0x4B8E24u;
    // 0x4b8e24: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4B8E24u;
    {
        const bool branch_taken_0x4b8e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8E24u;
            // 0x4b8e28: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8e24) {
            ctx->pc = 0x4B8E60u;
            goto label_4b8e60;
        }
    }
    ctx->pc = 0x4B8E2Cu;
label_4b8e2c:
    // 0x4b8e2c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4b8e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4b8e30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b8e30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b8e34: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x4b8e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4b8e38: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4b8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4b8e3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b8e40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b8e44: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x4b8e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x4b8e48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4b8e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4b8e4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b8e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4b8e50: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4B8E50u;
    {
        const bool branch_taken_0x4b8e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b8e50) {
            ctx->pc = 0x4B8E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8E50u;
            // 0x4b8e54: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B8E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b8e00;
        }
    }
    ctx->pc = 0x4B8E58u;
label_4b8e58:
    // 0x4b8e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b8e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8e5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b8e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b8e60:
    // 0x4b8e60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b8e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b8e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b8e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b8e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B8E6Cu;
            // 0x4b8e70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B8E74u;
    // 0x4b8e74: 0x0  nop
    ctx->pc = 0x4b8e74u;
    // NOP
    // 0x4b8e78: 0x0  nop
    ctx->pc = 0x4b8e78u;
    // NOP
    // 0x4b8e7c: 0x0  nop
    ctx->pc = 0x4b8e7cu;
    // NOP
}
