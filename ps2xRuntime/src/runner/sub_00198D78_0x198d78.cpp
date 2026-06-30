#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198D78
// Address: 0x198d78 - 0x198e00
void sub_00198D78_0x198d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198D78_0x198d78");
#endif

    switch (ctx->pc) {
        case 0x198da4u: goto label_198da4;
        case 0x198dc4u: goto label_198dc4;
        case 0x198de4u: goto label_198de4;
        default: break;
    }

    ctx->pc = 0x198d78u;

    // 0x198d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198d7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198d80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x198d84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x198d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x198d8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x198d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198d90: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x198D90u;
    {
        const bool branch_taken_0x198d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x198D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198D90u;
            // 0x198d94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d90) {
            ctx->pc = 0x198DA8u;
            goto label_198da8;
        }
    }
    ctx->pc = 0x198D98u;
    // 0x198d98: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198d9c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x198D9Cu;
    SET_GPR_U32(ctx, 31, 0x198DA4u);
    ctx->pc = 0x198DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198D9Cu;
            // 0x198da0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DA4u; }
        if (ctx->pc != 0x198DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DA4u; }
        if (ctx->pc != 0x198DA4u) { return; }
    }
    ctx->pc = 0x198DA4u;
label_198da4:
    // 0x198da4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198da8:
    // 0x198da8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x198da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x198dac: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x198dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x198db0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x198DB0u;
    {
        const bool branch_taken_0x198db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198db0) {
            ctx->pc = 0x198DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198DB0u;
            // 0x198db4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198DCCu;
            goto label_198dcc;
        }
    }
    ctx->pc = 0x198DB8u;
    // 0x198db8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198dbc: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x198DBCu;
    SET_GPR_U32(ctx, 31, 0x198DC4u);
    ctx->pc = 0x198DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198DBCu;
            // 0x198dc0: 0x248489e8  addiu       $a0, $a0, -0x7618 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DC4u; }
        if (ctx->pc != 0x198DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DC4u; }
        if (ctx->pc != 0x198DC4u) { return; }
    }
    ctx->pc = 0x198DC4u;
label_198dc4:
    // 0x198dc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198dc8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x198dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_198dcc:
    // 0x198dcc: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x198dccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x198dd0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198DD0u;
    {
        const bool branch_taken_0x198dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198DD0u;
            // 0x198dd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198dd0) {
            ctx->pc = 0x198DECu;
            goto label_198dec;
        }
    }
    ctx->pc = 0x198DD8u;
    // 0x198dd8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198ddc: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x198DDCu;
    SET_GPR_U32(ctx, 31, 0x198DE4u);
    ctx->pc = 0x198DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198DDCu;
            // 0x198de0: 0x24848a10  addiu       $a0, $a0, -0x75F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DE4u; }
        if (ctx->pc != 0x198DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198DE4u; }
        if (ctx->pc != 0x198DE4u) { return; }
    }
    ctx->pc = 0x198DE4u;
label_198de4:
    // 0x198de4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198dec:
    // 0x198dec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x198decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198df0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x198df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198df4: 0x3e00008  jr          $ra
    ctx->pc = 0x198DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198DF4u;
            // 0x198df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198DFCu;
    // 0x198dfc: 0x0  nop
    ctx->pc = 0x198dfcu;
    // NOP
}
