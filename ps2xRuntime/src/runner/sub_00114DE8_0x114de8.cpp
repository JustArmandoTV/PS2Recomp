#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00114DE8
// Address: 0x114de8 - 0x114e78
void sub_00114DE8_0x114de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114DE8_0x114de8");
#endif

    switch (ctx->pc) {
        case 0x114e24u: goto label_114e24;
        case 0x114e3cu: goto label_114e3c;
        case 0x114e50u: goto label_114e50;
        default: break;
    }

    ctx->pc = 0x114de8u;

    // 0x114de8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114dec: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x114decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x114df0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x114df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x114df4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x114df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x114df8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x114df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x114dfc: 0x2453e38c  addiu       $s3, $v0, -0x1C74
    ctx->pc = 0x114dfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960012));
    // 0x114e00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x114e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x114e04: 0x2471d028  addiu       $s1, $v1, -0x2FD8
    ctx->pc = 0x114e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955048));
    // 0x114e08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x114e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x114e0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x114e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x114e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e1c: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x114E1Cu;
    SET_GPR_U32(ctx, 31, 0x114E24u);
    ctx->pc = 0x114E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114E1Cu;
            // 0x114e20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E24u; }
        if (ctx->pc != 0x114E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E24u; }
        if (ctx->pc != 0x114E24u) { return; }
    }
    ctx->pc = 0x114E24u;
label_114e24:
    // 0x114e24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x114E24u;
    {
        const bool branch_taken_0x114e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114E24u;
            // 0x114e28: 0x3c10005d  lui         $s0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e24) {
            ctx->pc = 0x114E54u;
            goto label_114e54;
        }
    }
    ctx->pc = 0x114E2Cu;
    // 0x114e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e30: 0x8e05e464  lw          $a1, -0x1B9C($s0)
    ctx->pc = 0x114e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960228)));
    // 0x114e34: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x114E34u;
    SET_GPR_U32(ctx, 31, 0x114E3Cu);
    ctx->pc = 0x114E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114E34u;
            // 0x114e38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E3Cu; }
        if (ctx->pc != 0x114E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E3Cu; }
        if (ctx->pc != 0x114E3Cu) { return; }
    }
    ctx->pc = 0x114E3Cu;
label_114e3c:
    // 0x114e3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114E3Cu;
    {
        const bool branch_taken_0x114e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114E3Cu;
            // 0x114e40: 0x8e05e464  lw          $a1, -0x1B9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e3c) {
            ctx->pc = 0x114E54u;
            goto label_114e54;
        }
    }
    ctx->pc = 0x114E44u;
    // 0x114e44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x114e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e48: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x114E48u;
    SET_GPR_U32(ctx, 31, 0x114E50u);
    ctx->pc = 0x114E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114E48u;
            // 0x114e4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E50u; }
        if (ctx->pc != 0x114E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114E50u; }
        if (ctx->pc != 0x114E50u) { return; }
    }
    ctx->pc = 0x114E50u;
label_114e50:
    // 0x114e50: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x114e50u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_114e54:
    // 0x114e54: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x114e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114e58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x114e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114e5c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x114e5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114e60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x114e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114e64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x114e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x114E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114E6Cu;
            // 0x114e70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114E74u;
    // 0x114e74: 0x0  nop
    ctx->pc = 0x114e74u;
    // NOP
}
