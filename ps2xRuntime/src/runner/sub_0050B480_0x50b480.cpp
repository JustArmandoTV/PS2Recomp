#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050B480
// Address: 0x50b480 - 0x50ba00
void sub_0050B480_0x50b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B480_0x50b480");
#endif

    switch (ctx->pc) {
        case 0x50b4c8u: goto label_50b4c8;
        case 0x50b50cu: goto label_50b50c;
        case 0x50b51cu: goto label_50b51c;
        case 0x50b5b8u: goto label_50b5b8;
        case 0x50b6acu: goto label_50b6ac;
        case 0x50b70cu: goto label_50b70c;
        case 0x50b76cu: goto label_50b76c;
        case 0x50b7ccu: goto label_50b7cc;
        case 0x50b82cu: goto label_50b82c;
        case 0x50b88cu: goto label_50b88c;
        case 0x50b8ecu: goto label_50b8ec;
        case 0x50b938u: goto label_50b938;
        case 0x50b950u: goto label_50b950;
        case 0x50b9a8u: goto label_50b9a8;
        case 0x50b9b8u: goto label_50b9b8;
        default: break;
    }

    ctx->pc = 0x50b480u;

    // 0x50b480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50b484: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b488: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50b488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x50b48c: 0x24425190  addiu       $v0, $v0, 0x5190
    ctx->pc = 0x50b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20880));
    // 0x50b490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50b490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x50b494: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x50b494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x50b498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50b49c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50b49cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b4a0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x50b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x50b4a4: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x50b4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x50b4a8: 0xac850054  sw          $a1, 0x54($a0)
    ctx->pc = 0x50b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x50b4ac: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x50b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x50b4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50b4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b4b4: 0xa4800070  sh          $zero, 0x70($a0)
    ctx->pc = 0x50b4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x50b4b8: 0xa4800072  sh          $zero, 0x72($a0)
    ctx->pc = 0x50b4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x50b4bc: 0xa4800074  sh          $zero, 0x74($a0)
    ctx->pc = 0x50b4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x50b4c0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x50B4C0u;
    SET_GPR_U32(ctx, 31, 0x50B4C8u);
    ctx->pc = 0x50B4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B4C0u;
            // 0x50b4c4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B4C8u; }
        if (ctx->pc != 0x50B4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B4C8u; }
        if (ctx->pc != 0x50B4C8u) { return; }
    }
    ctx->pc = 0x50B4C8u;
label_50b4c8:
    // 0x50b4c8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x50b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x50b4cc: 0x26040076  addiu       $a0, $s0, 0x76
    ctx->pc = 0x50b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 118));
    // 0x50b4d0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x50b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x50b4d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50b4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b4d8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x50b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x50b4dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x50b4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x50b4e0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x50b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x50b4e4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x50b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x50b4e8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x50b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x50b4ec: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x50b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x50b4f0: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x50b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x50b4f4: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x50b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x50b4f8: 0xa2000074  sb          $zero, 0x74($s0)
    ctx->pc = 0x50b4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x50b4fc: 0xa2000075  sb          $zero, 0x75($s0)
    ctx->pc = 0x50b4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 0));
    // 0x50b500: 0xa200007a  sb          $zero, 0x7A($s0)
    ctx->pc = 0x50b500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x50b504: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x50B504u;
    SET_GPR_U32(ctx, 31, 0x50B50Cu);
    ctx->pc = 0x50B508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B504u;
            // 0x50b508: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B50Cu; }
        if (ctx->pc != 0x50B50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B50Cu; }
        if (ctx->pc != 0x50B50Cu) { return; }
    }
    ctx->pc = 0x50B50Cu;
