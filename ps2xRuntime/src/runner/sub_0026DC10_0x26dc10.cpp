#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026DC10
// Address: 0x26dc10 - 0x26e0d0
void sub_0026DC10_0x26dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DC10_0x26dc10");
#endif

    switch (ctx->pc) {
        case 0x26dc74u: goto label_26dc74;
        case 0x26dcc0u: goto label_26dcc0;
        case 0x26dd0cu: goto label_26dd0c;
        case 0x26dd5cu: goto label_26dd5c;
        case 0x26dda4u: goto label_26dda4;
        case 0x26de00u: goto label_26de00;
        case 0x26de44u: goto label_26de44;
        case 0x26dea4u: goto label_26dea4;
        case 0x26deecu: goto label_26deec;
        case 0x26df34u: goto label_26df34;
        case 0x26df84u: goto label_26df84;
        case 0x26dfd0u: goto label_26dfd0;
        case 0x26e01cu: goto label_26e01c;
        case 0x26e06cu: goto label_26e06c;
        case 0x26e0b4u: goto label_26e0b4;
        default: break;
    }

    ctx->pc = 0x26dc10u;

    // 0x26dc10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26dc14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26dc18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26dc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26dc1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26dc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26dc20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26dc20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26dc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc28: 0x6210061  bgez        $s1, . + 4 + (0x61 << 2)
    ctx->pc = 0x26DC28u;
    {
        const bool branch_taken_0x26dc28 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x26DC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC28u;
            // 0x26dc2c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc28) {
            ctx->pc = 0x26DDB0u;
            goto label_26ddb0;
        }
    }
    ctx->pc = 0x26DC30u;
    // 0x26dc30: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x26dc30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26dc34: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26dc34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dc38: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dc3c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26dc40: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26dc44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26dc48: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26dc48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26dc4c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dc50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26dc54: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26dc58: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dc5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dc60: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26dc60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26dc64: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DC64u;
    {
        const bool branch_taken_0x26dc64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26dc64) {
            ctx->pc = 0x26DC78u;
            goto label_26dc78;
        }
    }
    ctx->pc = 0x26DC6Cu;
    // 0x26dc6c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DC6Cu;
    SET_GPR_U32(ctx, 31, 0x26DC74u);
    ctx->pc = 0x26DC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC6Cu;
            // 0x26dc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC74u; }
        if (ctx->pc != 0x26DC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC74u; }
        if (ctx->pc != 0x26DC74u) { return; }
    }
    ctx->pc = 0x26DC74u;
label_26dc74:
    // 0x26dc74: 0x0  nop
    ctx->pc = 0x26dc74u;
    // NOP
label_26dc78:
    // 0x26dc78: 0x3223ff00  andi        $v1, $s1, 0xFF00
    ctx->pc = 0x26dc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
    // 0x26dc7c: 0x33202  srl         $a2, $v1, 8
    ctx->pc = 0x26dc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x26dc80: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26dc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dc84: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dc88: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26dc8c: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26dc90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26dc94: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26dc94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26dc98: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dc9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26dca0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26dca4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dca8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26dca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dcac: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26dcacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26dcb0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DCB0u;
    {
        const bool branch_taken_0x26dcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCB0u;
            // 0x26dcb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcb0) {
            ctx->pc = 0x26DCC0u;
            goto label_26dcc0;
        }
    }
    ctx->pc = 0x26DCB8u;
    // 0x26dcb8: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DCB8u;
    SET_GPR_U32(ctx, 31, 0x26DCC0u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCC0u; }
        if (ctx->pc != 0x26DCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCC0u; }
        if (ctx->pc != 0x26DCC0u) { return; }
    }
    ctx->pc = 0x26DCC0u;
label_26dcc0:
    // 0x26dcc0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x26dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x26dcc4: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x26dcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x26dcc8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dccc: 0x33402  srl         $a2, $v1, 16
    ctx->pc = 0x26dcccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x26dcd0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dcd4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26dcd8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26dcdc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26dce0: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26dce0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26dce4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dce8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26dcec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26dcf0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dcf4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dcf8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26dcf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26dcfc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DCFCu;
    {
        const bool branch_taken_0x26dcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCFCu;
            // 0x26dd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcfc) {
            ctx->pc = 0x26DD10u;
            goto label_26dd10;
        }
    }
    ctx->pc = 0x26DD04u;
    // 0x26dd04: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DD04u;
    SET_GPR_U32(ctx, 31, 0x26DD0Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD0Cu; }
        if (ctx->pc != 0x26DD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD0Cu; }
        if (ctx->pc != 0x26DD0Cu) { return; }
    }
    ctx->pc = 0x26DD0Cu;
