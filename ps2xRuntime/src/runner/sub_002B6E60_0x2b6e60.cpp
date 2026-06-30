#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6E60
// Address: 0x2b6e60 - 0x2b6ee0
void sub_002B6E60_0x2b6e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6E60_0x2b6e60");
#endif

    switch (ctx->pc) {
        case 0x2b6e84u: goto label_2b6e84;
        case 0x2b6e8cu: goto label_2b6e8c;
        case 0x2b6e94u: goto label_2b6e94;
        case 0x2b6eacu: goto label_2b6eac;
        case 0x2b6eb4u: goto label_2b6eb4;
        case 0x2b6ec4u: goto label_2b6ec4;
        default: break;
    }

    ctx->pc = 0x2b6e60u;

    // 0x2b6e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6e64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6e6c: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x2b6e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x2b6e70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e74: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x2b6e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x2b6e78: 0xa0800098  sb          $zero, 0x98($a0)
    ctx->pc = 0x2b6e78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6e7c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B6E7Cu;
    SET_GPR_U32(ctx, 31, 0x2B6E84u);
    ctx->pc = 0x2B6E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E7Cu;
            // 0x2b6e80: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E84u; }
        if (ctx->pc != 0x2B6E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E84u; }
        if (ctx->pc != 0x2B6E84u) { return; }
    }
    ctx->pc = 0x2B6E84u;
label_2b6e84:
    // 0x2b6e84: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B6E84u;
    SET_GPR_U32(ctx, 31, 0x2B6E8Cu);
    ctx->pc = 0x2B6E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E84u;
            // 0x2b6e88: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E8Cu; }
        if (ctx->pc != 0x2B6E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E8Cu; }
        if (ctx->pc != 0x2B6E8Cu) { return; }
    }
    ctx->pc = 0x2B6E8Cu;
label_2b6e8c:
    // 0x2b6e8c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B6E8Cu;
    SET_GPR_U32(ctx, 31, 0x2B6E94u);
    ctx->pc = 0x2B6E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E8Cu;
            // 0x2b6e90: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E94u; }
        if (ctx->pc != 0x2B6E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E94u; }
        if (ctx->pc != 0x2B6E94u) { return; }
    }
    ctx->pc = 0x2B6E94u;
label_2b6e94:
    // 0x2b6e94: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2b6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2b6e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e9c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2b6e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2b6ea0: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2b6ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2b6ea4: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B6EA4u;
    SET_GPR_U32(ctx, 31, 0x2B6EACu);
    ctx->pc = 0x2B6EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6EA4u;
            // 0x2b6ea8: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EACu; }
        if (ctx->pc != 0x2B6EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EACu; }
        if (ctx->pc != 0x2B6EACu) { return; }
    }
    ctx->pc = 0x2B6EACu;
label_2b6eac:
    // 0x2b6eac: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B6EACu;
    SET_GPR_U32(ctx, 31, 0x2B6EB4u);
    ctx->pc = 0x2B6EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6EACu;
            // 0x2b6eb0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EB4u; }
        if (ctx->pc != 0x2B6EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EB4u; }
        if (ctx->pc != 0x2B6EB4u) { return; }
    }
    ctx->pc = 0x2B6EB4u;
label_2b6eb4:
    // 0x2b6eb4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b6eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b6eb8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2b6eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2b6ebc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B6EBCu;
    SET_GPR_U32(ctx, 31, 0x2B6EC4u);
    ctx->pc = 0x2B6EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6EBCu;
            // 0x2b6ec0: 0x24a518c0  addiu       $a1, $a1, 0x18C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EC4u; }
        if (ctx->pc != 0x2B6EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EC4u; }
        if (ctx->pc != 0x2B6EC4u) { return; }
    }
    ctx->pc = 0x2B6EC4u;
label_2b6ec4:
    // 0x2b6ec4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6ED0u;
            // 0x2b6ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6ED8u;
    // 0x2b6ed8: 0x0  nop
    ctx->pc = 0x2b6ed8u;
    // NOP
    // 0x2b6edc: 0x0  nop
    ctx->pc = 0x2b6edcu;
    // NOP
}