label_50b50c:
    // 0x50b50c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x50b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x50b510: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x50b510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x50b514: 0xc04cc04  jal         func_133010
    ctx->pc = 0x50B514u;
    SET_GPR_U32(ctx, 31, 0x50B51Cu);
    ctx->pc = 0x50B518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B514u;
            // 0x50b518: 0x24a5b4c0  addiu       $a1, $a1, -0x4B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B51Cu; }
        if (ctx->pc != 0x50B51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B51Cu; }
        if (ctx->pc != 0x50B51Cu) { return; }
    }
    ctx->pc = 0x50B51Cu;
label_50b51c:
    // 0x50b51c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x50b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50b520: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x50b520u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x50b524: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x50b524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x50b528: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x50b528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x50b52c: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x50b52cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x50b530: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x50b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x50b534: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x50b534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x50b538: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50b538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x50b53c: 0x24e75150  addiu       $a3, $a3, 0x5150
    ctx->pc = 0x50b53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20816));
    // 0x50b540: 0xa2000023  sb          $zero, 0x23($s0)
    ctx->pc = 0x50b540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x50b544: 0x24635170  addiu       $v1, $v1, 0x5170
    ctx->pc = 0x50b544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20848));
    // 0x50b548: 0xae2700b0  sw          $a3, 0xB0($s1)
    ctx->pc = 0x50b548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 7));
    // 0x50b54c: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x50b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
    // 0x50b550: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b554: 0x24425590  addiu       $v0, $v0, 0x5590
    ctx->pc = 0x50b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21904));
    // 0x50b558: 0xae2700b4  sw          $a3, 0xB4($s1)
    ctx->pc = 0x50b558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 7));
    // 0x50b55c: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x50b55cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x50b560: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x50b560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x50b564: 0x24a555b0  addiu       $a1, $a1, 0x55B0
    ctx->pc = 0x50b564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21936));
    // 0x50b568: 0xae2700b8  sw          $a3, 0xB8($s1)
    ctx->pc = 0x50b568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 7));
    // 0x50b56c: 0xae2500b8  sw          $a1, 0xB8($s1)
    ctx->pc = 0x50b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 5));
    // 0x50b570: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x50b570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x50b574: 0x24c655d0  addiu       $a2, $a2, 0x55D0
    ctx->pc = 0x50b574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21968));
    // 0x50b578: 0xae2700bc  sw          $a3, 0xBC($s1)
    ctx->pc = 0x50b578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 7));
    // 0x50b57c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x50b580: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x50b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x50b584: 0xae2600bc  sw          $a2, 0xBC($s1)
    ctx->pc = 0x50b584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 6));
    // 0x50b588: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x50b588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x50b58c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b590: 0x246355f0  addiu       $v1, $v1, 0x55F0
    ctx->pc = 0x50b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22000));
    // 0x50b594: 0xae2700c0  sw          $a3, 0xC0($s1)
    ctx->pc = 0x50b594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 7));
    // 0x50b598: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x50b598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x50b59c: 0xae2300c0  sw          $v1, 0xC0($s1)
    ctx->pc = 0x50b59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
    // 0x50b5a0: 0x24425610  addiu       $v0, $v0, 0x5610
    ctx->pc = 0x50b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22032));
    // 0x50b5a4: 0xae2700d0  sw          $a3, 0xD0($s1)
    ctx->pc = 0x50b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 7));
    // 0x50b5a8: 0x24a5b4c0  addiu       $a1, $a1, -0x4B40
    ctx->pc = 0x50b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948032));
    // 0x50b5ac: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x50b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x50b5b0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x50B5B0u;
    SET_GPR_U32(ctx, 31, 0x50B5B8u);
    ctx->pc = 0x50B5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B5B0u;
            // 0x50b5b4: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B5B8u; }
        if (ctx->pc != 0x50B5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B5B8u; }
        if (ctx->pc != 0x50B5B8u) { return; }
    }
    ctx->pc = 0x50B5B8u;
