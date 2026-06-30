#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AC1B0
// Address: 0x2ac1b0 - 0x2ac260
void sub_002AC1B0_0x2ac1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC1B0_0x2ac1b0");
#endif

    switch (ctx->pc) {
        case 0x2ac1d0u: goto label_2ac1d0;
        case 0x2ac1e0u: goto label_2ac1e0;
        case 0x2ac1f0u: goto label_2ac1f0;
        case 0x2ac214u: goto label_2ac214;
        case 0x2ac228u: goto label_2ac228;
        case 0x2ac230u: goto label_2ac230;
        default: break;
    }

    ctx->pc = 0x2ac1b0u;

    // 0x2ac1b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ac1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ac1b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ac1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ac1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ac1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ac1bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1c0: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2ac1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ac1c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ac1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ac1c8: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2AC1C8u;
    SET_GPR_U32(ctx, 31, 0x2AC1D0u);
    ctx->pc = 0x2AC1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1C8u;
            // 0x2ac1cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1D0u; }
        if (ctx->pc != 0x2AC1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1D0u; }
        if (ctx->pc != 0x2AC1D0u) { return; }
    }
    ctx->pc = 0x2AC1D0u;
label_2ac1d0:
    // 0x2ac1d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ac1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ac1d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ac1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1d8: 0xc0ab288  jal         func_2ACA20
    ctx->pc = 0x2AC1D8u;
    SET_GPR_U32(ctx, 31, 0x2AC1E0u);
    ctx->pc = 0x2AC1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1D8u;
            // 0x2ac1dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA20u;
    if (runtime->hasFunction(0x2ACA20u)) {
        auto targetFn = runtime->lookupFunction(0x2ACA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1E0u; }
        if (ctx->pc != 0x2AC1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACA20_0x2aca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1E0u; }
        if (ctx->pc != 0x2AC1E0u) { return; }
    }
    ctx->pc = 0x2AC1E0u;
label_2ac1e0:
    // 0x2ac1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac1e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ac1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ac1e8: 0xc0ab1f0  jal         func_2AC7C0
    ctx->pc = 0x2AC1E8u;
    SET_GPR_U32(ctx, 31, 0x2AC1F0u);
    ctx->pc = 0x2AC1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1E8u;
            // 0x2ac1ec: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC7C0u;
    if (runtime->hasFunction(0x2AC7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AC7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1F0u; }
        if (ctx->pc != 0x2AC1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC7C0_0x2ac7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC1F0u; }
        if (ctx->pc != 0x2AC1F0u) { return; }
    }
    ctx->pc = 0x2AC1F0u;
label_2ac1f0:
    // 0x2ac1f0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2ac1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2ac1f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ac1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ac1f8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2ac1f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ac1fc: 0x54200012  bnel        $at, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AC1FCu;
    {
        const bool branch_taken_0x2ac1fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac1fc) {
            ctx->pc = 0x2AC200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC1FCu;
            // 0x2ac200: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC248u;
            goto label_2ac248;
        }
    }
    ctx->pc = 0x2AC204u;
    // 0x2ac204: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x2ac204u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ac208: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2AC208u;
    {
        const bool branch_taken_0x2ac208 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac208) {
            ctx->pc = 0x2AC240u;
            goto label_2ac240;
        }
    }
    ctx->pc = 0x2AC210u;
    // 0x2ac210: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ac210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ac214:
    // 0x2ac214: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ac214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ac218: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ac218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ac21c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ac21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac220: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2AC220u;
    SET_GPR_U32(ctx, 31, 0x2AC228u);
    ctx->pc = 0x2AC224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC220u;
            // 0x2ac224: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC228u; }
        if (ctx->pc != 0x2AC228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC228u; }
        if (ctx->pc != 0x2AC228u) { return; }
    }
    ctx->pc = 0x2AC228u;
label_2ac228:
    // 0x2ac228: 0xc0ab314  jal         func_2ACC50
    ctx->pc = 0x2AC228u;
    SET_GPR_U32(ctx, 31, 0x2AC230u);
    ctx->pc = 0x2AC22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC228u;
            // 0x2ac22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ACC50u;
    if (runtime->hasFunction(0x2ACC50u)) {
        auto targetFn = runtime->lookupFunction(0x2ACC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC230u; }
        if (ctx->pc != 0x2AC230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ACC50_0x2acc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AC230u; }
        if (ctx->pc != 0x2AC230u) { return; }
    }
    ctx->pc = 0x2AC230u;
label_2ac230:
    // 0x2ac230: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ac230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ac234: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x2ac234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ac238: 0x5020fff6  beql        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2AC238u;
    {
        const bool branch_taken_0x2ac238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac238) {
            ctx->pc = 0x2AC23Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC238u;
            // 0x2ac23c: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AC214u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac214;
        }
    }
    ctx->pc = 0x2AC240u;
label_2ac240:
    // 0x2ac240: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ac240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ac244: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2ac244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_2ac248:
    // 0x2ac248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ac248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac24c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ac24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac250: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC250u;
            // 0x2ac254: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC258u;
    // 0x2ac258: 0x0  nop
    ctx->pc = 0x2ac258u;
    // NOP
    // 0x2ac25c: 0x0  nop
    ctx->pc = 0x2ac25cu;
    // NOP
}
