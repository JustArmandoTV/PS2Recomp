#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00504E70
// Address: 0x504e70 - 0x504f60
void sub_00504E70_0x504e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504E70_0x504e70");
#endif

    switch (ctx->pc) {
        case 0x504e84u: goto label_504e84;
        case 0x504e8cu: goto label_504e8c;
        case 0x504eacu: goto label_504eac;
        case 0x504eb4u: goto label_504eb4;
        case 0x504ef8u: goto label_504ef8;
        case 0x504f00u: goto label_504f00;
        default: break;
    }

    ctx->pc = 0x504e70u;

    // 0x504e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x504e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x504e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x504e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x504e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x504e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x504e7c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x504E7Cu;
    SET_GPR_U32(ctx, 31, 0x504E84u);
    ctx->pc = 0x504E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504E7Cu;
            // 0x504e80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504E84u; }
        if (ctx->pc != 0x504E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504E84u; }
        if (ctx->pc != 0x504E84u) { return; }
    }
    ctx->pc = 0x504E84u;
label_504e84:
    // 0x504e84: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x504E84u;
    SET_GPR_U32(ctx, 31, 0x504E8Cu);
    ctx->pc = 0x504E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504E84u;
            // 0x504e88: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504E8Cu; }
        if (ctx->pc != 0x504E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504E8Cu; }
        if (ctx->pc != 0x504E8Cu) { return; }
    }
    ctx->pc = 0x504E8Cu;
label_504e8c:
    // 0x504e8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x504e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x504e90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x504e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x504e94: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x504e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x504e98: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x504e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x504e9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x504e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x504ea0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x504ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x504ea4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x504EA4u;
    SET_GPR_U32(ctx, 31, 0x504EACu);
    ctx->pc = 0x504EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504EA4u;
            // 0x504ea8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504EACu; }
        if (ctx->pc != 0x504EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504EACu; }
        if (ctx->pc != 0x504EACu) { return; }
    }
    ctx->pc = 0x504EACu;
label_504eac:
    // 0x504eac: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x504EACu;
    SET_GPR_U32(ctx, 31, 0x504EB4u);
    ctx->pc = 0x504EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504EACu;
            // 0x504eb0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504EB4u; }
        if (ctx->pc != 0x504EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504EB4u; }
        if (ctx->pc != 0x504EB4u) { return; }
    }
    ctx->pc = 0x504EB4u;
label_504eb4:
    // 0x504eb4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x504eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x504eb8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x504eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x504ebc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x504ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x504ec0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x504ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x504ec4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x504ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x504ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x504ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x504ecc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x504eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x504ed0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x504ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x504ed4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x504ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x504ed8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x504ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x504edc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x504edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x504ee0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x504ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x504ee4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x504ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x504ee8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x504ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x504eec: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x504eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x504ef0: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x504EF0u;
    SET_GPR_U32(ctx, 31, 0x504EF8u);
    ctx->pc = 0x504EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504EF0u;
            // 0x504ef4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504EF8u; }
        if (ctx->pc != 0x504EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504EF8u; }
        if (ctx->pc != 0x504EF8u) { return; }
    }
    ctx->pc = 0x504EF8u;
label_504ef8:
    // 0x504ef8: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x504EF8u;
    SET_GPR_U32(ctx, 31, 0x504F00u);
    ctx->pc = 0x504EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x504EF8u;
            // 0x504efc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504F00u; }
        if (ctx->pc != 0x504F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x504F00u; }
        if (ctx->pc != 0x504F00u) { return; }
    }
    ctx->pc = 0x504F00u;
label_504f00:
    // 0x504f00: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x504f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x504f04: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x504f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x504f08: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x504f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x504f0c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x504f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x504f10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x504f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x504f14: 0x24848470  addiu       $a0, $a0, -0x7B90
    ctx->pc = 0x504f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935664));
    // 0x504f18: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x504f18u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x504f1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x504f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x504f20: 0x246384b0  addiu       $v1, $v1, -0x7B50
    ctx->pc = 0x504f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935728));
    // 0x504f24: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x504f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x504f28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x504f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504f2c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x504f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x504f30: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x504f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x504f34: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x504f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x504f38: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x504f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x504f3c: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x504f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
    // 0x504f40: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x504f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x504f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x504f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x504f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x504F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x504F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x504F4Cu;
            // 0x504f50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x504F54u;
    // 0x504f54: 0x0  nop
    ctx->pc = 0x504f54u;
    // NOP
    // 0x504f58: 0x0  nop
    ctx->pc = 0x504f58u;
    // NOP
    // 0x504f5c: 0x0  nop
    ctx->pc = 0x504f5cu;
    // NOP
}