label_50b5b8:
    // 0x50b5b8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x50b5bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b5c0: 0x24635150  addiu       $v1, $v1, 0x5150
    ctx->pc = 0x50b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20816));
    // 0x50b5c4: 0x24425630  addiu       $v0, $v0, 0x5630
    ctx->pc = 0x50b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22064));
    // 0x50b5c8: 0xae230100  sw          $v1, 0x100($s1)
    ctx->pc = 0x50b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 3));
    // 0x50b5cc: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x50b5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x50b5d0: 0xae220100  sw          $v0, 0x100($s1)
    ctx->pc = 0x50b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
    // 0x50b5d4: 0x26240104  addiu       $a0, $s1, 0x104
    ctx->pc = 0x50b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x50b5d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b5dc: 0xae230104  sw          $v1, 0x104($s1)
    ctx->pc = 0x50b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 3));
    // 0x50b5e0: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x50b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
    // 0x50b5e4: 0x262300b4  addiu       $v1, $s1, 0xB4
    ctx->pc = 0x50b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
    // 0x50b5e8: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x50b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x50b5ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b5f0: 0x244256d0  addiu       $v0, $v0, 0x56D0
    ctx->pc = 0x50b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22224));
    // 0x50b5f4: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x50b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x50b5f8: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x50b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x50b5fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x50b600: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x50b600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x50b604: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x50b604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x50b608: 0x262200b8  addiu       $v0, $s1, 0xB8
    ctx->pc = 0x50b608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x50b60c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x50b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x50b610: 0x262300bc  addiu       $v1, $s1, 0xBC
    ctx->pc = 0x50b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 188));
    // 0x50b614: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x50b614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x50b618: 0x262200c0  addiu       $v0, $s1, 0xC0
    ctx->pc = 0x50b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x50b61c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x50b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x50b620: 0x262300d0  addiu       $v1, $s1, 0xD0
    ctx->pc = 0x50b620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x50b624: 0xae250018  sw          $a1, 0x18($s1)
    ctx->pc = 0x50b624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
    // 0x50b628: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x50b628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b62c: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x50b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x50b630: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x50b630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
    // 0x50b634: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50b634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50b638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50b638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b63c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b640: 0x3e00008  jr          $ra
    ctx->pc = 0x50B640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B640u;
            // 0x50b644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B648u;
    // 0x50b648: 0x0  nop
    ctx->pc = 0x50b648u;
    // NOP
    // 0x50b64c: 0x0  nop
    ctx->pc = 0x50b64cu;
    // NOP
    // 0x50b650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50b654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50b658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50b65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b660: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x50B660u;
    {
        const bool branch_taken_0x50b660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b660) {
            ctx->pc = 0x50B664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B660u;
            // 0x50b664: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B6B0u;
            goto label_50b6b0;
        }
    }
    ctx->pc = 0x50B668u;
    // 0x50b668: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b66c: 0x244256d0  addiu       $v0, $v0, 0x56D0
    ctx->pc = 0x50b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22224));
    // 0x50b670: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x50B670u;
    {
        const bool branch_taken_0x50b670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B670u;
            // 0x50b674: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b670) {
            ctx->pc = 0x50B694u;
            goto label_50b694;
        }
    }
    ctx->pc = 0x50B678u;
    // 0x50b678: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b67c: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x50b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
    // 0x50b680: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B680u;
    {
        const bool branch_taken_0x50b680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B680u;
            // 0x50b684: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b680) {
            ctx->pc = 0x50B694u;
            goto label_50b694;
        }
    }
    ctx->pc = 0x50B688u;
    // 0x50b688: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b68c: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b690: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50b690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50b694:
    // 0x50b694: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x50b694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x50b698: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x50b698u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x50b69c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50B69Cu;
    {
        const bool branch_taken_0x50b69c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x50b69c) {
            ctx->pc = 0x50B6ACu;
            goto label_50b6ac;
        }
    }
    ctx->pc = 0x50B6A4u;
    // 0x50b6a4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x50B6A4u;
    SET_GPR_U32(ctx, 31, 0x50B6ACu);
    ctx->pc = 0x50B6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B6A4u;
            // 0x50b6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B6ACu; }
        if (ctx->pc != 0x50B6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B6ACu; }
        if (ctx->pc != 0x50B6ACu) { return; }
    }
    ctx->pc = 0x50B6ACu;
