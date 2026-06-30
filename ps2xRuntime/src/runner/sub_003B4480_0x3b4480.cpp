#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B4480
// Address: 0x3b4480 - 0x3b4650
void sub_003B4480_0x3b4480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4480_0x3b4480");
#endif

    switch (ctx->pc) {
        case 0x3b44a4u: goto label_3b44a4;
        case 0x3b44acu: goto label_3b44ac;
        case 0x3b44ccu: goto label_3b44cc;
        case 0x3b44d4u: goto label_3b44d4;
        case 0x3b4518u: goto label_3b4518;
        case 0x3b4520u: goto label_3b4520;
        case 0x3b45dcu: goto label_3b45dc;
        case 0x3b45f8u: goto label_3b45f8;
        case 0x3b4634u: goto label_3b4634;
        default: break;
    }

    ctx->pc = 0x3b4480u;

    // 0x3b4480: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x3B4480u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3B4488u;
    // 0x3b4488: 0x0  nop
    ctx->pc = 0x3b4488u;
    // NOP
    // 0x3b448c: 0x0  nop
    ctx->pc = 0x3b448cu;
    // NOP
    // 0x3b4490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b4494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b4494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b4498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b4498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b449c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x3B449Cu;
    SET_GPR_U32(ctx, 31, 0x3B44A4u);
    ctx->pc = 0x3B44A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B449Cu;
            // 0x3b44a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B44A4u; }
        if (ctx->pc != 0x3B44A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B44A4u; }
        if (ctx->pc != 0x3B44A4u) { return; }
    }
    ctx->pc = 0x3B44A4u;
label_3b44a4:
    // 0x3b44a4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x3B44A4u;
    SET_GPR_U32(ctx, 31, 0x3B44ACu);
    ctx->pc = 0x3B44A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B44A4u;
            // 0x3b44a8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B44ACu; }
        if (ctx->pc != 0x3B44ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B44ACu; }
        if (ctx->pc != 0x3B44ACu) { return; }
    }
    ctx->pc = 0x3B44ACu;
label_3b44ac:
    // 0x3b44ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3b44acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3b44b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3b44b4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x3b44b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x3b44b8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x3b44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x3b44bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b44bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3b44c0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3b44c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x3b44c4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x3B44C4u;
    SET_GPR_U32(ctx, 31, 0x3B44CCu);
    ctx->pc = 0x3B44C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B44C4u;
            // 0x3b44c8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B44CCu; }
        if (ctx->pc != 0x3B44CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B44CCu; }
        if (ctx->pc != 0x3B44CCu) { return; }
    }
    ctx->pc = 0x3B44CCu;
label_3b44cc:
    // 0x3b44cc: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x3B44CCu;
    SET_GPR_U32(ctx, 31, 0x3B44D4u);
    ctx->pc = 0x3B44D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B44CCu;
            // 0x3b44d0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B44D4u; }
        if (ctx->pc != 0x3B44D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B44D4u; }
        if (ctx->pc != 0x3B44D4u) { return; }
    }
    ctx->pc = 0x3B44D4u;
label_3b44d4:
    // 0x3b44d4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3b44d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x3b44d8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x3b44d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x3b44dc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3b44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x3b44e0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x3b44e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x3b44e4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3b44e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x3b44e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b44ec: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x3b44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x3b44f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b44f4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x3b44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x3b44f8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x3b44f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x3b44fc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3b44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x3b4500: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3b4500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x3b4504: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3b4504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x3b4508: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x3b4508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x3b450c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x3b450cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x3b4510: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x3B4510u;
    SET_GPR_U32(ctx, 31, 0x3B4518u);
    ctx->pc = 0x3B4514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4510u;
            // 0x3b4514: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4518u; }
        if (ctx->pc != 0x3B4518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4518u; }
        if (ctx->pc != 0x3B4518u) { return; }
    }
    ctx->pc = 0x3B4518u;
label_3b4518:
    // 0x3b4518: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x3B4518u;
    SET_GPR_U32(ctx, 31, 0x3B4520u);
    ctx->pc = 0x3B451Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4518u;
            // 0x3b451c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4520u; }
        if (ctx->pc != 0x3B4520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4520u; }
        if (ctx->pc != 0x3B4520u) { return; }
    }
    ctx->pc = 0x3B4520u;
