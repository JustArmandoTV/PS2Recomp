#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001809D8
// Address: 0x1809d8 - 0x180a70
void sub_001809D8_0x1809d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001809D8_0x1809d8");
#endif

    switch (ctx->pc) {
        case 0x1809f0u: goto label_1809f0;
        case 0x180a10u: goto label_180a10;
        case 0x180a4cu: goto label_180a4c;
        default: break;
    }

    ctx->pc = 0x1809d8u;

    // 0x1809d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1809d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1809dc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1809DCu;
    {
        const bool branch_taken_0x1809dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1809E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1809DCu;
            // 0x1809e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809dc) {
            ctx->pc = 0x1809F8u;
            goto label_1809f8;
        }
    }
    ctx->pc = 0x1809E4u;
    // 0x1809e4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1809e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1809e8: 0xc060334  jal         func_180CD0
    ctx->pc = 0x1809E8u;
    SET_GPR_U32(ctx, 31, 0x1809F0u);
    ctx->pc = 0x1809ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1809E8u;
            // 0x1809ec: 0x248469f0  addiu       $a0, $a0, 0x69F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809F0u; }
        if (ctx->pc != 0x1809F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809F0u; }
        if (ctx->pc != 0x1809F0u) { return; }
    }
    ctx->pc = 0x1809F0u;
label_1809f0:
    // 0x1809f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1809F0u;
    {
        const bool branch_taken_0x1809f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1809F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1809F0u;
            // 0x1809f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809f0) {
            ctx->pc = 0x180A60u;
            goto label_180a60;
        }
    }
    ctx->pc = 0x1809F8u;
label_1809f8:
    // 0x1809f8: 0x24860038  addiu       $a2, $a0, 0x38
    ctx->pc = 0x1809f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x1809fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1809fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180a00: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x180A00u;
    {
        const bool branch_taken_0x180a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x180A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180A00u;
            // 0x180a04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a00) {
            ctx->pc = 0x180A34u;
            goto label_180a34;
        }
    }
    ctx->pc = 0x180A08u;
    // 0x180a08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x180a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x180a0c: 0x0  nop
    ctx->pc = 0x180a0cu;
    // NOP
label_180a10:
    // 0x180a10: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x180a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x180a14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180A14u;
    {
        const bool branch_taken_0x180a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180A14u;
            // 0x180a18: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a14) {
            ctx->pc = 0x180A34u;
            goto label_180a34;
        }
    }
    ctx->pc = 0x180A1Cu;
    // 0x180a1c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x180a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180a20: 0x0  nop
    ctx->pc = 0x180a20u;
    // NOP
    // 0x180a24: 0x0  nop
    ctx->pc = 0x180a24u;
    // NOP
    // 0x180a28: 0x0  nop
    ctx->pc = 0x180a28u;
    // NOP
    // 0x180a2c: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x180A2Cu;
    {
        const bool branch_taken_0x180a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x180a2c) {
            ctx->pc = 0x180A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180A2Cu;
            // 0x180a30: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180A10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_180a10;
        }
    }
    ctx->pc = 0x180A34u;
label_180a34:
    // 0x180a34: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x180a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x180a38: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180A38u;
    {
        const bool branch_taken_0x180a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180a38) {
            ctx->pc = 0x180A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180A38u;
            // 0x180a3c: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180A58u;
            goto label_180a58;
        }
    }
    ctx->pc = 0x180A40u;
    // 0x180a40: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180a44: 0xc060334  jal         func_180CD0
    ctx->pc = 0x180A44u;
    SET_GPR_U32(ctx, 31, 0x180A4Cu);
    ctx->pc = 0x180A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A44u;
            // 0x180a48: 0x24846a20  addiu       $a0, $a0, 0x6A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A4Cu; }
        if (ctx->pc != 0x180A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A4Cu; }
        if (ctx->pc != 0x180A4Cu) { return; }
    }
    ctx->pc = 0x180A4Cu;
label_180a4c:
    // 0x180a4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x180A4Cu;
    {
        const bool branch_taken_0x180a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180A4Cu;
            // 0x180a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a4c) {
            ctx->pc = 0x180A60u;
            goto label_180a60;
        }
    }
    ctx->pc = 0x180A54u;
    // 0x180a54: 0x0  nop
    ctx->pc = 0x180a54u;
    // NOP
label_180a58:
    // 0x180a58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180a5c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x180a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_180a60:
    // 0x180a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180a64: 0x3e00008  jr          $ra
    ctx->pc = 0x180A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180A64u;
            // 0x180a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180A6Cu;
    // 0x180a6c: 0x0  nop
    ctx->pc = 0x180a6cu;
    // NOP
}