label_50b6ac:
    // 0x50b6ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x50b6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50b6b0:
    // 0x50b6b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b6b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x50B6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B6B8u;
            // 0x50b6bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B6C0u;
    // 0x50b6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50b6c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50b6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50b6cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b6d0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x50B6D0u;
    {
        const bool branch_taken_0x50b6d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b6d0) {
            ctx->pc = 0x50B6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B6D0u;
            // 0x50b6d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B710u;
            goto label_50b710;
        }
    }
    ctx->pc = 0x50B6D8u;
    // 0x50b6d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b6dc: 0x24425630  addiu       $v0, $v0, 0x5630
    ctx->pc = 0x50b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22064));
    // 0x50b6e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B6E0u;
    {
        const bool branch_taken_0x50b6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B6E0u;
            // 0x50b6e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b6e0) {
            ctx->pc = 0x50B6F4u;
            goto label_50b6f4;
        }
    }
    ctx->pc = 0x50B6E8u;
    // 0x50b6e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b6ec: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b6f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50b6f4:
    // 0x50b6f4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x50b6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x50b6f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x50b6f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x50b6fc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50B6FCu;
    {
        const bool branch_taken_0x50b6fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x50b6fc) {
            ctx->pc = 0x50B70Cu;
            goto label_50b70c;
        }
    }
    ctx->pc = 0x50B704u;
    // 0x50b704: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x50B704u;
    SET_GPR_U32(ctx, 31, 0x50B70Cu);
    ctx->pc = 0x50B708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B704u;
            // 0x50b708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B70Cu; }
        if (ctx->pc != 0x50B70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B70Cu; }
        if (ctx->pc != 0x50B70Cu) { return; }
    }
    ctx->pc = 0x50B70Cu;
label_50b70c:
    // 0x50b70c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x50b70cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50b710:
    // 0x50b710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b718: 0x3e00008  jr          $ra
    ctx->pc = 0x50B718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B718u;
            // 0x50b71c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B720u;
    // 0x50b720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50b724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50b728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50b72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b730: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x50B730u;
    {
        const bool branch_taken_0x50b730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b730) {
            ctx->pc = 0x50B734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B730u;
            // 0x50b734: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B770u;
            goto label_50b770;
        }
    }
    ctx->pc = 0x50B738u;
    // 0x50b738: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b73c: 0x24425610  addiu       $v0, $v0, 0x5610
    ctx->pc = 0x50b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22032));
    // 0x50b740: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B740u;
    {
        const bool branch_taken_0x50b740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B740u;
            // 0x50b744: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b740) {
            ctx->pc = 0x50B754u;
            goto label_50b754;
        }
    }
    ctx->pc = 0x50B748u;
    // 0x50b748: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b74c: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b750: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50b750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50b754:
    // 0x50b754: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x50b754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x50b758: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x50b758u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x50b75c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50B75Cu;
    {
        const bool branch_taken_0x50b75c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x50b75c) {
            ctx->pc = 0x50B76Cu;
            goto label_50b76c;
        }
    }
    ctx->pc = 0x50B764u;
    // 0x50b764: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x50B764u;
    SET_GPR_U32(ctx, 31, 0x50B76Cu);
    ctx->pc = 0x50B768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B764u;
            // 0x50b768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B76Cu; }
        if (ctx->pc != 0x50B76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B76Cu; }
        if (ctx->pc != 0x50B76Cu) { return; }
    }
    ctx->pc = 0x50B76Cu;
