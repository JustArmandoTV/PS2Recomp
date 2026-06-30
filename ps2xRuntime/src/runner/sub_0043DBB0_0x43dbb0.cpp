#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043DBB0
// Address: 0x43dbb0 - 0x43dd30
void sub_0043DBB0_0x43dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043DBB0_0x43dbb0");
#endif

    switch (ctx->pc) {
        case 0x43dbc4u: goto label_43dbc4;
        case 0x43dc28u: goto label_43dc28;
        case 0x43dc40u: goto label_43dc40;
        case 0x43dca0u: goto label_43dca0;
        case 0x43dcf8u: goto label_43dcf8;
        case 0x43dd10u: goto label_43dd10;
        default: break;
    }

    ctx->pc = 0x43dbb0u;

    // 0x43dbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43dbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43dbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43dbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43dbbc: 0xc075a44  jal         func_1D6910
    ctx->pc = 0x43DBBCu;
    SET_GPR_U32(ctx, 31, 0x43DBC4u);
    ctx->pc = 0x43DBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DBBCu;
            // 0x43dbc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6910u;
    if (runtime->hasFunction(0x1D6910u)) {
        auto targetFn = runtime->lookupFunction(0x1D6910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DBC4u; }
        if (ctx->pc != 0x43DBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6910_0x1d6910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DBC4u; }
        if (ctx->pc != 0x43DBC4u) { return; }
    }
    ctx->pc = 0x43DBC4u;
label_43dbc4:
    // 0x43dbc4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x43dbc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x43dbcc: 0x2463ce00  addiu       $v1, $v1, -0x3200
    ctx->pc = 0x43dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954496));
    // 0x43dbd0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x43dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x43dbd4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x43dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x43dbd8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x43dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x43dbdc: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x43dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x43dbe0: 0x54430022  bnel        $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x43DBE0u;
    {
        const bool branch_taken_0x43dbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x43dbe0) {
            ctx->pc = 0x43DBE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DBE0u;
            // 0x43dbe4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DC6Cu;
            goto label_43dc6c;
        }
    }
    ctx->pc = 0x43DBE8u;
    // 0x43dbe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x43dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x43dbec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x43dbecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x43dbf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43dbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dbf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x43dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43dbf8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x43dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x43dbfc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x43dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x43dc00: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x43dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x43dc04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x43dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x43dc08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x43dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43dc0c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x43dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x43dc10: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x43dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x43dc14: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x43dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x43dc18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x43dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x43dc1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43dc20: 0xc0748d4  jal         func_1D2350
    ctx->pc = 0x43DC20u;
    SET_GPR_U32(ctx, 31, 0x43DC28u);
    ctx->pc = 0x43DC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DC20u;
            // 0x43dc24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2350u;
    if (runtime->hasFunction(0x1D2350u)) {
        auto targetFn = runtime->lookupFunction(0x1D2350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DC28u; }
        if (ctx->pc != 0x43DC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2350_0x1d2350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DC28u; }
        if (ctx->pc != 0x43DC28u) { return; }
    }
    ctx->pc = 0x43DC28u;
label_43dc28:
    // 0x43dc28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x43dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x43dc2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x43dc2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x43dc30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43dc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dc34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43dc38: 0xc0748d4  jal         func_1D2350
    ctx->pc = 0x43DC38u;
    SET_GPR_U32(ctx, 31, 0x43DC40u);
    ctx->pc = 0x43DC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DC38u;
            // 0x43dc3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2350u;
    if (runtime->hasFunction(0x1D2350u)) {
        auto targetFn = runtime->lookupFunction(0x1D2350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DC40u; }
        if (ctx->pc != 0x43DC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2350_0x1d2350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DC40u; }
        if (ctx->pc != 0x43DC40u) { return; }
    }
    ctx->pc = 0x43DC40u;
