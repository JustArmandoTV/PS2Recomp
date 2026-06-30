#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C69F0
// Address: 0x2c69f0 - 0x2c6ae0
void sub_002C69F0_0x2c69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C69F0_0x2c69f0");
#endif

    switch (ctx->pc) {
        case 0x2c6a04u: goto label_2c6a04;
        case 0x2c6a0cu: goto label_2c6a0c;
        case 0x2c6a2cu: goto label_2c6a2c;
        case 0x2c6a34u: goto label_2c6a34;
        case 0x2c6a78u: goto label_2c6a78;
        case 0x2c6a80u: goto label_2c6a80;
        default: break;
    }

    ctx->pc = 0x2c69f0u;

    // 0x2c69f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c69f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c69f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c69f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c69f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c69f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c69fc: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x2C69FCu;
    SET_GPR_U32(ctx, 31, 0x2C6A04u);
    ctx->pc = 0x2C6A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C69FCu;
            // 0x2c6a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A04u; }
        if (ctx->pc != 0x2C6A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A04u; }
        if (ctx->pc != 0x2C6A04u) { return; }
    }
    ctx->pc = 0x2C6A04u;
label_2c6a04:
    // 0x2c6a04: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x2C6A04u;
    SET_GPR_U32(ctx, 31, 0x2C6A0Cu);
    ctx->pc = 0x2C6A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A04u;
            // 0x2c6a08: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A0Cu; }
        if (ctx->pc != 0x2C6A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A0Cu; }
        if (ctx->pc != 0x2C6A0Cu) { return; }
    }
    ctx->pc = 0x2C6A0Cu;
label_2c6a0c:
    // 0x2c6a0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6a10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c6a14: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2c6a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x2c6a18: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2c6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x2c6a1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c6a20: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2c6a24: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x2C6A24u;
    SET_GPR_U32(ctx, 31, 0x2C6A2Cu);
    ctx->pc = 0x2C6A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A24u;
            // 0x2c6a28: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A2Cu; }
        if (ctx->pc != 0x2C6A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A2Cu; }
        if (ctx->pc != 0x2C6A2Cu) { return; }
    }
    ctx->pc = 0x2C6A2Cu;
label_2c6a2c:
    // 0x2c6a2c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x2C6A2Cu;
    SET_GPR_U32(ctx, 31, 0x2C6A34u);
    ctx->pc = 0x2C6A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A2Cu;
            // 0x2c6a30: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A34u; }
        if (ctx->pc != 0x2C6A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A34u; }
        if (ctx->pc != 0x2C6A34u) { return; }
    }
    ctx->pc = 0x2C6A34u;
label_2c6a34:
    // 0x2c6a34: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c6a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2c6a38: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x2c6a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2c6a3c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2c6a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2c6a40: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2c6a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2c6a44: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2c6a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2c6a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6a4c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2c6a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2c6a50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6a54: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2c6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2c6a58: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x2c6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x2c6a5c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2c6a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2c6a60: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2c6a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2c6a64: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2c6a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2c6a68: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x2c6a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x2c6a6c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x2c6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x2c6a70: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x2C6A70u;
    SET_GPR_U32(ctx, 31, 0x2C6A78u);
    ctx->pc = 0x2C6A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A70u;
            // 0x2c6a74: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A78u; }
        if (ctx->pc != 0x2C6A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A78u; }
        if (ctx->pc != 0x2C6A78u) { return; }
    }
    ctx->pc = 0x2C6A78u;
label_2c6a78:
    // 0x2c6a78: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x2C6A78u;
    SET_GPR_U32(ctx, 31, 0x2C6A80u);
    ctx->pc = 0x2C6A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A78u;
            // 0x2c6a7c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A80u; }
        if (ctx->pc != 0x2C6A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6A80u; }
        if (ctx->pc != 0x2C6A80u) { return; }
    }
    ctx->pc = 0x2C6A80u;
label_2c6a80:
    // 0x2c6a80: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x2c6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x2c6a84: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2c6a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x2c6a88: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x2c6a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x2c6a8c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2c6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2c6a90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2c6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c6a94: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x2c6a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2c6a98: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x2c6a98u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6a9c: 0x24a56d00  addiu       $a1, $a1, 0x6D00
    ctx->pc = 0x2c6a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27904));
    // 0x2c6aa0: 0x24846d40  addiu       $a0, $a0, 0x6D40
    ctx->pc = 0x2c6aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27968));
    // 0x2c6aa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6aa8: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x2c6aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2c6aac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c6aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ab0: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x2c6ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x2c6ab4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2c6ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2c6ab8: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x2c6ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x2c6abc: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2c6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x2c6ac0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2c6ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x2c6ac4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2c6ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x2c6ac8: 0xa20300dc  sb          $v1, 0xDC($s0)
    ctx->pc = 0x2c6ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c6accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6ad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6AD4u;
            // 0x2c6ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6ADCu;
    // 0x2c6adc: 0x0  nop
    ctx->pc = 0x2c6adcu;
    // NOP
}