label_26dd0c:
    // 0x26dd0c: 0x0  nop
    ctx->pc = 0x26dd0cu;
    // NOP
label_26dd10:
    // 0x26dd10: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x26dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x26dd14: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x26dd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x26dd18: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dd1c: 0x33602  srl         $a2, $v1, 24
    ctx->pc = 0x26dd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x26dd20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dd24: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26dd28: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26dd2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26dd30: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26dd30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26dd34: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dd38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26dd3c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26dd40: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dd44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dd48: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26dd48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26dd4c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DD4Cu;
    {
        const bool branch_taken_0x26dd4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD4Cu;
            // 0x26dd50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd4c) {
            ctx->pc = 0x26DD60u;
            goto label_26dd60;
        }
    }
    ctx->pc = 0x26DD54u;
    // 0x26dd54: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DD54u;
    SET_GPR_U32(ctx, 31, 0x26DD5Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD5Cu; }
        if (ctx->pc != 0x26DD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD5Cu; }
        if (ctx->pc != 0x26DD5Cu) { return; }
    }
    ctx->pc = 0x26DD5Cu;
label_26dd5c:
    // 0x26dd5c: 0x0  nop
    ctx->pc = 0x26dd5cu;
    // NOP
label_26dd60:
    // 0x26dd60: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dd64: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dd68: 0x26460068  addiu       $a2, $s2, 0x68
    ctx->pc = 0x26dd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x26dd6c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26dd70: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26dd74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26dd78: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26dd78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26dd7c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dd80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26dd84: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26dd88: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dd8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dd90: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26dd90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26dd94: 0x146000c8  bnez        $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x26DD94u;
    {
        const bool branch_taken_0x26dd94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD94u;
            // 0x26dd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd94) {
            ctx->pc = 0x26E0B8u;
            goto label_26e0b8;
        }
    }
    ctx->pc = 0x26DD9Cu;
    // 0x26dd9c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DD9Cu;
    SET_GPR_U32(ctx, 31, 0x26DDA4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDA4u; }
        if (ctx->pc != 0x26DDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDA4u; }
        if (ctx->pc != 0x26DDA4u) { return; }
    }
    ctx->pc = 0x26DDA4u;
label_26dda4:
    // 0x26dda4: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x26DDA4u;
    {
        const bool branch_taken_0x26dda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dda4) {
            ctx->pc = 0x26E0B8u;
            goto label_26e0b8;
        }
    }
    ctx->pc = 0x26DDACu;
    // 0x26ddac: 0x0  nop
    ctx->pc = 0x26ddacu;
    // NOP
label_26ddb0:
    // 0x26ddb0: 0x2a210100  slti        $at, $s1, 0x100
    ctx->pc = 0x26ddb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x26ddb4: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x26DDB4u;
    {
        const bool branch_taken_0x26ddb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ddb4) {
            ctx->pc = 0x26DE50u;
            goto label_26de50;
        }
    }
    ctx->pc = 0x26DDBCu;
    // 0x26ddbc: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x26ddbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26ddc0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26ddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26ddc4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26ddc8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26ddcc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26ddd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26ddd4: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26ddd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26ddd8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dddc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26dde0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26dde4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dde8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26ddec: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26ddecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26ddf0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DDF0u;
    {
        const bool branch_taken_0x26ddf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ddf0) {
            ctx->pc = 0x26DE00u;
            goto label_26de00;
        }
    }
    ctx->pc = 0x26DDF8u;
    // 0x26ddf8: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DDF8u;
    SET_GPR_U32(ctx, 31, 0x26DE00u);
    ctx->pc = 0x26DDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DDF8u;
            // 0x26ddfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE00u; }
        if (ctx->pc != 0x26DE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE00u; }
        if (ctx->pc != 0x26DE00u) { return; }
    }
    ctx->pc = 0x26DE00u;
label_26de00:
    // 0x26de00: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26de00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26de04: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26de04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26de08: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x26de08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x26de0c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26de10: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26de10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26de14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26de14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26de18: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26de18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26de1c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26de20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26de20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26de24: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26de24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26de28: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26de28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26de2c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26de2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26de30: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26de30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26de34: 0x146000a0  bnez        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x26DE34u;
    {
        const bool branch_taken_0x26de34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE34u;
            // 0x26de38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de34) {
            ctx->pc = 0x26E0B8u;
            goto label_26e0b8;
        }
    }
    ctx->pc = 0x26DE3Cu;
    // 0x26de3c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DE3Cu;
    SET_GPR_U32(ctx, 31, 0x26DE44u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE44u; }
        if (ctx->pc != 0x26DE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE44u; }
        if (ctx->pc != 0x26DE44u) { return; }
    }
    ctx->pc = 0x26DE44u;
