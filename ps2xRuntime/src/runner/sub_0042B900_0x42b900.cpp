#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042B900
// Address: 0x42b900 - 0x42bac0
void sub_0042B900_0x42b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B900_0x42b900");
#endif

    switch (ctx->pc) {
        case 0x42b924u: goto label_42b924;
        case 0x42b92cu: goto label_42b92c;
        case 0x42b94cu: goto label_42b94c;
        case 0x42b954u: goto label_42b954;
        case 0x42b998u: goto label_42b998;
        case 0x42b9a0u: goto label_42b9a0;
        case 0x42ba6cu: goto label_42ba6c;
        case 0x42baa8u: goto label_42baa8;
        default: break;
    }

    ctx->pc = 0x42b900u;

    // 0x42b900: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x42B900u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x42B908u;
    // 0x42b908: 0x0  nop
    ctx->pc = 0x42b908u;
    // NOP
    // 0x42b90c: 0x0  nop
    ctx->pc = 0x42b90cu;
    // NOP
    // 0x42b910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42b914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42b918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42b918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42b91c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x42B91Cu;
    SET_GPR_U32(ctx, 31, 0x42B924u);
    ctx->pc = 0x42B920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B91Cu;
            // 0x42b920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B924u; }
        if (ctx->pc != 0x42B924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B924u; }
        if (ctx->pc != 0x42B924u) { return; }
    }
    ctx->pc = 0x42B924u;
label_42b924:
    // 0x42b924: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x42B924u;
    SET_GPR_U32(ctx, 31, 0x42B92Cu);
    ctx->pc = 0x42B928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B924u;
            // 0x42b928: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B92Cu; }
        if (ctx->pc != 0x42B92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B92Cu; }
        if (ctx->pc != 0x42B92Cu) { return; }
    }
    ctx->pc = 0x42B92Cu;
label_42b92c:
    // 0x42b92c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x42b930: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42b930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x42b934: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x42b934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x42b938: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x42b938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x42b93c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x42b940: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x42b940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x42b944: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x42B944u;
    SET_GPR_U32(ctx, 31, 0x42B94Cu);
    ctx->pc = 0x42B948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B944u;
            // 0x42b948: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B94Cu; }
        if (ctx->pc != 0x42B94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B94Cu; }
        if (ctx->pc != 0x42B94Cu) { return; }
    }
    ctx->pc = 0x42B94Cu;
label_42b94c:
    // 0x42b94c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x42B94Cu;
    SET_GPR_U32(ctx, 31, 0x42B954u);
    ctx->pc = 0x42B950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B94Cu;
            // 0x42b950: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B954u; }
        if (ctx->pc != 0x42B954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B954u; }
        if (ctx->pc != 0x42B954u) { return; }
    }
    ctx->pc = 0x42B954u;
label_42b954:
    // 0x42b954: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x42b954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x42b958: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x42b958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x42b95c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x42b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x42b960: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x42b960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x42b964: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x42b964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x42b968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42b968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42b96c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x42b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x42b970: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42b974: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x42b974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x42b978: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x42b978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x42b97c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x42b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x42b980: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x42b980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x42b984: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x42b984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x42b988: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x42b988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x42b98c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x42b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x42b990: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x42B990u;
    SET_GPR_U32(ctx, 31, 0x42B998u);
    ctx->pc = 0x42B994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B990u;
            // 0x42b994: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B998u; }
        if (ctx->pc != 0x42B998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B998u; }
        if (ctx->pc != 0x42B998u) { return; }
    }
    ctx->pc = 0x42B998u;
label_42b998:
    // 0x42b998: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x42B998u;
    SET_GPR_U32(ctx, 31, 0x42B9A0u);
    ctx->pc = 0x42B99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42B998u;
            // 0x42b99c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B9A0u; }
        if (ctx->pc != 0x42B9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42B9A0u; }
        if (ctx->pc != 0x42B9A0u) { return; }
    }
    ctx->pc = 0x42B9A0u;