label_50b76c:
    // 0x50b76c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x50b76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50b770:
    // 0x50b770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b778: 0x3e00008  jr          $ra
    ctx->pc = 0x50B778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B778u;
            // 0x50b77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B780u;
    // 0x50b780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50b784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50b788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50b78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b790: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x50B790u;
    {
        const bool branch_taken_0x50b790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b790) {
            ctx->pc = 0x50B794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B790u;
            // 0x50b794: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B7D0u;
            goto label_50b7d0;
        }
    }
    ctx->pc = 0x50B798u;
    // 0x50b798: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b79c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x50b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
    // 0x50b7a0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B7A0u;
    {
        const bool branch_taken_0x50b7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B7A0u;
            // 0x50b7a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b7a0) {
            ctx->pc = 0x50B7B4u;
            goto label_50b7b4;
        }
    }
    ctx->pc = 0x50B7A8u;
    // 0x50b7a8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b7ac: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b7b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50b7b4:
    // 0x50b7b4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x50b7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x50b7b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x50b7b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x50b7bc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50B7BCu;
    {
        const bool branch_taken_0x50b7bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x50b7bc) {
            ctx->pc = 0x50B7CCu;
            goto label_50b7cc;
        }
    }
    ctx->pc = 0x50B7C4u;
    // 0x50b7c4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x50B7C4u;
    SET_GPR_U32(ctx, 31, 0x50B7CCu);
    ctx->pc = 0x50B7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B7C4u;
            // 0x50b7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B7CCu; }
        if (ctx->pc != 0x50B7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B7CCu; }
        if (ctx->pc != 0x50B7CCu) { return; }
    }
    ctx->pc = 0x50B7CCu;
label_50b7cc:
    // 0x50b7cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x50b7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50b7d0:
    // 0x50b7d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b7d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x50B7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B7D8u;
            // 0x50b7dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B7E0u;
    // 0x50b7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50b7e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50b7e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50b7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b7f0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x50B7F0u;
    {
        const bool branch_taken_0x50b7f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b7f0) {
            ctx->pc = 0x50B7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B7F0u;
            // 0x50b7f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B830u;
            goto label_50b830;
        }
    }
    ctx->pc = 0x50B7F8u;
    // 0x50b7f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b7fc: 0x244255d0  addiu       $v0, $v0, 0x55D0
    ctx->pc = 0x50b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21968));
    // 0x50b800: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B800u;
    {
        const bool branch_taken_0x50b800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B800u;
            // 0x50b804: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b800) {
            ctx->pc = 0x50B814u;
            goto label_50b814;
        }
    }
    ctx->pc = 0x50B808u;
    // 0x50b808: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b80c: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b810: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50b810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50b814:
    // 0x50b814: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x50b814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x50b818: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x50b818u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x50b81c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50B81Cu;
    {
        const bool branch_taken_0x50b81c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x50b81c) {
            ctx->pc = 0x50B82Cu;
            goto label_50b82c;
        }
    }
    ctx->pc = 0x50B824u;
    // 0x50b824: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x50B824u;
    SET_GPR_U32(ctx, 31, 0x50B82Cu);
    ctx->pc = 0x50B828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B824u;
            // 0x50b828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B82Cu; }
        if (ctx->pc != 0x50B82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B82Cu; }
        if (ctx->pc != 0x50B82Cu) { return; }
    }
    ctx->pc = 0x50B82Cu;
