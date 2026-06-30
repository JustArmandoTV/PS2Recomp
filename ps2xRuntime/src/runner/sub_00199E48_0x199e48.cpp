#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199E48
// Address: 0x199e48 - 0x199eb0
void sub_00199E48_0x199e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199E48_0x199e48");
#endif

    switch (ctx->pc) {
        case 0x199e9cu: goto label_199e9c;
        default: break;
    }

    ctx->pc = 0x199e48u;

    // 0x199e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199e4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199e54: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x199e54u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x199e58: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x199E58u;
    {
        const bool branch_taken_0x199e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x199E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E58u;
            // 0x199e5c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e58) {
            ctx->pc = 0x199EA0u;
            goto label_199ea0;
        }
    }
    ctx->pc = 0x199E60u;
    // 0x199e60: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x199E60u;
    {
        const bool branch_taken_0x199e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x199e60) {
            ctx->pc = 0x199E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199E60u;
            // 0x199e64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199E78u;
            goto label_199e78;
        }
    }
    ctx->pc = 0x199E68u;
    // 0x199e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199e6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x199E6Cu;
    {
        const bool branch_taken_0x199e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E6Cu;
            // 0x199e70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e6c) {
            ctx->pc = 0x199E88u;
            goto label_199e88;
        }
    }
    ctx->pc = 0x199E74u;
    // 0x199e74: 0x0  nop
    ctx->pc = 0x199e74u;
    // NOP
label_199e78:
    // 0x199e78: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x199E78u;
    {
        const bool branch_taken_0x199e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x199E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E78u;
            // 0x199e7c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e78) {
            ctx->pc = 0x199EA0u;
            goto label_199ea0;
        }
    }
    ctx->pc = 0x199E80u;
    // 0x199e80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x199e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199e84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x199e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_199e88:
    // 0x199e88: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199E88u;
    {
        const bool branch_taken_0x199e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x199E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199E88u;
            // 0x199e8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e88) {
            ctx->pc = 0x199EA4u;
            goto label_199ea4;
        }
    }
    ctx->pc = 0x199E90u;
    // 0x199e90: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x199e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x199e94: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x199E94u;
    SET_GPR_U32(ctx, 31, 0x199E9Cu);
    ctx->pc = 0x199E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199E94u;
            // 0x199e98: 0x24848c78  addiu       $a0, $a0, -0x7388 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E9Cu; }
        if (ctx->pc != 0x199E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199E9Cu; }
        if (ctx->pc != 0x199E9Cu) { return; }
    }
    ctx->pc = 0x199E9Cu;
label_199e9c:
    // 0x199e9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199ea0:
    // 0x199ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199ea4:
    // 0x199ea4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x199ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x199EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199EA8u;
            // 0x199eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199EB0u;
}
