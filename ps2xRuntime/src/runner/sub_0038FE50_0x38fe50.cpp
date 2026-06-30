#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038FE50
// Address: 0x38fe50 - 0x38ffd0
void sub_0038FE50_0x38fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FE50_0x38fe50");
#endif

    switch (ctx->pc) {
        case 0x38fe6cu: goto label_38fe6c;
        case 0x38fe8cu: goto label_38fe8c;
        case 0x38febcu: goto label_38febc;
        case 0x38fedcu: goto label_38fedc;
        case 0x38ff00u: goto label_38ff00;
        case 0x38ff60u: goto label_38ff60;
        case 0x38ff6cu: goto label_38ff6c;
        case 0x38ff78u: goto label_38ff78;
        case 0x38ff84u: goto label_38ff84;
        case 0x38ff90u: goto label_38ff90;
        case 0x38ff9cu: goto label_38ff9c;
        case 0x38ffb4u: goto label_38ffb4;
        default: break;
    }

    ctx->pc = 0x38fe50u;

    // 0x38fe50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38fe54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x38fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x38fe58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38fe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38fe5c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x38fe5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x38fe60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38fe60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38fe64: 0xc0e402c  jal         func_3900B0
    ctx->pc = 0x38FE64u;
    SET_GPR_U32(ctx, 31, 0x38FE6Cu);
    ctx->pc = 0x38FE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FE64u;
            // 0x38fe68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (runtime->hasFunction(0x3900B0u)) {
        auto targetFn = runtime->lookupFunction(0x3900B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FE6Cu; }
        if (ctx->pc != 0x38FE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003900B0_0x3900b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FE6Cu; }
        if (ctx->pc != 0x38FE6Cu) { return; }
    }
    ctx->pc = 0x38FE6Cu;
label_38fe6c:
    // 0x38fe6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x38fe70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x38fe74: 0x24637e30  addiu       $v1, $v1, 0x7E30
    ctx->pc = 0x38fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32304));
    // 0x38fe78: 0x24427e68  addiu       $v0, $v0, 0x7E68
    ctx->pc = 0x38fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32360));
    // 0x38fe7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x38fe80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38fe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fe84: 0xc0e4028  jal         func_3900A0
    ctx->pc = 0x38FE84u;
    SET_GPR_U32(ctx, 31, 0x38FE8Cu);
    ctx->pc = 0x38FE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FE84u;
            // 0x38fe88: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3900A0u;
    if (runtime->hasFunction(0x3900A0u)) {
        auto targetFn = runtime->lookupFunction(0x3900A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FE8Cu; }
        if (ctx->pc != 0x38FE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003900A0_0x3900a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FE8Cu; }
        if (ctx->pc != 0x38FE8Cu) { return; }
    }
    ctx->pc = 0x38FE8Cu;
label_38fe8c:
    // 0x38fe8c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x38fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x38fe90: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x38fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x38fe94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x38fe98: 0x24427ce0  addiu       $v0, $v0, 0x7CE0
    ctx->pc = 0x38fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31968));
    // 0x38fe9c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x38fea0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x38fea4: 0x24427d18  addiu       $v0, $v0, 0x7D18
    ctx->pc = 0x38fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32024));
    // 0x38fea8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x38fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x38feac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38feacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x38feb0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x38feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x38feb4: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x38FEB4u;
    SET_GPR_U32(ctx, 31, 0x38FEBCu);
    ctx->pc = 0x38FEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FEB4u;
            // 0x38feb8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FEBCu; }
        if (ctx->pc != 0x38FEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FEBCu; }
        if (ctx->pc != 0x38FEBCu) { return; }
    }
    ctx->pc = 0x38FEBCu;
label_38febc:
    // 0x38febc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x38febcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x38fec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38fec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fec4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38FEC4u;
    {
        const bool branch_taken_0x38fec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FEC4u;
            // 0x38fec8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fec4) {
            ctx->pc = 0x38FEE0u;
            goto label_38fee0;
        }
    }
    ctx->pc = 0x38FECCu;
    // 0x38fecc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x38feccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x38fed0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38fed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38fed4: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x38FED4u;
    SET_GPR_U32(ctx, 31, 0x38FEDCu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FEDCu; }
        if (ctx->pc != 0x38FEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FEDCu; }
        if (ctx->pc != 0x38FEDCu) { return; }
    }
    ctx->pc = 0x38FEDCu;
label_38fedc:
    // 0x38fedc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38fedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38fee0:
    // 0x38fee0: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x38fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x38fee4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38fee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fee8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38fee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38feec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38feecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38fef0: 0x3e00008  jr          $ra
    ctx->pc = 0x38FEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FEF0u;
            // 0x38fef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38FEF8u;
    // 0x38fef8: 0x0  nop
    ctx->pc = 0x38fef8u;
    // NOP
    // 0x38fefc: 0x0  nop
    ctx->pc = 0x38fefcu;
    // NOP