label_50b82c:
    // 0x50b82c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x50b82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50b830:
    // 0x50b830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b838: 0x3e00008  jr          $ra
    ctx->pc = 0x50B838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B838u;
            // 0x50b83c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B840u;
    // 0x50b840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50b844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50b848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50b84c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b850: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x50B850u;
    {
        const bool branch_taken_0x50b850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b850) {
            ctx->pc = 0x50B854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B850u;
            // 0x50b854: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B890u;
            goto label_50b890;
        }
    }
    ctx->pc = 0x50B858u;
    // 0x50b858: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b85c: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x50b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
    // 0x50b860: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B860u;
    {
        const bool branch_taken_0x50b860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B860u;
            // 0x50b864: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b860) {
            ctx->pc = 0x50B874u;
            goto label_50b874;
        }
    }
    ctx->pc = 0x50B868u;
    // 0x50b868: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b86c: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b870: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50b870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50b874:
    // 0x50b874: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x50b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x50b878: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x50b878u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x50b87c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50B87Cu;
    {
        const bool branch_taken_0x50b87c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x50b87c) {
            ctx->pc = 0x50B88Cu;
            goto label_50b88c;
        }
    }
    ctx->pc = 0x50B884u;
    // 0x50b884: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x50B884u;
    SET_GPR_U32(ctx, 31, 0x50B88Cu);
    ctx->pc = 0x50B888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B884u;
            // 0x50b888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B88Cu; }
        if (ctx->pc != 0x50B88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B88Cu; }
        if (ctx->pc != 0x50B88Cu) { return; }
    }
    ctx->pc = 0x50B88Cu;
label_50b88c:
    // 0x50b88c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x50b88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50b890:
    // 0x50b890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b898: 0x3e00008  jr          $ra
    ctx->pc = 0x50B898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B898u;
            // 0x50b89c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B8A0u;
    // 0x50b8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50b8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50b8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50b8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b8b0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x50B8B0u;
    {
        const bool branch_taken_0x50b8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b8b0) {
            ctx->pc = 0x50B8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B8B0u;
            // 0x50b8b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B8F0u;
            goto label_50b8f0;
        }
    }
    ctx->pc = 0x50B8B8u;
    // 0x50b8b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b8bc: 0x24425590  addiu       $v0, $v0, 0x5590
    ctx->pc = 0x50b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21904));
    // 0x50b8c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50B8C0u;
    {
        const bool branch_taken_0x50b8c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B8C0u;
            // 0x50b8c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b8c0) {
            ctx->pc = 0x50B8D4u;
            goto label_50b8d4;
        }
    }
    ctx->pc = 0x50B8C8u;
    // 0x50b8c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x50b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x50b8cc: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x50b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x50b8d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_50b8d4:
    // 0x50b8d4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x50b8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x50b8d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x50b8d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x50b8dc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50B8DCu;
    {
        const bool branch_taken_0x50b8dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x50b8dc) {
            ctx->pc = 0x50B8ECu;
            goto label_50b8ec;
        }
    }
    ctx->pc = 0x50B8E4u;
    // 0x50b8e4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x50B8E4u;
    SET_GPR_U32(ctx, 31, 0x50B8ECu);
    ctx->pc = 0x50B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B8E4u;
            // 0x50b8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B8ECu; }
        if (ctx->pc != 0x50B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B8ECu; }
        if (ctx->pc != 0x50B8ECu) { return; }
    }
    ctx->pc = 0x50B8ECu;
label_50b8ec:
    // 0x50b8ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x50b8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50b8f0:
    // 0x50b8f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b8f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x50B8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B8F8u;
            // 0x50b8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B900u;
    // 0x50b900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50b904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50b908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50b90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b910: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x50B910u;
    {
        const bool branch_taken_0x50b910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b910) {
            ctx->pc = 0x50B914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50B910u;
            // 0x50b914: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50B93Cu;
            goto label_50b93c;
        }
    }
    ctx->pc = 0x50B918u;
    // 0x50b918: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x50b918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x50b91c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x50b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x50b920: 0x24635190  addiu       $v1, $v1, 0x5190
    ctx->pc = 0x50b920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20880));
    // 0x50b924: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x50b924u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x50b928: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50B928u;
    {
        const bool branch_taken_0x50b928 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x50B92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B928u;
            // 0x50b92c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b928) {
            ctx->pc = 0x50B938u;
            goto label_50b938;
        }
    }
    ctx->pc = 0x50B930u;
    // 0x50b930: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x50B930u;
    SET_GPR_U32(ctx, 31, 0x50B938u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B938u; }
        if (ctx->pc != 0x50B938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B938u; }
        if (ctx->pc != 0x50B938u) { return; }
    }
    ctx->pc = 0x50B938u;
