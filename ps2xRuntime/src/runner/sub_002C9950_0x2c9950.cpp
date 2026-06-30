#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C9950
// Address: 0x2c9950 - 0x2c9a90
void sub_002C9950_0x2c9950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9950_0x2c9950");
#endif

    switch (ctx->pc) {
        case 0x2c996cu: goto label_2c996c;
        case 0x2c998cu: goto label_2c998c;
        case 0x2c99c0u: goto label_2c99c0;
        case 0x2c9a20u: goto label_2c9a20;
        case 0x2c9a2cu: goto label_2c9a2c;
        case 0x2c9a38u: goto label_2c9a38;
        case 0x2c9a44u: goto label_2c9a44;
        case 0x2c9a50u: goto label_2c9a50;
        case 0x2c9a5cu: goto label_2c9a5c;
        case 0x2c9a74u: goto label_2c9a74;
        default: break;
    }

    ctx->pc = 0x2c9950u;

    // 0x2c9950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9954: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c9954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c9958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c9958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c995c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c995cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2c9960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c9964: 0xc0b2774  jal         func_2C9DD0
    ctx->pc = 0x2C9964u;
    SET_GPR_U32(ctx, 31, 0x2C996Cu);
    ctx->pc = 0x2C9968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9964u;
            // 0x2c9968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9DD0u;
    if (runtime->hasFunction(0x2C9DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2C9DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C996Cu; }
        if (ctx->pc != 0x2C996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C9DD0_0x2c9dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C996Cu; }
        if (ctx->pc != 0x2C996Cu) { return; }
    }
    ctx->pc = 0x2C996Cu;
label_2c996c:
    // 0x2c996c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c996cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c9970: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c9974: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x2c9974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x2c9978: 0x244204e8  addiu       $v0, $v0, 0x4E8
    ctx->pc = 0x2c9978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1256));
    // 0x2c997c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c997cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c9980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9984: 0xc0b2770  jal         func_2C9DC0
    ctx->pc = 0x2C9984u;
    SET_GPR_U32(ctx, 31, 0x2C998Cu);
    ctx->pc = 0x2C9988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9984u;
            // 0x2c9988: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9DC0u;
    if (runtime->hasFunction(0x2C9DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C9DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C998Cu; }
        if (ctx->pc != 0x2C998Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C9DC0_0x2c9dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C998Cu; }
        if (ctx->pc != 0x2C998Cu) { return; }
    }
    ctx->pc = 0x2C998Cu;
label_2c998c:
    // 0x2c998c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c998cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c9990: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c9994: 0x24426070  addiu       $v0, $v0, 0x6070
    ctx->pc = 0x2c9994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24688));
    // 0x2c9998: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c9998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c999c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c99a0: 0x244260a8  addiu       $v0, $v0, 0x60A8
    ctx->pc = 0x2c99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24744));
    // 0x2c99a4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c99a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c99a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c99acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c99b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c99b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c99b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C99B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C99B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99B4u;
            // 0x2c99b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C99BCu;
    // 0x2c99bc: 0x0  nop
    ctx->pc = 0x2c99bcu;
    // NOP
label_2c99c0:
    // 0x2c99c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c99c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c99c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c99c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c99c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c99c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c99cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c99ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c99d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c99d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c99d4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C99D4u;
    {
        const bool branch_taken_0x2c99d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99D4u;
            // 0x2c99d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99d4) {
            ctx->pc = 0x2C9A74u;
            goto label_2c9a74;
        }
    }
    ctx->pc = 0x2C99DCu;
    // 0x2c99dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c99e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c99e4: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x2c99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x2c99e8: 0x244204e8  addiu       $v0, $v0, 0x4E8
    ctx->pc = 0x2c99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1256));
    // 0x2c99ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c99ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c99f0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C99F0u;
    {
        const bool branch_taken_0x2c99f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C99F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99F0u;
            // 0x2c99f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c99f0) {
            ctx->pc = 0x2C9A5Cu;
            goto label_2c9a5c;
        }
    }
    ctx->pc = 0x2C99F8u;
    // 0x2c99f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c99fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c9a00: 0x24630460  addiu       $v1, $v1, 0x460
    ctx->pc = 0x2c9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1120));
    // 0x2c9a04: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c9a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2c9a08: 0x24420498  addiu       $v0, $v0, 0x498
    ctx->pc = 0x2c9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1176));
    // 0x2c9a0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c9a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c9a10: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c9a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2c9a14: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2c9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c9a18: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2C9A18u;
    SET_GPR_U32(ctx, 31, 0x2C9A20u);
    ctx->pc = 0x2C9A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A18u;
            // 0x2c9a1c: 0x24a59b60  addiu       $a1, $a1, -0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A20u; }
        if (ctx->pc != 0x2C9A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A20u; }
        if (ctx->pc != 0x2C9A20u) { return; }
    }
    ctx->pc = 0x2C9A20u;
