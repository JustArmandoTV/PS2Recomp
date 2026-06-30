#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F8280
// Address: 0x2f8280 - 0x2f82d0
void sub_002F8280_0x2f8280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8280_0x2f8280");
#endif

    switch (ctx->pc) {
        case 0x2f8294u: goto label_2f8294;
        case 0x2f82b0u: goto label_2f82b0;
        default: break;
    }

    ctx->pc = 0x2f8280u;

    // 0x2f8280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f8280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f8284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f8284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f8288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f828c: 0xc0be0b4  jal         func_2F82D0
    ctx->pc = 0x2F828Cu;
    SET_GPR_U32(ctx, 31, 0x2F8294u);
    ctx->pc = 0x2F8290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F828Cu;
            // 0x2f8290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F82D0u;
    if (runtime->hasFunction(0x2F82D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F82D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8294u; }
        if (ctx->pc != 0x2F8294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F82D0_0x2f82d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8294u; }
        if (ctx->pc != 0x2F8294u) { return; }
    }
    ctx->pc = 0x2F8294u;
label_2f8294:
    // 0x2f8294: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f8294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8298: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8298u;
    {
        const bool branch_taken_0x2f8298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8298) {
            ctx->pc = 0x2F829Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8298u;
            // 0x2f829c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F82A8u;
            goto label_2f82a8;
        }
    }
    ctx->pc = 0x2F82A0u;
    // 0x2f82a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F82A0u;
    {
        const bool branch_taken_0x2f82a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F82A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82A0u;
            // 0x2f82a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f82a0) {
            ctx->pc = 0x2F82B4u;
            goto label_2f82b4;
        }
    }
    ctx->pc = 0x2F82A8u;
label_2f82a8:
    // 0x2f82a8: 0xc0be10c  jal         func_2F8430
    ctx->pc = 0x2F82A8u;
    SET_GPR_U32(ctx, 31, 0x2F82B0u);
    ctx->pc = 0x2F82ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82A8u;
            // 0x2f82ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8430u;
    if (runtime->hasFunction(0x2F8430u)) {
        auto targetFn = runtime->lookupFunction(0x2F8430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82B0u; }
        if (ctx->pc != 0x2F82B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8430_0x2f8430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F82B0u; }
        if (ctx->pc != 0x2F82B0u) { return; }
    }
    ctx->pc = 0x2F82B0u;
label_2f82b0:
    // 0x2f82b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f82b4:
    // 0x2f82b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f82b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f82b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f82b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f82bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F82BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F82C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F82BCu;
            // 0x2f82c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F82C4u;
    // 0x2f82c4: 0x0  nop
    ctx->pc = 0x2f82c4u;
    // NOP
    // 0x2f82c8: 0x0  nop
    ctx->pc = 0x2f82c8u;
    // NOP
    // 0x2f82cc: 0x0  nop
    ctx->pc = 0x2f82ccu;
    // NOP
}
