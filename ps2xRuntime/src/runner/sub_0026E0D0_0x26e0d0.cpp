#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026E0D0
// Address: 0x26e0d0 - 0x26e1d0
void sub_0026E0D0_0x26e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E0D0_0x26e0d0");
#endif

    switch (ctx->pc) {
        case 0x26e124u: goto label_26e124;
        case 0x26e16cu: goto label_26e16c;
        case 0x26e1b4u: goto label_26e1b4;
        default: break;
    }

    ctx->pc = 0x26e0d0u;

    // 0x26e0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e0d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26e0d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e0e0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x26e0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e0e4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e0e8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e0ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x26e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e0f0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26e0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e0f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e0f8: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26e0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26e0fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e100: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e104: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26e104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26e108: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e10c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e110: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26e110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e114: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E114u;
    {
        const bool branch_taken_0x26e114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E114u;
            // 0x26e118: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e114) {
            ctx->pc = 0x26E128u;
            goto label_26e128;
        }
    }
    ctx->pc = 0x26E11Cu;
    // 0x26e11c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E11Cu;
    SET_GPR_U32(ctx, 31, 0x26E124u);
    ctx->pc = 0x26E120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E11Cu;
            // 0x26e120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E124u; }
        if (ctx->pc != 0x26E124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E124u; }
        if (ctx->pc != 0x26E124u) { return; }
    }
    ctx->pc = 0x26E124u;
label_26e124:
    // 0x26e124: 0x0  nop
    ctx->pc = 0x26e124u;
    // NOP
label_26e128:
    // 0x26e128: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26e128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e12c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e130: 0x112a03  sra         $a1, $s1, 8
    ctx->pc = 0x26e130u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 8));
    // 0x26e134: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x26e134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e138: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26e138u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e13c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e140: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26e140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26e144: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e148: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e14c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26e150: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e154: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e158: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26e158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e15c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E15Cu;
    {
        const bool branch_taken_0x26e15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E15Cu;
            // 0x26e160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e15c) {
            ctx->pc = 0x26E170u;
            goto label_26e170;
        }
    }
    ctx->pc = 0x26E164u;
    // 0x26e164: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E164u;
    SET_GPR_U32(ctx, 31, 0x26E16Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E16Cu; }
        if (ctx->pc != 0x26E16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E16Cu; }
        if (ctx->pc != 0x26E16Cu) { return; }
    }
    ctx->pc = 0x26E16Cu;
label_26e16c:
    // 0x26e16c: 0x0  nop
    ctx->pc = 0x26e16cu;
    // NOP
label_26e170:
    // 0x26e170: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26e170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e174: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e178: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x26e178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26e17c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x26e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e180: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26e180u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e184: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26e184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e188: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26e188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26e18c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26e190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e194: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26e194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26e198: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e19c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e1a0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26e1a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e1a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E1A4u;
    {
        const bool branch_taken_0x26e1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E1A4u;
            // 0x26e1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1a4) {
            ctx->pc = 0x26E1B8u;
            goto label_26e1b8;
        }
    }
    ctx->pc = 0x26E1ACu;
    // 0x26e1ac: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E1ACu;
    SET_GPR_U32(ctx, 31, 0x26E1B4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1B4u; }
        if (ctx->pc != 0x26E1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1B4u; }
        if (ctx->pc != 0x26E1B4u) { return; }
    }
    ctx->pc = 0x26E1B4u;
label_26e1b4:
    // 0x26e1b4: 0x0  nop
    ctx->pc = 0x26e1b4u;
    // NOP
label_26e1b8:
    // 0x26e1b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26e1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e1bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e1c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x26E1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E1C8u;
            // 0x26e1cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E1D0u;
}