label_42b9a0:
    // 0x42b9a0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x42b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x42b9a4: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x42b9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x42b9a8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x42b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x42b9ac: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x42b9acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x42b9b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x42b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42b9b4: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x42b9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x42b9b8: 0x8e0900c8  lw          $t1, 0xC8($s0)
    ctx->pc = 0x42b9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x42b9bc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x42b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x42b9c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x42b9c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42b9c4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x42b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x42b9c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x42b9cc: 0x2508c270  addiu       $t0, $t0, -0x3D90
    ctx->pc = 0x42b9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951536));
    // 0x42b9d0: 0x24e7c2b0  addiu       $a3, $a3, -0x3D50
    ctx->pc = 0x42b9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951600));
    // 0x42b9d4: 0x24c6cfe0  addiu       $a2, $a2, -0x3020
    ctx->pc = 0x42b9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954976));
    // 0x42b9d8: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x42b9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x42b9dc: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x42b9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    // 0x42b9e0: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x42b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
    // 0x42b9e4: 0x2463c310  addiu       $v1, $v1, -0x3CF0
    ctx->pc = 0x42b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951696));
    // 0x42b9e8: 0xae0900c8  sw          $t1, 0xC8($s0)
    ctx->pc = 0x42b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 9));
    // 0x42b9ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42b9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42b9f0: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x42b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x42b9f4: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x42b9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x42b9f8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x42b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x42b9fc: 0xae0600d4  sw          $a2, 0xD4($s0)
    ctx->pc = 0x42b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 6));
    // 0x42ba00: 0xae0500d4  sw          $a1, 0xD4($s0)
    ctx->pc = 0x42ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 5));
    // 0x42ba04: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x42ba04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
    // 0x42ba08: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x42ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x42ba0c: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x42ba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x42ba10: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x42ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x42ba14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42ba14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42ba18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42ba18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42ba1c: 0x3e00008  jr          $ra
    ctx->pc = 0x42BA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BA1Cu;
            // 0x42ba20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42BA24u;
    // 0x42ba24: 0x0  nop
    ctx->pc = 0x42ba24u;
    // NOP
    // 0x42ba28: 0x0  nop
    ctx->pc = 0x42ba28u;
    // NOP
    // 0x42ba2c: 0x0  nop
    ctx->pc = 0x42ba2cu;
    // NOP
    // 0x42ba30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42ba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42ba34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42ba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42ba38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42ba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42ba3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42ba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42ba40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42ba40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ba44: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x42BA44u;
    {
        const bool branch_taken_0x42ba44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BA44u;
            // 0x42ba48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ba44) {
            ctx->pc = 0x42BAA8u;
            goto label_42baa8;
        }
    }
    ctx->pc = 0x42BA4Cu;
    // 0x42ba4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42ba50: 0x2442c310  addiu       $v0, $v0, -0x3CF0
    ctx->pc = 0x42ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951696));
    // 0x42ba54: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x42BA54u;
    {
        const bool branch_taken_0x42ba54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BA54u;
            // 0x42ba58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ba54) {
            ctx->pc = 0x42BA90u;
            goto label_42ba90;
        }
    }
    ctx->pc = 0x42BA5Cu;
    // 0x42ba5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x42ba60: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x42ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x42ba64: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x42BA64u;
    SET_GPR_U32(ctx, 31, 0x42BA6Cu);
    ctx->pc = 0x42BA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BA64u;
            // 0x42ba68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BA6Cu; }
        if (ctx->pc != 0x42BA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BA6Cu; }
        if (ctx->pc != 0x42BA6Cu) { return; }
    }
    ctx->pc = 0x42BA6Cu;
label_42ba6c:
    // 0x42ba6c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x42BA6Cu;
    {
        const bool branch_taken_0x42ba6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42ba6c) {
            ctx->pc = 0x42BA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42BA6Cu;
            // 0x42ba70: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42BA94u;
            goto label_42ba94;
        }
    }
    ctx->pc = 0x42BA74u;
    // 0x42ba74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x42ba78: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x42ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x42ba7c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42BA7Cu;
    {
        const bool branch_taken_0x42ba7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BA7Cu;
            // 0x42ba80: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ba7c) {
            ctx->pc = 0x42BA90u;
            goto label_42ba90;
        }
    }
    ctx->pc = 0x42BA84u;
    // 0x42ba84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x42ba88: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x42ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x42ba8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_42ba90:
    // 0x42ba90: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x42ba90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_42ba94:
    // 0x42ba94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42ba94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x42ba98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42BA98u;
    {
        const bool branch_taken_0x42ba98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42ba98) {
            ctx->pc = 0x42BA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42BA98u;
            // 0x42ba9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42BAACu;
            goto label_42baac;
        }
    }
    ctx->pc = 0x42BAA0u;
    // 0x42baa0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x42BAA0u;
    SET_GPR_U32(ctx, 31, 0x42BAA8u);
    ctx->pc = 0x42BAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42BAA0u;
            // 0x42baa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BAA8u; }
        if (ctx->pc != 0x42BAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42BAA8u; }
        if (ctx->pc != 0x42BAA8u) { return; }
    }
    ctx->pc = 0x42BAA8u;
label_42baa8:
    // 0x42baa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42baa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42baac:
    // 0x42baac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42baacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42bab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42bab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42bab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42bab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42bab8: 0x3e00008  jr          $ra
    ctx->pc = 0x42BAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42BAB8u;
            // 0x42babc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42BAC0u;
}