label_26de44:
    // 0x26de44: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x26DE44u;
    {
        const bool branch_taken_0x26de44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de44) {
            ctx->pc = 0x26E0B8u;
            goto label_26e0b8;
        }
    }
    ctx->pc = 0x26DE4Cu;
    // 0x26de4c: 0x0  nop
    ctx->pc = 0x26de4cu;
    // NOP
label_26de50:
    // 0x26de50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x26de50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x26de54: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x26de54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x26de58: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x26DE58u;
    {
        const bool branch_taken_0x26de58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de58) {
            ctx->pc = 0x26DF40u;
            goto label_26df40;
        }
    }
    ctx->pc = 0x26DE60u;
    // 0x26de60: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x26de60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26de64: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26de64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26de68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26de68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26de6c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26de70: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26de70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26de74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26de74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26de78: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26de78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26de7c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26de80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26de80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26de84: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26de84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26de88: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26de88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26de8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26de90: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26de90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26de94: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DE94u;
    {
        const bool branch_taken_0x26de94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26de94) {
            ctx->pc = 0x26DEA8u;
            goto label_26dea8;
        }
    }
    ctx->pc = 0x26DE9Cu;
    // 0x26de9c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DE9Cu;
    SET_GPR_U32(ctx, 31, 0x26DEA4u);
    ctx->pc = 0x26DEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE9Cu;
            // 0x26dea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEA4u; }
        if (ctx->pc != 0x26DEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEA4u; }
        if (ctx->pc != 0x26DEA4u) { return; }
    }
    ctx->pc = 0x26DEA4u;
label_26dea4:
    // 0x26dea4: 0x0  nop
    ctx->pc = 0x26dea4u;
    // NOP
label_26dea8:
    // 0x26dea8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26deac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26deacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26deb0: 0x113203  sra         $a2, $s1, 8
    ctx->pc = 0x26deb0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 8));
    // 0x26deb4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26deb8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26debc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26debcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26dec0: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26dec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26dec4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26decc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26deccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26ded0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26ded4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26ded4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26ded8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26ded8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26dedc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DEDCu;
    {
        const bool branch_taken_0x26dedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEDCu;
            // 0x26dee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dedc) {
            ctx->pc = 0x26DEF0u;
            goto label_26def0;
        }
    }
    ctx->pc = 0x26DEE4u;
    // 0x26dee4: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DEE4u;
    SET_GPR_U32(ctx, 31, 0x26DEECu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEECu; }
        if (ctx->pc != 0x26DEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEECu; }
        if (ctx->pc != 0x26DEECu) { return; }
    }
    ctx->pc = 0x26DEECu;
label_26deec:
    // 0x26deec: 0x0  nop
    ctx->pc = 0x26deecu;
    // NOP
label_26def0:
    // 0x26def0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26def0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26def4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26def4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26def8: 0x26460064  addiu       $a2, $s2, 0x64
    ctx->pc = 0x26def8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    // 0x26defc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26defcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26df00: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26df00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26df04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26df04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26df08: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26df08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26df0c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26df10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26df10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26df14: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26df14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26df18: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26df18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26df1c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26df20: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26df20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26df24: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x26DF24u;
    {
        const bool branch_taken_0x26df24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF24u;
            // 0x26df28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df24) {
            ctx->pc = 0x26E0B8u;
            goto label_26e0b8;
        }
    }
    ctx->pc = 0x26DF2Cu;
    // 0x26df2c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DF2Cu;
    SET_GPR_U32(ctx, 31, 0x26DF34u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF34u; }
        if (ctx->pc != 0x26DF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF34u; }
        if (ctx->pc != 0x26DF34u) { return; }
    }
    ctx->pc = 0x26DF34u;
label_26df34:
    // 0x26df34: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x26DF34u;
    {
        const bool branch_taken_0x26df34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df34) {
            ctx->pc = 0x26E0B8u;
            goto label_26e0b8;
        }
    }
    ctx->pc = 0x26DF3Cu;
    // 0x26df3c: 0x0  nop
    ctx->pc = 0x26df3cu;
    // NOP
label_26df40:
    // 0x26df40: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x26df40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26df44: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26df44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26df48: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26df48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26df4c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26df50: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26df50u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26df54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26df54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26df58: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26df58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26df5c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26df60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26df60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26df64: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26df64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26df68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26df68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26df6c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26df70: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26df70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26df74: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DF74u;
    {
        const bool branch_taken_0x26df74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26df74) {
            ctx->pc = 0x26DF88u;
            goto label_26df88;
        }
    }
    ctx->pc = 0x26DF7Cu;
    // 0x26df7c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DF7Cu;
    SET_GPR_U32(ctx, 31, 0x26DF84u);
    ctx->pc = 0x26DF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF7Cu;
            // 0x26df80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF84u; }
        if (ctx->pc != 0x26DF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF84u; }
        if (ctx->pc != 0x26DF84u) { return; }
    }
    ctx->pc = 0x26DF84u;