label_38ff00:
    // 0x38ff00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38ff04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38ff08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38ff08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38ff0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38ff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38ff10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ff10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ff14: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x38FF14u;
    {
        const bool branch_taken_0x38ff14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FF14u;
            // 0x38ff18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff14) {
            ctx->pc = 0x38FFB4u;
            goto label_38ffb4;
        }
    }
    ctx->pc = 0x38FF1Cu;
    // 0x38ff1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x38ff20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x38ff24: 0x24637e30  addiu       $v1, $v1, 0x7E30
    ctx->pc = 0x38ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32304));
    // 0x38ff28: 0x24427e68  addiu       $v0, $v0, 0x7E68
    ctx->pc = 0x38ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32360));
    // 0x38ff2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x38ff30: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x38FF30u;
    {
        const bool branch_taken_0x38ff30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FF30u;
            // 0x38ff34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff30) {
            ctx->pc = 0x38FF9Cu;
            goto label_38ff9c;
        }
    }
    ctx->pc = 0x38FF38u;
    // 0x38ff38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x38ff3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x38ff40: 0x24637de0  addiu       $v1, $v1, 0x7DE0
    ctx->pc = 0x38ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32224));
    // 0x38ff44: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38ff48: 0x24427e18  addiu       $v0, $v0, 0x7E18
    ctx->pc = 0x38ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32280));
    // 0x38ff4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x38ff50: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x38ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x38ff54: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x38ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x38ff58: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x38FF58u;
    SET_GPR_U32(ctx, 31, 0x38FF60u);
    ctx->pc = 0x38FF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FF58u;
            // 0x38ff5c: 0x24a5f760  addiu       $a1, $a1, -0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF60u; }
        if (ctx->pc != 0x38FF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF60u; }
        if (ctx->pc != 0x38FF60u) { return; }
    }
    ctx->pc = 0x38FF60u;
label_38ff60:
    // 0x38ff60: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x38ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x38ff64: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x38FF64u;
    SET_GPR_U32(ctx, 31, 0x38FF6Cu);
    ctx->pc = 0x38FF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FF64u;
            // 0x38ff68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF6Cu; }
        if (ctx->pc != 0x38FF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF6Cu; }
        if (ctx->pc != 0x38FF6Cu) { return; }
    }
    ctx->pc = 0x38FF6Cu;
label_38ff6c:
    // 0x38ff6c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x38ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x38ff70: 0xc0e400c  jal         func_390030
    ctx->pc = 0x38FF70u;
    SET_GPR_U32(ctx, 31, 0x38FF78u);
    ctx->pc = 0x38FF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FF70u;
            // 0x38ff74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x390030u;
    if (runtime->hasFunction(0x390030u)) {
        auto targetFn = runtime->lookupFunction(0x390030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF78u; }
        if (ctx->pc != 0x38FF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00390030_0x390030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF78u; }
        if (ctx->pc != 0x38FF78u) { return; }
    }
    ctx->pc = 0x38FF78u;
label_38ff78:
    // 0x38ff78: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x38ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x38ff7c: 0xc0e400c  jal         func_390030
    ctx->pc = 0x38FF7Cu;
    SET_GPR_U32(ctx, 31, 0x38FF84u);
    ctx->pc = 0x38FF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FF7Cu;
            // 0x38ff80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x390030u;
    if (runtime->hasFunction(0x390030u)) {
        auto targetFn = runtime->lookupFunction(0x390030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF84u; }
        if (ctx->pc != 0x38FF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00390030_0x390030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF84u; }
        if (ctx->pc != 0x38FF84u) { return; }
    }
    ctx->pc = 0x38FF84u;
label_38ff84:
    // 0x38ff84: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x38ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x38ff88: 0xc0e3ff4  jal         func_38FFD0
    ctx->pc = 0x38FF88u;
    SET_GPR_U32(ctx, 31, 0x38FF90u);
    ctx->pc = 0x38FF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FF88u;
            // 0x38ff8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38FFD0u;
    if (runtime->hasFunction(0x38FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x38FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF90u; }
        if (ctx->pc != 0x38FF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038FFD0_0x38ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF90u; }
        if (ctx->pc != 0x38FF90u) { return; }
    }
    ctx->pc = 0x38FF90u;
label_38ff90:
    // 0x38ff90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ff94: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x38FF94u;
    SET_GPR_U32(ctx, 31, 0x38FF9Cu);
    ctx->pc = 0x38FF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FF94u;
            // 0x38ff98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF9Cu; }
        if (ctx->pc != 0x38FF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FF9Cu; }
        if (ctx->pc != 0x38FF9Cu) { return; }
    }
    ctx->pc = 0x38FF9Cu;
label_38ff9c:
    // 0x38ff9c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x38ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x38ffa0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x38ffa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x38ffa4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38FFA4u;
    {
        const bool branch_taken_0x38ffa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x38ffa4) {
            ctx->pc = 0x38FFA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38FFA4u;
            // 0x38ffa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38FFB8u;
            goto label_38ffb8;
        }
    }
    ctx->pc = 0x38FFACu;
    // 0x38ffac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x38FFACu;
    SET_GPR_U32(ctx, 31, 0x38FFB4u);
    ctx->pc = 0x38FFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FFACu;
            // 0x38ffb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FFB4u; }
        if (ctx->pc != 0x38FFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FFB4u; }
        if (ctx->pc != 0x38FFB4u) { return; }
    }
    ctx->pc = 0x38FFB4u;
label_38ffb4:
    // 0x38ffb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38ffb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ffb8:
    // 0x38ffb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38ffb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ffbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38ffbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ffc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38ffc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ffc4: 0x3e00008  jr          $ra
    ctx->pc = 0x38FFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FFC4u;
            // 0x38ffc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38FFCCu;
    // 0x38ffcc: 0x0  nop
    ctx->pc = 0x38ffccu;
    // NOP
}
