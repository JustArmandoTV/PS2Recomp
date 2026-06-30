#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050B070
// Address: 0x50b070 - 0x50b100
void sub_0050B070_0x50b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B070_0x50b070");
#endif

    switch (ctx->pc) {
        case 0x50b070u: goto label_50b070;
        case 0x50b074u: goto label_50b074;
        case 0x50b078u: goto label_50b078;
        case 0x50b07cu: goto label_50b07c;
        case 0x50b080u: goto label_50b080;
        case 0x50b084u: goto label_50b084;
        case 0x50b088u: goto label_50b088;
        case 0x50b08cu: goto label_50b08c;
        case 0x50b090u: goto label_50b090;
        case 0x50b094u: goto label_50b094;
        case 0x50b098u: goto label_50b098;
        case 0x50b09cu: goto label_50b09c;
        case 0x50b0a0u: goto label_50b0a0;
        case 0x50b0a4u: goto label_50b0a4;
        case 0x50b0a8u: goto label_50b0a8;
        case 0x50b0acu: goto label_50b0ac;
        case 0x50b0b0u: goto label_50b0b0;
        case 0x50b0b4u: goto label_50b0b4;
        case 0x50b0b8u: goto label_50b0b8;
        case 0x50b0bcu: goto label_50b0bc;
        case 0x50b0c0u: goto label_50b0c0;
        case 0x50b0c4u: goto label_50b0c4;
        case 0x50b0c8u: goto label_50b0c8;
        case 0x50b0ccu: goto label_50b0cc;
        case 0x50b0d0u: goto label_50b0d0;
        case 0x50b0d4u: goto label_50b0d4;
        case 0x50b0d8u: goto label_50b0d8;
        case 0x50b0dcu: goto label_50b0dc;
        case 0x50b0e0u: goto label_50b0e0;
        case 0x50b0e4u: goto label_50b0e4;
        case 0x50b0e8u: goto label_50b0e8;
        case 0x50b0ecu: goto label_50b0ec;
        case 0x50b0f0u: goto label_50b0f0;
        case 0x50b0f4u: goto label_50b0f4;
        case 0x50b0f8u: goto label_50b0f8;
        case 0x50b0fcu: goto label_50b0fc;
        default: break;
    }

    ctx->pc = 0x50b070u;

label_50b070:
    // 0x50b070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_50b074:
    // 0x50b074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50b078:
    // 0x50b078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50b07c:
    // 0x50b07c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50b080:
    // 0x50b080: 0xc142830  jal         func_50A0C0
label_50b084:
    if (ctx->pc == 0x50B084u) {
        ctx->pc = 0x50B084u;
            // 0x50b084: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x50B088u;
        goto label_50b088;
    }
    ctx->pc = 0x50B080u;
    SET_GPR_U32(ctx, 31, 0x50B088u);
    ctx->pc = 0x50B084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B080u;
            // 0x50b084: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50A0C0u;
    if (runtime->hasFunction(0x50A0C0u)) {
        auto targetFn = runtime->lookupFunction(0x50A0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B088u; }
        if (ctx->pc != 0x50B088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050A0C0_0x50a0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B088u; }
        if (ctx->pc != 0x50B088u) { return; }
    }
    ctx->pc = 0x50B088u;
label_50b088:
    // 0x50b088: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x50b088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_50b08c:
    // 0x50b08c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_50b090:
    if (ctx->pc == 0x50B090u) {
        ctx->pc = 0x50B090u;
            // 0x50b090: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x50B094u;
        goto label_50b094;
    }
    ctx->pc = 0x50B08Cu;
    {
        const bool branch_taken_0x50b08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50b08c) {
            ctx->pc = 0x50B090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B08Cu;
            // 0x50b090: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B09Cu;
            goto label_50b09c;
        }
    }
    ctx->pc = 0x50B094u;
label_50b094:
    // 0x50b094: 0x10000015  b           . + 4 + (0x15 << 2)
label_50b098:
    if (ctx->pc == 0x50B098u) {
        ctx->pc = 0x50B098u;
            // 0x50b098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50B09Cu;
        goto label_50b09c;
    }
    ctx->pc = 0x50B094u;
    {
        const bool branch_taken_0x50b094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B094u;
            // 0x50b098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b094) {
            ctx->pc = 0x50B0ECu;
            goto label_50b0ec;
        }
    }
    ctx->pc = 0x50B09Cu;