label_43dc40:
    // 0x43dc40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x43dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x43dc44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x43dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43dc48: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x43dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x43dc4c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x43dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x43dc50: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x43dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x43dc54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x43dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x43dc58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x43dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43dc5c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x43dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x43dc60: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x43dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x43dc64: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x43dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x43dc68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43dc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43dc6c:
    // 0x43dc6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43dc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43dc70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43dc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43dc74: 0x3e00008  jr          $ra
    ctx->pc = 0x43DC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DC74u;
            // 0x43dc78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43DC7Cu;
    // 0x43dc7c: 0x0  nop
    ctx->pc = 0x43dc7cu;
    // NOP
    // 0x43dc80: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x43dc84: 0x2442d130  addiu       $v0, $v0, -0x2ED0
    ctx->pc = 0x43dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955312));
    // 0x43dc88: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x43dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x43dc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x43DC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DC8Cu;
            // 0x43dc90: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43DC94u;
    // 0x43dc94: 0x0  nop
    ctx->pc = 0x43dc94u;
    // NOP
    // 0x43dc98: 0x0  nop
    ctx->pc = 0x43dc98u;
    // NOP
    // 0x43dc9c: 0x0  nop
    ctx->pc = 0x43dc9cu;
    // NOP
label_43dca0:
    // 0x43dca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43dca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43dca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43dca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43dca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43dcac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43dcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43dcb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43dcb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dcb4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x43DCB4u;
    {
        const bool branch_taken_0x43dcb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DCB4u;
            // 0x43dcb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dcb4) {
            ctx->pc = 0x43DD10u;
            goto label_43dd10;
        }
    }
    ctx->pc = 0x43DCBCu;
    // 0x43dcbc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43dcc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43dcc4: 0x2463d150  addiu       $v1, $v1, -0x2EB0
    ctx->pc = 0x43dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955344));
    // 0x43dcc8: 0x2442d188  addiu       $v0, $v0, -0x2E78
    ctx->pc = 0x43dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955400));
    // 0x43dccc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43dcd0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43DCD0u;
    {
        const bool branch_taken_0x43dcd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DCD0u;
            // 0x43dcd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dcd0) {
            ctx->pc = 0x43DCF8u;
            goto label_43dcf8;
        }
    }
    ctx->pc = 0x43DCD8u;
    // 0x43dcd8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43dcdc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43dce0: 0x2463d2b0  addiu       $v1, $v1, -0x2D50
    ctx->pc = 0x43dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955696));
    // 0x43dce4: 0x2442d2e8  addiu       $v0, $v0, -0x2D18
    ctx->pc = 0x43dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955752));
    // 0x43dce8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x43dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x43dcec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43dcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dcf0: 0xc10f74c  jal         func_43DD30
    ctx->pc = 0x43DCF0u;
    SET_GPR_U32(ctx, 31, 0x43DCF8u);
    ctx->pc = 0x43DCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DCF0u;
            // 0x43dcf4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DD30u;
    if (runtime->hasFunction(0x43DD30u)) {
        auto targetFn = runtime->lookupFunction(0x43DD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DCF8u; }
        if (ctx->pc != 0x43DCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DD30_0x43dd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DCF8u; }
        if (ctx->pc != 0x43DCF8u) { return; }
    }
    ctx->pc = 0x43DCF8u;
label_43dcf8:
    // 0x43dcf8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x43dcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x43dcfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43dcfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x43dd00: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43DD00u;
    {
        const bool branch_taken_0x43dd00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43dd00) {
            ctx->pc = 0x43DD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43DD00u;
            // 0x43dd04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43DD14u;
            goto label_43dd14;
        }
    }
    ctx->pc = 0x43DD08u;
    // 0x43dd08: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43DD08u;
    SET_GPR_U32(ctx, 31, 0x43DD10u);
    ctx->pc = 0x43DD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43DD08u;
            // 0x43dd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DD10u; }
        if (ctx->pc != 0x43DD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43DD10u; }
        if (ctx->pc != 0x43DD10u) { return; }
    }
    ctx->pc = 0x43DD10u;
label_43dd10:
    // 0x43dd10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43dd10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43dd14:
    // 0x43dd14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43dd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43dd18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43dd18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43dd1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43dd1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43dd20: 0x3e00008  jr          $ra
    ctx->pc = 0x43DD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43DD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43DD20u;
            // 0x43dd24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43DD28u;
    // 0x43dd28: 0x0  nop
    ctx->pc = 0x43dd28u;
    // NOP
    // 0x43dd2c: 0x0  nop
    ctx->pc = 0x43dd2cu;
    // NOP
}