label_50b938:
    // 0x50b938: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x50b938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50b93c:
    // 0x50b93c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b944: 0x3e00008  jr          $ra
    ctx->pc = 0x50B944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B944u;
            // 0x50b948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B94Cu;
    // 0x50b94c: 0x0  nop
    ctx->pc = 0x50b94cu;
    // NOP
label_50b950:
    // 0x50b950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x50b954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50b954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50b958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x50b95c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x50b95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x50b960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50b960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50b964: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x50b964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x50b968: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50b968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b96c: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x50b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x50b970: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x50b970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x50b974: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x50b974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x50b978: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x50b978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x50b97c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x50b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x50b980: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x50b980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x50b984: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x50b984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x50b988: 0xa0800074  sb          $zero, 0x74($a0)
    ctx->pc = 0x50b988u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x50b98c: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x50b98cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x50b990: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x50b990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x50b994: 0xa0800075  sb          $zero, 0x75($a0)
    ctx->pc = 0x50b994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 117), (uint8_t)GPR_U32(ctx, 0));
    // 0x50b998: 0xa080007a  sb          $zero, 0x7A($a0)
    ctx->pc = 0x50b998u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x50b99c: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x50b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x50b9a0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x50B9A0u;
    SET_GPR_U32(ctx, 31, 0x50B9A8u);
    ctx->pc = 0x50B9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B9A0u;
            // 0x50b9a4: 0x26040076  addiu       $a0, $s0, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 118));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B9A8u; }
        if (ctx->pc != 0x50B9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B9A8u; }
        if (ctx->pc != 0x50B9A8u) { return; }
    }
    ctx->pc = 0x50B9A8u;
label_50b9a8:
    // 0x50b9a8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x50b9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x50b9ac: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x50b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x50b9b0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x50B9B0u;
    SET_GPR_U32(ctx, 31, 0x50B9B8u);
    ctx->pc = 0x50B9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50B9B0u;
            // 0x50b9b4: 0x24a5b4f0  addiu       $a1, $a1, -0x4B10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B9B8u; }
        if (ctx->pc != 0x50B9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50B9B8u; }
        if (ctx->pc != 0x50B9B8u) { return; }
    }
    ctx->pc = 0x50B9B8u;
label_50b9b8:
    // 0x50b9b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x50b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50b9bc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x50b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x50b9c0: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x50b9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x50b9c4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x50b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x50b9c8: 0xa2040021  sb          $a0, 0x21($s0)
    ctx->pc = 0x50b9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x50b9cc: 0xa2030022  sb          $v1, 0x22($s0)
    ctx->pc = 0x50b9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 3));
    // 0x50b9d0: 0xa2000023  sb          $zero, 0x23($s0)
    ctx->pc = 0x50b9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x50b9d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50b9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b9d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50b9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x50B9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B9DCu;
            // 0x50b9e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B9E4u;
    // 0x50b9e4: 0x0  nop
    ctx->pc = 0x50b9e4u;
    // NOP
    // 0x50b9e8: 0x0  nop
    ctx->pc = 0x50b9e8u;
    // NOP
    // 0x50b9ec: 0x0  nop
    ctx->pc = 0x50b9ecu;
    // NOP
    // 0x50b9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x50B9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50B9F0u;
            // 0x50b9f4: 0x24022b20  addiu       $v0, $zero, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50B9F8u;
    // 0x50b9f8: 0x0  nop
    ctx->pc = 0x50b9f8u;
    // NOP
    // 0x50b9fc: 0x0  nop
    ctx->pc = 0x50b9fcu;
    // NOP
}
