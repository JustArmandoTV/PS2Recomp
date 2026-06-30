#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A6C0
// Address: 0x19a6c0 - 0x19a730
void sub_0019A6C0_0x19a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A6C0_0x19a6c0");
#endif

    switch (ctx->pc) {
        case 0x19a6d4u: goto label_19a6d4;
        default: break;
    }

    ctx->pc = 0x19a6c0u;

    // 0x19a6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a6c4: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x19a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x19a6c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a6cc: 0xc06ed3a  jal         func_1BB4E8
    ctx->pc = 0x19A6CCu;
    SET_GPR_U32(ctx, 31, 0x19A6D4u);
    ctx->pc = 0x19A6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A6CCu;
            // 0x19a6d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB4E8u;
    if (runtime->hasFunction(0x1BB4E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BB4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A6D4u; }
        if (ctx->pc != 0x19A6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB4E8_0x1bb4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A6D4u; }
        if (ctx->pc != 0x19A6D4u) { return; }
    }
    ctx->pc = 0x19A6D4u;
label_19a6d4:
    // 0x19a6d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a6d8: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19A6D8u;
    {
        const bool branch_taken_0x19a6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19A6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A6D8u;
            // 0x19a6dc: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6d8) {
            ctx->pc = 0x19A724u;
            goto label_19a724;
        }
    }
    ctx->pc = 0x19A6E0u;
    // 0x19a6e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a6e4: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x19a6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x19a6e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19A6E8u;
    {
        const bool branch_taken_0x19a6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A6E8u;
            // 0x19a6ec: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6e8) {
            ctx->pc = 0x19A724u;
            goto label_19a724;
        }
    }
    ctx->pc = 0x19A6F0u;
    // 0x19a6f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a6f4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x19a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x19a6f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19a6fc: 0x8c638e00  lw          $v1, -0x7200($v1)
    ctx->pc = 0x19a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938112)));
    // 0x19a700: 0x600008  jr          $v1
    ctx->pc = 0x19A700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A708u: goto label_19a708;
            case 0x19A710u: goto label_19a710;
            case 0x19A718u: goto label_19a718;
            case 0x19A720u: goto label_19a720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A708u;
label_19a708:
    // 0x19a708: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19A708u;
    {
        const bool branch_taken_0x19a708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A708u;
            // 0x19a70c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a708) {
            ctx->pc = 0x19A724u;
            goto label_19a724;
        }
    }
    ctx->pc = 0x19A710u;
label_19a710:
    // 0x19a710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A710u;
    {
        const bool branch_taken_0x19a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A710u;
            // 0x19a714: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a710) {
            ctx->pc = 0x19A724u;
            goto label_19a724;
        }
    }
    ctx->pc = 0x19A718u;
label_19a718:
    // 0x19a718: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19A718u;
    {
        const bool branch_taken_0x19a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A718u;
            // 0x19a71c: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a718) {
            ctx->pc = 0x19A724u;
            goto label_19a724;
        }
    }
    ctx->pc = 0x19A720u;
label_19a720:
    // 0x19a720: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x19a720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_19a724:
    // 0x19a724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a728: 0x3e00008  jr          $ra
    ctx->pc = 0x19A728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A728u;
            // 0x19a72c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A730u;
}