label_2c9a20:
    // 0x2c9a20: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2c9a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2c9a24: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2C9A24u;
    SET_GPR_U32(ctx, 31, 0x2C9A2Cu);
    ctx->pc = 0x2C9A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A24u;
            // 0x2c9a28: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A2Cu; }
        if (ctx->pc != 0x2C9A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A2Cu; }
        if (ctx->pc != 0x2C9A2Cu) { return; }
    }
    ctx->pc = 0x2C9A2Cu;
label_2c9a2c:
    // 0x2c9a2c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c9a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2c9a30: 0xc0b26bc  jal         func_2C9AF0
    ctx->pc = 0x2C9A30u;
    SET_GPR_U32(ctx, 31, 0x2C9A38u);
    ctx->pc = 0x2C9A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A30u;
            // 0x2c9a34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9AF0u;
    if (runtime->hasFunction(0x2C9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A38u; }
        if (ctx->pc != 0x2C9A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C9AF0_0x2c9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A38u; }
        if (ctx->pc != 0x2C9A38u) { return; }
    }
    ctx->pc = 0x2C9A38u;
label_2c9a38:
    // 0x2c9a38: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c9a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2c9a3c: 0xc0b26bc  jal         func_2C9AF0
    ctx->pc = 0x2C9A3Cu;
    SET_GPR_U32(ctx, 31, 0x2C9A44u);
    ctx->pc = 0x2C9A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A3Cu;
            // 0x2c9a40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9AF0u;
    if (runtime->hasFunction(0x2C9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A44u; }
        if (ctx->pc != 0x2C9A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C9AF0_0x2c9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A44u; }
        if (ctx->pc != 0x2C9A44u) { return; }
    }
    ctx->pc = 0x2C9A44u;
label_2c9a44:
    // 0x2c9a44: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2c9a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2c9a48: 0xc0b26a4  jal         func_2C9A90
    ctx->pc = 0x2C9A48u;
    SET_GPR_U32(ctx, 31, 0x2C9A50u);
    ctx->pc = 0x2C9A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A48u;
            // 0x2c9a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9A90u;
    if (runtime->hasFunction(0x2C9A90u)) {
        auto targetFn = runtime->lookupFunction(0x2C9A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A50u; }
        if (ctx->pc != 0x2C9A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C9A90_0x2c9a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A50u; }
        if (ctx->pc != 0x2C9A50u) { return; }
    }
    ctx->pc = 0x2C9A50u;
label_2c9a50:
    // 0x2c9a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9a54: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2C9A54u;
    SET_GPR_U32(ctx, 31, 0x2C9A5Cu);
    ctx->pc = 0x2C9A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A54u;
            // 0x2c9a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A5Cu; }
        if (ctx->pc != 0x2C9A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A5Cu; }
        if (ctx->pc != 0x2C9A5Cu) { return; }
    }
    ctx->pc = 0x2C9A5Cu;
label_2c9a5c:
    // 0x2c9a5c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c9a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2c9a60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c9a60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c9a64: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9A64u;
    {
        const bool branch_taken_0x2c9a64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c9a64) {
            ctx->pc = 0x2C9A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A64u;
            // 0x2c9a68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9A78u;
            goto label_2c9a78;
        }
    }
    ctx->pc = 0x2C9A6Cu;
    // 0x2c9a6c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C9A6Cu;
    SET_GPR_U32(ctx, 31, 0x2C9A74u);
    ctx->pc = 0x2C9A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A6Cu;
            // 0x2c9a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A74u; }
        if (ctx->pc != 0x2C9A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9A74u; }
        if (ctx->pc != 0x2C9A74u) { return; }
    }
    ctx->pc = 0x2C9A74u;
label_2c9a74:
    // 0x2c9a74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9a78:
    // 0x2c9a78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c9a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9a7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9a84: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9A84u;
            // 0x2c9a88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9A8Cu;
    // 0x2c9a8c: 0x0  nop
    ctx->pc = 0x2c9a8cu;
    // NOP
}