label_3b4520:
    // 0x3b4520: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3b4520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3b4524: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x3b4524u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x3b4528: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x3b4528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x3b452c: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x3b452cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x3b4530: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b4530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b4534: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x3b4534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x3b4538: 0x8e0900c8  lw          $t1, 0xC8($s0)
    ctx->pc = 0x3b4538u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x3b453c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x3b453cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x3b4540: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3b4540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b4544: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3b4544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x3b4548: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b4548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3b454c: 0x25088a30  addiu       $t0, $t0, -0x75D0
    ctx->pc = 0x3b454cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937136));
    // 0x3b4550: 0x24e78a70  addiu       $a3, $a3, -0x7590
    ctx->pc = 0x3b4550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937200));
    // 0x3b4554: 0x24c6cfe0  addiu       $a2, $a2, -0x3020
    ctx->pc = 0x3b4554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954976));
    // 0x3b4558: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x3b4558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3b455c: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x3b455cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    // 0x3b4560: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x3b4560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
    // 0x3b4564: 0x24638ad0  addiu       $v1, $v1, -0x7530
    ctx->pc = 0x3b4564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937296));
    // 0x3b4568: 0xae0900c8  sw          $t1, 0xC8($s0)
    ctx->pc = 0x3b4568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 9));
    // 0x3b456c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b456cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4570: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x3b4570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x3b4574: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x3b4574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x3b4578: 0xae0600d0  sw          $a2, 0xD0($s0)
    ctx->pc = 0x3b4578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 6));
    // 0x3b457c: 0xae0500d0  sw          $a1, 0xD0($s0)
    ctx->pc = 0x3b457cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
    // 0x3b4580: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x3b4580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
    // 0x3b4584: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x3b4584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x3b4588: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x3b4588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x3b458c: 0xae1000d8  sw          $s0, 0xD8($s0)
    ctx->pc = 0x3b458cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 16));
    // 0x3b4590: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x3b4590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x3b4594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b4594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b459c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B459Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B45A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B459Cu;
            // 0x3b45a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B45A4u;
    // 0x3b45a4: 0x0  nop
    ctx->pc = 0x3b45a4u;
    // NOP
    // 0x3b45a8: 0x0  nop
    ctx->pc = 0x3b45a8u;
    // NOP
    // 0x3b45ac: 0x0  nop
    ctx->pc = 0x3b45acu;
    // NOP
    // 0x3b45b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b45b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b45b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b45b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b45b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b45b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b45bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b45bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b45c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b45c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b45c4: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3B45C4u;
    {
        const bool branch_taken_0x3b45c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B45C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B45C4u;
            // 0x3b45c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b45c4) {
            ctx->pc = 0x3B4634u;
            goto label_3b4634;
        }
    }
    ctx->pc = 0x3B45CCu;
    // 0x3b45cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3b45d0: 0x24428ad0  addiu       $v0, $v0, -0x7530
    ctx->pc = 0x3b45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937296));
    // 0x3b45d4: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x3B45D4u;
    SET_GPR_U32(ctx, 31, 0x3B45DCu);
    ctx->pc = 0x3B45D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B45D4u;
            // 0x3b45d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B45DCu; }
        if (ctx->pc != 0x3B45DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B45DCu; }
        if (ctx->pc != 0x3B45DCu) { return; }
    }
    ctx->pc = 0x3B45DCu;
label_3b45dc:
    // 0x3b45dc: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3B45DCu;
    {
        const bool branch_taken_0x3b45dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b45dc) {
            ctx->pc = 0x3B45E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B45DCu;
            // 0x3b45e0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4620u;
            goto label_3b4620;
        }
    }
    ctx->pc = 0x3B45E4u;
    // 0x3b45e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3b45e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b45e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b45ec: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x3b45ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x3b45f0: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x3B45F0u;
    SET_GPR_U32(ctx, 31, 0x3B45F8u);
    ctx->pc = 0x3B45F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B45F0u;
            // 0x3b45f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B45F8u; }
        if (ctx->pc != 0x3B45F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B45F8u; }
        if (ctx->pc != 0x3B45F8u) { return; }
    }
    ctx->pc = 0x3B45F8u;
label_3b45f8:
    // 0x3b45f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B45F8u;
    {
        const bool branch_taken_0x3b45f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b45f8) {
            ctx->pc = 0x3B461Cu;
            goto label_3b461c;
        }
    }
    ctx->pc = 0x3B4600u;
    // 0x3b4600: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b4600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3b4604: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x3b4604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x3b4608: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4608u;
    {
        const bool branch_taken_0x3b4608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4608u;
            // 0x3b460c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4608) {
            ctx->pc = 0x3B461Cu;
            goto label_3b461c;
        }
    }
    ctx->pc = 0x3B4610u;
    // 0x3b4610: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b4610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3b4614: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3b4614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x3b4618: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b4618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3b461c:
    // 0x3b461c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3b461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3b4620:
    // 0x3b4620: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b4620u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b4624: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4624u;
    {
        const bool branch_taken_0x3b4624 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b4624) {
            ctx->pc = 0x3B4628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4624u;
            // 0x3b4628: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B4638u;
            goto label_3b4638;
        }
    }
    ctx->pc = 0x3B462Cu;
    // 0x3b462c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B462Cu;
    SET_GPR_U32(ctx, 31, 0x3B4634u);
    ctx->pc = 0x3B4630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B462Cu;
            // 0x3b4630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4634u; }
        if (ctx->pc != 0x3B4634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B4634u; }
        if (ctx->pc != 0x3B4634u) { return; }
    }
    ctx->pc = 0x3B4634u;
label_3b4634:
    // 0x3b4634: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b4634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b4638:
    // 0x3b4638: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b4638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b463c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b463cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4644: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B4644u;
            // 0x3b4648: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B464Cu;
    // 0x3b464c: 0x0  nop
    ctx->pc = 0x3b464cu;
    // NOP
}