label_50b09c:
    // 0x50b09c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50b0a0:
    // 0x50b0a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x50b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_50b0a4:
    // 0x50b0a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x50b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_50b0a8:
    // 0x50b0a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50b0a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50b0ac:
    // 0x50b0ac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x50b0acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_50b0b0:
    // 0x50b0b0: 0x320f809  jalr        $t9
label_50b0b4:
    if (ctx->pc == 0x50B0B4u) {
        ctx->pc = 0x50B0B4u;
            // 0x50b0b4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x50B0B8u;
        goto label_50b0b8;
    }
    ctx->pc = 0x50B0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50B0B8u);
        ctx->pc = 0x50B0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B0B0u;
            // 0x50b0b4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50B0B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50B0B8u; }
            if (ctx->pc != 0x50B0B8u) { return; }
        }
        }
    }
    ctx->pc = 0x50B0B8u;
label_50b0b8:
    // 0x50b0b8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x50b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_50b0bc:
    // 0x50b0bc: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x50b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_50b0c0:
    // 0x50b0c0: 0xc04cc08  jal         func_133020
label_50b0c4:
    if (ctx->pc == 0x50B0C4u) {
        ctx->pc = 0x50B0C4u;
            // 0x50b0c4: 0x24450820  addiu       $a1, $v0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
        ctx->pc = 0x50B0C8u;
        goto label_50b0c8;
    }
    ctx->pc = 0x50B0C0u;
    SET_GPR_U32(ctx, 31, 0x50B0C8u);
    ctx->pc = 0x50B0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B0C0u;
            // 0x50b0c4: 0x24450820  addiu       $a1, $v0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B0C8u; }
        if (ctx->pc != 0x50B0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B0C8u; }
        if (ctx->pc != 0x50B0C8u) { return; }
    }
    ctx->pc = 0x50B0C8u;
label_50b0c8:
    // 0x50b0c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x50b0c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50b0cc:
    // 0x50b0cc: 0x0  nop
    ctx->pc = 0x50b0ccu;
    // NOP
label_50b0d0:
    // 0x50b0d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x50b0d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50b0d4:
    // 0x50b0d4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_50b0d8:
    if (ctx->pc == 0x50B0D8u) {
        ctx->pc = 0x50B0D8u;
            // 0x50b0d8: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x50B0DCu;
        goto label_50b0dc;
    }
    ctx->pc = 0x50B0D4u;
    {
        const bool branch_taken_0x50b0d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50b0d4) {
            ctx->pc = 0x50B0D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B0D4u;
            // 0x50b0d8: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B0E4u;
            goto label_50b0e4;
        }
    }
    ctx->pc = 0x50B0DCu;
label_50b0dc:
    // 0x50b0dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_50b0e0:
    if (ctx->pc == 0x50B0E0u) {
        ctx->pc = 0x50B0E0u;
            // 0x50b0e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50B0E4u;
        goto label_50b0e4;
    }
    ctx->pc = 0x50B0DCu;
    {
        const bool branch_taken_0x50b0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B0DCu;
            // 0x50b0e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b0dc) {
            ctx->pc = 0x50B0ECu;
            goto label_50b0ec;
        }
    }
    ctx->pc = 0x50B0E4u;
label_50b0e4:
    // 0x50b0e4: 0x401027  not         $v0, $v0
    ctx->pc = 0x50b0e4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_50b0e8:
    // 0x50b0e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x50b0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_50b0ec:
    // 0x50b0ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50b0f0:
    // 0x50b0f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50b0f4:
    // 0x50b0f4: 0x3e00008  jr          $ra
label_50b0f8:
    if (ctx->pc == 0x50B0F8u) {
        ctx->pc = 0x50B0F8u;
            // 0x50b0f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x50B0FCu;
        goto label_50b0fc;
    }
    ctx->pc = 0x50B0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B0F4u;
            // 0x50b0f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B0FCu;
label_50b0fc:
    // 0x50b0fc: 0x0  nop
    ctx->pc = 0x50b0fcu;
    // NOP
}