label_26df84:
    // 0x26df84: 0x0  nop
    ctx->pc = 0x26df84u;
    // NOP
label_26df88:
    // 0x26df88: 0x3223ff00  andi        $v1, $s1, 0xFF00
    ctx->pc = 0x26df88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
    // 0x26df8c: 0x33202  srl         $a2, $v1, 8
    ctx->pc = 0x26df8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x26df90: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26df90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26df94: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26df94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26df98: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26df98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26df9c: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26dfa0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26dfa4: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26dfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26dfa8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dfac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26dfb0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26dfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26dfb4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dfb8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dfbc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26dfbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26dfc0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DFC0u;
    {
        const bool branch_taken_0x26dfc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DFC0u;
            // 0x26dfc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfc0) {
            ctx->pc = 0x26DFD0u;
            goto label_26dfd0;
        }
    }
    ctx->pc = 0x26DFC8u;
    // 0x26dfc8: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26DFC8u;
    SET_GPR_U32(ctx, 31, 0x26DFD0u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DFD0u; }
        if (ctx->pc != 0x26DFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DFD0u; }
        if (ctx->pc != 0x26DFD0u) { return; }
    }
    ctx->pc = 0x26DFD0u;
label_26dfd0:
    // 0x26dfd0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x26dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x26dfd4: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x26dfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x26dfd8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26dfdc: 0x33402  srl         $a2, $v1, 16
    ctx->pc = 0x26dfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x26dfe0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dfe4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26dfe8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26dfec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26dff0: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26dff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26dff4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26dff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26dff8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26dffc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26dffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e000: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e004: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e008: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e00c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E00Cu;
    {
        const bool branch_taken_0x26e00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E00Cu;
            // 0x26e010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e00c) {
            ctx->pc = 0x26E020u;
            goto label_26e020;
        }
    }
    ctx->pc = 0x26E014u;
    // 0x26e014: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E014u;
    SET_GPR_U32(ctx, 31, 0x26E01Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E01Cu; }
        if (ctx->pc != 0x26E01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E01Cu; }
        if (ctx->pc != 0x26E01Cu) { return; }
    }
    ctx->pc = 0x26E01Cu;
label_26e01c:
    // 0x26e01c: 0x0  nop
    ctx->pc = 0x26e01cu;
    // NOP
label_26e020:
    // 0x26e020: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x26e020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x26e024: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x26e024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x26e028: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e02c: 0x33602  srl         $a2, $v1, 24
    ctx->pc = 0x26e02cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x26e030: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e034: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e038: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e038u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e03c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e040: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26e040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e044: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e048: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e04c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e050: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e054: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e058: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e058u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e05c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E05Cu;
    {
        const bool branch_taken_0x26e05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E05Cu;
            // 0x26e060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e05c) {
            ctx->pc = 0x26E070u;
            goto label_26e070;
        }
    }
    ctx->pc = 0x26E064u;
    // 0x26e064: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E064u;
    SET_GPR_U32(ctx, 31, 0x26E06Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E06Cu; }
        if (ctx->pc != 0x26E06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E06Cu; }
        if (ctx->pc != 0x26E06Cu) { return; }
    }
    ctx->pc = 0x26E06Cu;
label_26e06c:
    // 0x26e06c: 0x0  nop
    ctx->pc = 0x26e06cu;
    // NOP
label_26e070:
    // 0x26e070: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26e070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e074: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e078: 0x26460068  addiu       $a2, $s2, 0x68
    ctx->pc = 0x26e078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x26e07c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e080: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e080u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e084: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26e084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26e088: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26e088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e08c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e090: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e094: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26e094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26e098: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26e098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e09c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26e0a0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e0a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e0a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E0A4u;
    {
        const bool branch_taken_0x26e0a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0A4u;
            // 0x26e0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0a4) {
            ctx->pc = 0x26E0B8u;
            goto label_26e0b8;
        }
    }
    ctx->pc = 0x26E0ACu;
    // 0x26e0ac: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E0ACu;
    SET_GPR_U32(ctx, 31, 0x26E0B4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E0B4u; }
        if (ctx->pc != 0x26E0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E0B4u; }
        if (ctx->pc != 0x26E0B4u) { return; }
    }
    ctx->pc = 0x26E0B4u;
label_26e0b4:
    // 0x26e0b4: 0x0  nop
    ctx->pc = 0x26e0b4u;
    // NOP
label_26e0b8:
    // 0x26e0b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26e0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e0bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26e0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e0c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x26E0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0C8u;
            // 0x26e0cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E0D0u;
}
