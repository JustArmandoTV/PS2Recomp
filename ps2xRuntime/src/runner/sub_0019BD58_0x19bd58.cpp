#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BD58
// Address: 0x19bd58 - 0x19bdb0
void sub_0019BD58_0x19bd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BD58_0x19bd58");
#endif

    switch (ctx->pc) {
        case 0x19bd70u: goto label_19bd70;
        case 0x19bd84u: goto label_19bd84;
        case 0x19bd90u: goto label_19bd90;
        case 0x19bda0u: goto label_19bda0;
        default: break;
    }

    ctx->pc = 0x19bd58u;

    // 0x19bd58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19bd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19bd5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19bd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bd60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19bd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19bd68: 0xc06d170  jal         func_1B45C0
    ctx->pc = 0x19BD68u;
    SET_GPR_U32(ctx, 31, 0x19BD70u);
    ctx->pc = 0x19BD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD68u;
            // 0x19bd6c: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B45C0u;
    if (runtime->hasFunction(0x1B45C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B45C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD70u; }
        if (ctx->pc != 0x19BD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B45C0_0x1b45c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD70u; }
        if (ctx->pc != 0x19BD70u) { return; }
    }
    ctx->pc = 0x19BD70u;
label_19bd70:
    // 0x19bd70: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19bd70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19bd74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BD74u;
    {
        const bool branch_taken_0x19bd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD74u;
            // 0x19bd78: 0x248493a0  addiu       $a0, $a0, -0x6C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd74) {
            ctx->pc = 0x19BD84u;
            goto label_19bd84;
        }
    }
    ctx->pc = 0x19BD7Cu;
    // 0x19bd7c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19BD7Cu;
    SET_GPR_U32(ctx, 31, 0x19BD84u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD84u; }
        if (ctx->pc != 0x19BD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD84u; }
        if (ctx->pc != 0x19BD84u) { return; }
    }
    ctx->pc = 0x19BD84u;
label_19bd84:
    // 0x19bd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd88: 0xc0683f2  jal         func_1A0FC8
    ctx->pc = 0x19BD88u;
    SET_GPR_U32(ctx, 31, 0x19BD90u);
    ctx->pc = 0x19BD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD88u;
            // 0x19bd8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FC8u;
    if (runtime->hasFunction(0x1A0FC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A0FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD90u; }
        if (ctx->pc != 0x19BD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0FC8_0x1a0fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD90u; }
        if (ctx->pc != 0x19BD90u) { return; }
    }
    ctx->pc = 0x19BD90u;
label_19bd90:
    // 0x19bd90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BD90u;
    {
        const bool branch_taken_0x19bd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD90u;
            // 0x19bd94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd90) {
            ctx->pc = 0x19BDA0u;
            goto label_19bda0;
        }
    }
    ctx->pc = 0x19BD98u;
    // 0x19bd98: 0xc05d516  jal         func_175458
    ctx->pc = 0x19BD98u;
    SET_GPR_U32(ctx, 31, 0x19BDA0u);
    ctx->pc = 0x175458u;
    if (runtime->hasFunction(0x175458u)) {
        auto targetFn = runtime->lookupFunction(0x175458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDA0u; }
        if (ctx->pc != 0x19BDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175458_0x175458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDA0u; }
        if (ctx->pc != 0x19BDA0u) { return; }
    }
    ctx->pc = 0x19BDA0u;
label_19bda0:
    // 0x19bda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19bda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bda4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19bda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19bda8: 0x3e00008  jr          $ra
    ctx->pc = 0x19BDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDA8u;
            // 0x19bdac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BDB0u;
}
