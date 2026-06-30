#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026E1D0
// Address: 0x26e1d0 - 0x26e380
void sub_0026E1D0_0x26e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E1D0_0x26e1d0");
#endif

    switch (ctx->pc) {
        case 0x26e230u: goto label_26e230;
        case 0x26e27cu: goto label_26e27c;
        case 0x26e2c4u: goto label_26e2c4;
        case 0x26e30cu: goto label_26e30c;
        case 0x26e354u: goto label_26e354;
        default: break;
    }

    ctx->pc = 0x26e1d0u;

    // 0x26e1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26e1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26e1d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26e1d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26e1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26e1dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e1e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26e1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e1e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26e1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1ec: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x26e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e1f0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x26e1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e1f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e1f8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x26e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e1fc: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x26e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26e200: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26e200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e204: 0xa046ffff  sb          $a2, -0x1($v0)
    ctx->pc = 0x26e204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e208: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x26e208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e20c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e210: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x26e210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x26e214: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e218: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x26e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e21c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26e21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E220u;
    {
        const bool branch_taken_0x26e220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E220u;
            // 0x26e224: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e220) {
            ctx->pc = 0x26E230u;
            goto label_26e230;
        }
    }
    ctx->pc = 0x26E228u;
    // 0x26e228: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E228u;
    SET_GPR_U32(ctx, 31, 0x26E230u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E230u; }
        if (ctx->pc != 0x26E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E230u; }
        if (ctx->pc != 0x26E230u) { return; }
    }
    ctx->pc = 0x26E230u;
label_26e230:
    // 0x26e230: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x26e230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26e234: 0x3202ff00  andi        $v0, $s0, 0xFF00
    ctx->pc = 0x26e234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x26e238: 0x23203  sra         $a2, $v0, 8
    ctx->pc = 0x26e238u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 8));
    // 0x26e23c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x26e23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e240: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e244: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x26e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e248: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x26e248u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26e24c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e250: 0xa046ffff  sb          $a2, -0x1($v0)
    ctx->pc = 0x26e250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e254: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x26e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e25c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x26e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x26e260: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26e260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e264: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x26e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e268: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26e268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e26c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E26Cu;
    {
        const bool branch_taken_0x26e26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e26c) {
            ctx->pc = 0x26E280u;
            goto label_26e280;
        }
    }
    ctx->pc = 0x26E274u;
    // 0x26e274: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E274u;
    SET_GPR_U32(ctx, 31, 0x26E27Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E27Cu; }
        if (ctx->pc != 0x26E27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E27Cu; }
        if (ctx->pc != 0x26E27Cu) { return; }
    }
    ctx->pc = 0x26E27Cu;
label_26e27c:
    // 0x26e27c: 0x0  nop
    ctx->pc = 0x26e27cu;
    // NOP
label_26e280:
    // 0x26e280: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x26e280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26e284: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26e284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e288: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e28c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x26e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e290: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26e290u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e294: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26e294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e298: 0xa051ffff  sb          $s1, -0x1($v0)
    ctx->pc = 0x26e298u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26e29c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e2a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e2a4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26e2a8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e2ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e2b0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26e2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e2b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E2B4u;
    {
        const bool branch_taken_0x26e2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2B4u;
            // 0x26e2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2b4) {
            ctx->pc = 0x26E2C8u;
            goto label_26e2c8;
        }
    }
    ctx->pc = 0x26E2BCu;
    // 0x26e2bc: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E2BCu;
    SET_GPR_U32(ctx, 31, 0x26E2C4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2C4u; }
        if (ctx->pc != 0x26E2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2C4u; }
        if (ctx->pc != 0x26E2C4u) { return; }
    }
    ctx->pc = 0x26E2C4u;
label_26e2c4:
    // 0x26e2c4: 0x0  nop
    ctx->pc = 0x26e2c4u;
    // NOP
label_26e2c8:
    // 0x26e2c8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e2cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e2d0: 0x112a03  sra         $a1, $s1, 8
    ctx->pc = 0x26e2d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 8));
    // 0x26e2d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x26e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e2d8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e2dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e2e0: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26e2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26e2e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e2e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e2ec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26e2f0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e2f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e2f8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26e2f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e2fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E2FCu;
    {
        const bool branch_taken_0x26e2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2FCu;
            // 0x26e300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2fc) {
            ctx->pc = 0x26E310u;
            goto label_26e310;
        }
    }
    ctx->pc = 0x26E304u;
    // 0x26e304: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E304u;
    SET_GPR_U32(ctx, 31, 0x26E30Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E30Cu; }
        if (ctx->pc != 0x26E30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E30Cu; }
        if (ctx->pc != 0x26E30Cu) { return; }
    }
    ctx->pc = 0x26E30Cu;
label_26e30c:
    // 0x26e30c: 0x0  nop
    ctx->pc = 0x26e30cu;
    // NOP
label_26e310:
    // 0x26e310: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x26e310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e314: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e318: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x26e318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26e31c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x26e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e320: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26e320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e324: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26e324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e328: 0xa045ffff  sb          $a1, -0x1($v0)
    ctx->pc = 0x26e328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 5));
    // 0x26e32c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26e330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e334: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26e334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26e338: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e33c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e340: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26e340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e344: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E344u;
    {
        const bool branch_taken_0x26e344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E344u;
            // 0x26e348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e344) {
            ctx->pc = 0x26E358u;
            goto label_26e358;
        }
    }
    ctx->pc = 0x26E34Cu;
    // 0x26e34c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E34Cu;
    SET_GPR_U32(ctx, 31, 0x26E354u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E354u; }
        if (ctx->pc != 0x26E354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E354u; }
        if (ctx->pc != 0x26E354u) { return; }
    }
    ctx->pc = 0x26E354u;
label_26e354:
    // 0x26e354: 0x0  nop
    ctx->pc = 0x26e354u;
    // NOP
label_26e358:
    // 0x26e358: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26e358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e35c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26e35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e360: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26e364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e36c: 0x3e00008  jr          $ra
    ctx->pc = 0x26E36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E36Cu;
            // 0x26e370: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E374u;
    // 0x26e374: 0x0  nop
    ctx->pc = 0x26e374u;
    // NOP
    // 0x26e378: 0x0  nop
    ctx->pc = 0x26e378u;
    // NOP
    // 0x26e37c: 0x0  nop
    ctx->pc = 0x26e37cu;
    // NOP
}
