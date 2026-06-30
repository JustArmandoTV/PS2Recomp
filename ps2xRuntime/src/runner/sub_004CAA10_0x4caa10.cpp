#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CAA10
// Address: 0x4caa10 - 0x4cab10
void sub_004CAA10_0x4caa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CAA10_0x4caa10");
#endif

    switch (ctx->pc) {
        case 0x4caa34u: goto label_4caa34;
        case 0x4caa3cu: goto label_4caa3c;
        case 0x4caa5cu: goto label_4caa5c;
        case 0x4caa64u: goto label_4caa64;
        case 0x4caaa8u: goto label_4caaa8;
        case 0x4caab0u: goto label_4caab0;
        case 0x4caaf8u: goto label_4caaf8;
        default: break;
    }

    ctx->pc = 0x4caa10u;

    // 0x4caa10: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x4CAA10u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4CAA18u;
    // 0x4caa18: 0x0  nop
    ctx->pc = 0x4caa18u;
    // NOP
    // 0x4caa1c: 0x0  nop
    ctx->pc = 0x4caa1cu;
    // NOP
    // 0x4caa20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4caa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4caa24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4caa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4caa28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4caa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4caa2c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x4CAA2Cu;
    SET_GPR_U32(ctx, 31, 0x4CAA34u);
    ctx->pc = 0x4CAA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAA2Cu;
            // 0x4caa30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAA34u; }
        if (ctx->pc != 0x4CAA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAA34u; }
        if (ctx->pc != 0x4CAA34u) { return; }
    }
    ctx->pc = 0x4CAA34u;
label_4caa34:
    // 0x4caa34: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x4CAA34u;
    SET_GPR_U32(ctx, 31, 0x4CAA3Cu);
    ctx->pc = 0x4CAA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAA34u;
            // 0x4caa38: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAA3Cu; }
        if (ctx->pc != 0x4CAA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAA3Cu; }
        if (ctx->pc != 0x4CAA3Cu) { return; }
    }
    ctx->pc = 0x4CAA3Cu;
label_4caa3c:
    // 0x4caa3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4caa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4caa40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4caa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4caa44: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4caa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x4caa48: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4caa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x4caa4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4caa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4caa50: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4caa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x4caa54: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x4CAA54u;
    SET_GPR_U32(ctx, 31, 0x4CAA5Cu);
    ctx->pc = 0x4CAA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAA54u;
            // 0x4caa58: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAA5Cu; }
        if (ctx->pc != 0x4CAA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAA5Cu; }
        if (ctx->pc != 0x4CAA5Cu) { return; }
    }
    ctx->pc = 0x4CAA5Cu;
label_4caa5c:
    // 0x4caa5c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x4CAA5Cu;
    SET_GPR_U32(ctx, 31, 0x4CAA64u);
    ctx->pc = 0x4CAA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAA5Cu;
            // 0x4caa60: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAA64u; }
        if (ctx->pc != 0x4CAA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAA64u; }
        if (ctx->pc != 0x4CAA64u) { return; }
    }
    ctx->pc = 0x4CAA64u;
label_4caa64:
    // 0x4caa64: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4caa64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x4caa68: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4caa68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x4caa6c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4caa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x4caa70: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4caa70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x4caa74: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4caa74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x4caa78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4caa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4caa7c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4caa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x4caa80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4caa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4caa84: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4caa84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x4caa88: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4caa88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x4caa8c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4caa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x4caa90: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4caa90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x4caa94: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4caa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x4caa98: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4caa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x4caa9c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4caa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x4caaa0: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x4CAAA0u;
    SET_GPR_U32(ctx, 31, 0x4CAAA8u);
    ctx->pc = 0x4CAAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAAA0u;
            // 0x4caaa4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAAA8u; }
        if (ctx->pc != 0x4CAAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAAA8u; }
        if (ctx->pc != 0x4CAAA8u) { return; }
    }
    ctx->pc = 0x4CAAA8u;
label_4caaa8:
    // 0x4caaa8: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x4CAAA8u;
    SET_GPR_U32(ctx, 31, 0x4CAAB0u);
    ctx->pc = 0x4CAAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAAA8u;
            // 0x4caaac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAAB0u; }
        if (ctx->pc != 0x4CAAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAAB0u; }
        if (ctx->pc != 0x4CAAB0u) { return; }
    }
    ctx->pc = 0x4CAAB0u;
label_4caab0:
    // 0x4caab0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4caab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x4caab4: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x4caab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x4caab8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4caab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x4caabc: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x4caabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x4caac0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4caac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4caac4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x4caac4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4caac8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4caac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4caacc: 0x24631a50  addiu       $v1, $v1, 0x1A50
    ctx->pc = 0x4caaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6736));
    // 0x4caad0: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x4caad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4caad4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4caad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4caad8: 0x24421a90  addiu       $v0, $v0, 0x1A90
    ctx->pc = 0x4caad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6800));
    // 0x4caadc: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x4caadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x4caae0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4caae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4caae4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4caae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x4caae8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x4caae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x4caaec: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x4caaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x4caaf0: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x4CAAF0u;
    SET_GPR_U32(ctx, 31, 0x4CAAF8u);
    ctx->pc = 0x4CAAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAAF0u;
            // 0x4caaf4: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAAF8u; }
        if (ctx->pc != 0x4CAAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CAAF8u; }
        if (ctx->pc != 0x4CAAF8u) { return; }
    }
    ctx->pc = 0x4CAAF8u;
label_4caaf8:
    // 0x4caaf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4caaf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caafc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4caafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cab00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cab00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cab04: 0x3e00008  jr          $ra
    ctx->pc = 0x4CAB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CAB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CAB04u;
            // 0x4cab08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CAB0Cu;
    // 0x4cab0c: 0x0  nop
    ctx->pc = 0x4cab0cu;
    // NOP
}
