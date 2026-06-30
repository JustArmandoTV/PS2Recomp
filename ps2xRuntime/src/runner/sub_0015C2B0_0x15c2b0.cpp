#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C2B0
// Address: 0x15c2b0 - 0x15c330
void sub_0015C2B0_0x15c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C2B0_0x15c2b0");
#endif

    switch (ctx->pc) {
        case 0x15c2f0u: goto label_15c2f0;
        case 0x15c314u: goto label_15c314;
        default: break;
    }

    ctx->pc = 0x15c2b0u;

    // 0x15c2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15c2b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15c2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c2bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15c2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2c0: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C2C0u;
    {
        const bool branch_taken_0x15c2c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c2c0) {
            ctx->pc = 0x15C2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2C0u;
            // 0x15c2c4: 0x3c021001  lui         $v0, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C2D0u;
            goto label_15c2d0;
        }
    }
    ctx->pc = 0x15C2C8u;
    // 0x15c2c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15C2C8u;
    {
        const bool branch_taken_0x15c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2C8u;
            // 0x15c2cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2c8) {
            ctx->pc = 0x15C318u;
            goto label_15c318;
        }
    }
    ctx->pc = 0x15C2D0u;
label_15c2d0:
    // 0x15c2d0: 0x8c42a000  lw          $v0, -0x6000($v0)
    ctx->pc = 0x15c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x15c2d4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x15c2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x15c2d8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C2D8u;
    {
        const bool branch_taken_0x15c2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c2d8) {
            ctx->pc = 0x15C2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2D8u;
            // 0x15c2dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C2E8u;
            goto label_15c2e8;
        }
    }
    ctx->pc = 0x15C2E0u;
    // 0x15c2e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15C2E0u;
    {
        const bool branch_taken_0x15c2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C2E0u;
            // 0x15c2e4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2e0) {
            ctx->pc = 0x15C318u;
            goto label_15c318;
        }
    }
    ctx->pc = 0x15C2E8u;
label_15c2e8:
    // 0x15c2e8: 0xc043178  jal         func_10C5E0
    ctx->pc = 0x15C2E8u;
    SET_GPR_U32(ctx, 31, 0x15C2F0u);
    ctx->pc = 0x10C5E0u;
    if (runtime->hasFunction(0x10C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2F0u; }
        if (ctx->pc != 0x15C2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C5E0_0x10c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C2F0u; }
        if (ctx->pc != 0x15C2F0u) { return; }
    }
    ctx->pc = 0x15C2F0u;
label_15c2f0:
    // 0x15c2f0: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x15c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x15c2f4: 0xac40a020  sw          $zero, -0x5FE0($v0)
    ctx->pc = 0x15c2f4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942752), GPR_U32(ctx, 0)); // MMIO: 0x1000a020
    // 0x15c2f8: 0xac50a030  sw          $s0, -0x5FD0($v0)
    ctx->pc = 0x15c2f8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942768), GPR_U32(ctx, 16)); // MMIO: 0x1000a030
    // 0x15c2fc: 0xf  sync
    ctx->pc = 0x15c2fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x15c300: 0x24030105  addiu       $v1, $zero, 0x105
    ctx->pc = 0x15c300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x15c304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c308: 0xac43a000  sw          $v1, -0x6000($v0)
    ctx->pc = 0x15c308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942720), GPR_U32(ctx, 3));
    // 0x15c30c: 0xc040c00  jal         func_103000
    ctx->pc = 0x15C30Cu;
    SET_GPR_U32(ctx, 31, 0x15C314u);
    ctx->pc = 0x15C310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C30Cu;
            // 0x15c310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103000u;
    if (runtime->hasFunction(0x103000u)) {
        auto targetFn = runtime->lookupFunction(0x103000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C314u; }
        if (ctx->pc != 0x15C314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103000_0x103000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C314u; }
        if (ctx->pc != 0x15C314u) { return; }
    }
    ctx->pc = 0x15C314u;
label_15c314:
    // 0x15c314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c318:
    // 0x15c318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15c318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c31c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c320: 0x3e00008  jr          $ra
    ctx->pc = 0x15C320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C320u;
            // 0x15c324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C328u;
    // 0x15c328: 0x0  nop
    ctx->pc = 0x15c328u;
    // NOP
    // 0x15c32c: 0x0  nop
    ctx->pc = 0x15c32cu;
    // NOP
}
